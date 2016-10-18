//region Imports

import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;

//endregion

//region Types

MFUNCTION ::= (ID: char(1), Arguments: MFUNCTION(1));

MCONFIG ::= (Label: MFUNCTION(0), Symbols: char(2), Operations: char(2), FinalConfig: MFUNCTION(0));
STATE ::= (CurrentConfig: MFUNCTION(0), CurrentPosition: int(0), Tape: char(1));
INPUT_DATA ::= (Iterations: int(0), InitialTape: char(1), StartingPosition: int(0), InitialConfig: MFUNCTION(0), MConfigs: MCONFIG(1));

TOKEN ::= (Value: char(1), Type: char(1));

PARSERETURN ::= (TokenPosition : int(0), ReturnList : MFUNCTION(1));

RETURNVALUE ::= (FinalState: STATE(0), Output: char(1), ConfigTable: MCONFIG(1), RetIterations: int(0));

//endregion

//region Constants

SPACE_CHAR := '_';
DELIMITER := '|';

NULL_FUNCTION := (ID: "", Arguments: []);

SCANNED_FUNCTION := SINGLETON_FUNCTION("scanned");

SINGLETON_FUNCTION(id(1)) := (ID: id, Arguments: []);

NULL_CONFIG := (Label: NULL_FUNCTION, Symbols: [], Operations: [], FinalConfig: NULL_FUNCTION);

TRACE_HEADER := ["Config:\t| Place:\t| Tape:"];

//endregion

//region Helpers

MFunctionToString(MFunction(0)) :=
	let
		args := MFunctionToString(MFunction.Arguments);
	in
			MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")" when size(args) > 0
		else
			MFunction.ID;

StateToString(state(0)) :=
	MFunctionToString(state.CurrentConfig) ++ 
	"  \t\t| " ++ intToString(state.CurrentPosition) ++ 
	"  \t| " ++ state.Tape;
	
StateToArrowString(state(0)) :=
	state.Tape ++ "\n" ++
	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++
	duplicate(' ', state.CurrentPosition - 1) ++ MFunctionToString(state.CurrentConfig) ++ "\n";

HeadOfEach(strings(2))[i] :=
	head(strings[i]);
	
RemoveCharacter(character(0), string(1))[i] :=
	string[i] when not(string[i] = character); 

GetFSquares(Tape(1))[i] :=
	Tape[i] when (i mod 2) = 1;

//endregion

//region Parsing

//region Tokenizing MFunctions

delimitters := "(),|";

MakeToken(String(1)) :=
	let
		type := 
					("(" when head(String) = '('
				else
					")" when head(String) = ')'
				else
					"," when head(String) = ','
				else
					"|" when head(String) = '|'
				else
					"ID")  when size(String) = 1
			else
				"ID";
	in
		(Value: String, Type: type);

TokenizeLine(Line(1)) :=
	TokenizeLineWorker(Line, 1, "", []);
	
TokenizeLineWorker(Line(1), Position(0), CurrentToken(1), Tokens(1)) :=
	let
		atDelim := 
				some(Line[Position] = delimitters) when Position <= size(Line)
			else 
				false;
				
		haveP := 
				Line[Position] = 'P' and size(CurrentToken) = 0 when Position <= size(Line)
			else 
				false;
		
		newToken := MakeToken(CurrentToken);
		delimToken := MakeToken([Line[Position]]);
		
		newTokens := 
				Tokens ++ [newToken] ++ [delimToken] when atDelim and size(CurrentToken) > 0
			else
				Tokens ++ [delimToken] when atDelim or haveP
			else
				Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0
			else
				Tokens;
				
		newCurrentToken := 
				"" when atDelim or haveP
			else
				CurrentToken ++ [Line[Position]] when Position <= size(Line)
			else 
				CurrentToken;
		
	in
			newTokens when Position > size(Line)
		else
			TokenizeLineWorker(Line, Position + 1, newCurrentToken, newTokens);

//endregion

//region Recursive Decent Parsing

ParseMFunction(Tokens(1), Position(0)) :=
	let
		currentToken := Tokens[Position];
		id := currentToken.Value;
		args := ParseArgs(Tokens, Position + 1);
	in
			(ReturnList: [(ID: id, Arguments: args.ReturnList)], TokenPosition: args.TokenPosition) when equalList(currentToken.Type, "ID")
		else
			(ReturnList: [(ID: "", Arguments: [])], TokenPosition: Position);
		
ParseArgs(Tokens(1), Position(0)) :=
	let
		currentToken := Tokens[Position];
		idList := ParseIDList(Tokens, Position + 1);
	in
			(ReturnList: [], TokenPosition: Position) when Position > size(Tokens)
		else
			(ReturnList: idList.ReturnList, TokenPosition: idList.TokenPosition + 1) when equalList(currentToken.Type, "(")
		else
			(ReturnList: [], TokenPosition: Position);
			
ParseIDList(Tokens(1), Position(0)) :=
	let
		currentToken := Tokens[Position];
		mFunction := ParseMFunction(Tokens, Position);
		nextIDList := 
				ParseIDList(Tokens, mFunction.TokenPosition) when Position > size(Tokens)
			else
				ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")
			else
				ParseIDList(Tokens, mFunction.TokenPosition);
	in
			(ReturnList: [], TokenPosition: Position) when  Position > size(Tokens)
		else
			(ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")
		else
			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition);

//endregion

ParseConfig(Line(1)) :=
	let
		entries := split(Line, DELIMITER);
		label := head(ParseMFunction(TokenizeLine(entries[1]), 1).ReturnList);
		symbols := split(entries[2], ',');
		operations := split(entries[3], ',');
		finalConfig := head(ParseMFunction(TokenizeLine(entries[4]), 1).ReturnList);
	in
		((Label: label, Symbols: symbols, Operations: operations, FinalConfig: finalConfig) 
				when not((Line[1] = '/') and (Line[2] = '/'))) 
			when size(Line) > 0;

ParseTextFile(Text(1)) :=
	let
		noSpaces := RemoveCharacter('\t', RemoveCharacter('\r', RemoveCharacter(' ', Text)));
		lines := split(noSpaces, '\n');
		iterations := stringToInt(lines[1]);
		initialTape := lines[2];
		initialPosition := stringToInt(lines[3]);
		initialConfig := SINGLETON_FUNCTION(lines[4]);
		mConfigs := ParseConfig(lines[5 ... size(lines)]);
	in
		(Iterations: iterations, InitialTape: initialTape, 
		StartingPosition: initialPosition, InitialConfig: initialConfig, MConfigs: mConfigs);
		
//endregion

//region Config Finding

Matches(currentSymbol(0), symbols(2)) :=
		true when size(symbols) = 0
	else
		true when currentSymbol = SPACE_CHAR and some(equalListNT("none", symbols))
	else
		true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))
	else
		true when some(currentSymbol = HeadOfEach(symbols))
	else
		false;

GetCurrentSymbol(State(0)) :=
		State.Tape[State.CurrentPosition] when size(State.Tape) >= State.CurrentPosition and State.CurrentPosition > 0
	else 
		SPACE_CHAR;

GetConfigHelper(mfunction(0), symbol(0), mConfigs(1))[i] :=
	let
		replaced := ReplaceScanned(Replace(mConfigs[i], mfunction), symbol);
	in 
		(replaced when Matches(symbol, replaced.Symbols)) 
					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments);

GetConfig(mfunction(0), symbol(0), mConfigs(1)) :=
	let
		searchResults := GetConfigHelper(mfunction, symbol, mConfigs);
	in
			NULL_CONFIG when size(mfunction.ID) = 0
		else
			NULL_CONFIG when size(searchResults) = 0
		else
			searchResults[1];

//endregion

//region MFunction Replacement

ReplaceScanned(TargetMConfig(0), symbol(0)) :=
	let
		symbolArgument := SINGLETON_FUNCTION([symbol]);
		newOperations := ReplaceInOperations(symbolArgument, SCANNED_FUNCTION, TargetMConfig.Operations);
		newFinalConfig := ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig);
	in
		(Label: TargetMConfig.Label, Symbols: TargetMConfig.Symbols, Operations: newOperations, FinalConfig: newFinalConfig);

Replace(TargetMConfig(0), CurrentMFunction(0)) :=
	ReplaceWorker(TargetMConfig, CurrentMFunction, 1);

ReplaceWorker(TargetMConfig(0), CurrentMFunction(0), Argument(0)) :=
	let
		newSymbols := ReplaceInSymbols(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Symbols);
		newOperations := ReplaceInOperations(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Operations);
		newFinalConfig := ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig);
		newTargetConfig := (Label: TargetMConfig.Label, Symbols: newSymbols, Operations: newOperations, FinalConfig: newFinalConfig);
	in
			(Label: CurrentMFunction, Symbols: TargetMConfig.Symbols, Operations: TargetMConfig.Operations, FinalConfig: TargetMConfig.FinalConfig)
				when Argument > size(CurrentMFunction.Arguments)
		else
			ReplaceWorker(newTargetConfig, CurrentMFunction, Argument + 1);
		
ReplaceInMFunction(NewSymbol(0), OldSymbol(0), MFunction(0)) :=
	let
		args := ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments);
		newMFunction := 
				(ID: MFunction.ID, Arguments: args) when size(MFunction.Arguments) > 0
			else
				NewSymbol when size(MFunction.Arguments) = 0 and equalList(MFunction.ID, OldSymbol.ID)
			else
				MFunction;
	in
		newMFunction;
	
ReplaceInSymbols(NewSymbol(0), OldSymbol(0), Symbols(2))[i] :=
		NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(Symbols[i], OldSymbol.ID)
	else
		Symbols[i];
		
ReplaceInOperations(NewSymbol(0), OldSymbol(0), Operations(2))[i] :=
		Operations[i] when size(Operations[i]) <= 1
	else 
		[head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)
	else
		Operations[i];
	

//endregion

//region Operations

TrimTapeEnd(tape(1), position(0)) :=
		tape when position = size(tape)
	else
		tape when not(last(tape) = SPACE_CHAR)
	else
		TrimTapeEnd(allButLast(tape), position);
		
TrimTapeBegin(tape(1), position(0)) :=
		(CurrentPosition: position, Tape: tape) when position = 1
	else
		(CurrentPosition: position, Tape: tape) when not(head(tape) = SPACE_CHAR)
	else
		TrimTapeBegin(tail(tape), position - 1);			

ApplyOperations(State(0), Operations(2)) :=
	let
		newState := ApplyOperation(State, head(Operations));
	in
			State when size(Operations) = 0
		else
			ApplyOperations(newState, tail(Operations));

ApplyOperation(State(0), Operation(1)) :=
	let
		newTape := 
				PrintOperation(head(tail(Operation)), State.CurrentPosition, State.Tape) when head(Operation) = 'P'
			else
				EraseOperation(State.CurrentPosition, State.Tape) when head(Operation) = 'E'
			else
				[SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1
			else
				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)
			else
				State.Tape;
		
		newPosition := 
				1 when head(Operation) = 'L' and State.CurrentPosition = 1
			else
				State.CurrentPosition + 1 when head(Operation) = 'R'
			else
				State.CurrentPosition - 1 when head(Operation) = 'L'
			else
				State.CurrentPosition;
				
		trimmedTape := TrimTapeEnd(newTape, newPosition);
	in
			State when size(Operation) = 0
		else
			TrimTapeBegin(trimmedTape, newPosition);

PrintOperation(Symbol(0), Position(0), Tape(1)) :=
	let
		diff := Position - size(Tape) when Position > size(Tape) else 0;
		expandedTape := Tape ++ duplicate(SPACE_CHAR, diff);
		finalTape := setElementAt(expandedTape, Position, Symbol);
	in
		finalTape;
		
EraseOperation(Position(0), Tape(1)) :=
	PrintOperation(SPACE_CHAR, Position, Tape);

//endregion

//region Execution

RunMachine(Text(1), Flag(1), NewState(0), InputMConfigs(1), Iterations(0)) :=
	let
		input := 
				ParseTextFile(Text) when size(Text) > 0 
			else
				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs);
				
		initialState := 
				(CurrentConfig: input.InitialConfig, CurrentPosition: input.StartingPosition, Tape: input.InitialTape);
		
		processed := 
				Process(initialState, input.MConfigs, input.Iterations);
				
		processedWithTrace := 
				ProcessWithTrace(initialState, input.MConfigs, input.Iterations);
				
		doesHalt := 
				DoesMachineHalt(initialState, input.MConfigs, input.Iterations);
				
		
		
		finalState := 
					last(processedWithTrace) when equalList(Flag, "trace") or equalList(Flag, "arrow-trace")
				else
					processed;
		
		outString := 
					delimit(TRACE_HEADER ++ StateToString(processedWithTrace), '\n') when equalList(Flag, "trace")
				else
					delimit(StateToArrowString(processedWithTrace), '\n') when equalList(Flag, "arrow-trace")
				else
					processed.Tape when equalList(Flag, "tape")
				else
					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")
				else
					boolToString(doesHalt) when equalList(Flag, "halts")
				else
					GetUtmOut(processed) when equalList(Flag, "utm-out")
				else
					StateToArrowString(processed) when equalList(Flag, "arrow-state")
				else
					StateToString(processed);
		
	in
		(FinalState: finalState, Output: outString, ConfigTable: input.MConfigs, RetIterations: input.Iterations);
			
GetUtmOut(State(0))[i] :=
	let
		splitTape := split(State.Tape, ':');
	in
			'0' when equalList(splitTape[i], "_0_")
	 	else
	 		'1' when equalList(splitTape[i], "_1_");
			
DoesMachineHalt(InitialState(0), mConfigs(1), Iterations(0)) :=
	let
		resultState := Process(InitialState, mConfigs, Iterations);
	in
		equalList(resultState.CurrentConfig.ID, "halt");

ProcessWithTrace(InitialState(0), mConfigs(1), Iterations(0)) :=
		[InitialState] when Iterations <= 0 
							or size(InitialState.CurrentConfig.ID) = 0 
							or equalList(InitialState.CurrentConfig.ID, "halt")
	else
		[InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1);

Process(InitialState(0), mConfigs(1), Iterations(0)) :=
		InitialState when Iterations = 0 
							or size(InitialState.CurrentConfig.ID) = 0 
							or equalList(InitialState.CurrentConfig.ID, "halt")
	else
		Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1);

Iterate(State(0), mConfigs(1)) :=
	let
		currentConfig := GetConfig(State.CurrentConfig, GetCurrentSymbol(State), mConfigs);
		newState := Execute(State, currentConfig);
	in
		newState;
	
Execute(State(0), mConfig(0)) :=
	let
		newState := ApplyOperations(State, mConfig.Operations);
	in
		(CurrentConfig: mConfig.FinalConfig, CurrentPosition: newState.CurrentPosition, Tape: newState.Tape);

//endregion
