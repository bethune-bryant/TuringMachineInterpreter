#include "SL_Generated.h"
class Stack;

#if (defined(__GNUC__) && (__GNUC__) == 4 && ((__GNUC_MINOR__) >= 4 && (__GNUC_MINOR__) <= 6))
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#if (defined(__GNUC__) && ((__GNUC__) > 4 || ((__GNUC__) == 4 && (__GNU_MINOR__) >= 6))) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#if defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#pragma GCC diagnostic ignored "-Wsometimes-uninitialized"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include <tbb/task.h>
#include <tbb/parallel_for.h>
using namespace tbb;
ostream &operator<<(ostream &stream, const _sl_MFUNCTION_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_MFUNCTION_0&_lhs, const _sl_MFUNCTION_0&_rhs)
{
return ((_lhs.ID == _rhs.ID)&&(_lhs.Arguments == _rhs.Arguments));
}
bool operator!=(const _sl_MFUNCTION_0&_lhs, const _sl_MFUNCTION_0&_rhs)
{
 return ((_lhs.ID != _rhs.ID)||(_lhs.Arguments != _rhs.Arguments));
}
ostream &operator<<(ostream &stream, const _sl_MCONFIG_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_MCONFIG_0&_lhs, const _sl_MCONFIG_0&_rhs)
{
return ((_lhs.Label == _rhs.Label)&&(_lhs.Symbols == _rhs.Symbols)&&(_lhs.Operations == _rhs.Operations)&&(_lhs.FinalConfig == _rhs.FinalConfig));
}
bool operator!=(const _sl_MCONFIG_0&_lhs, const _sl_MCONFIG_0&_rhs)
{
 return ((_lhs.Label != _rhs.Label)||(_lhs.Symbols != _rhs.Symbols)||(_lhs.Operations != _rhs.Operations)||(_lhs.FinalConfig != _rhs.FinalConfig));
}
ostream &operator<<(ostream &stream, const _sl_STATE_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_STATE_0&_lhs, const _sl_STATE_0&_rhs)
{
return ((_lhs.CurrentConfig == _rhs.CurrentConfig)&&(_lhs.CurrentPosition == _rhs.CurrentPosition)&&(_lhs.Tape == _rhs.Tape));
}
bool operator!=(const _sl_STATE_0&_lhs, const _sl_STATE_0&_rhs)
{
 return ((_lhs.CurrentConfig != _rhs.CurrentConfig)||(_lhs.CurrentPosition != _rhs.CurrentPosition)||(_lhs.Tape != _rhs.Tape));
}
ostream &operator<<(ostream &stream, const _sl_INPUT_DATA_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_INPUT_DATA_0&_lhs, const _sl_INPUT_DATA_0&_rhs)
{
return ((_lhs.Iterations == _rhs.Iterations)&&(_lhs.InitialTape == _rhs.InitialTape)&&(_lhs.StartingPosition == _rhs.StartingPosition)&&(_lhs.InitialConfig == _rhs.InitialConfig)&&(_lhs.MConfigs == _rhs.MConfigs));
}
bool operator!=(const _sl_INPUT_DATA_0&_lhs, const _sl_INPUT_DATA_0&_rhs)
{
 return ((_lhs.Iterations != _rhs.Iterations)||(_lhs.InitialTape != _rhs.InitialTape)||(_lhs.StartingPosition != _rhs.StartingPosition)||(_lhs.InitialConfig != _rhs.InitialConfig)||(_lhs.MConfigs != _rhs.MConfigs));
}
ostream &operator<<(ostream &stream, const _sl_TOKEN_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_TOKEN_0&_lhs, const _sl_TOKEN_0&_rhs)
{
return ((_lhs.Value == _rhs.Value)&&(_lhs.Type == _rhs.Type));
}
bool operator!=(const _sl_TOKEN_0&_lhs, const _sl_TOKEN_0&_rhs)
{
 return ((_lhs.Value != _rhs.Value)||(_lhs.Type != _rhs.Type));
}
ostream &operator<<(ostream &stream, const _sl_PARSERETURN_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_PARSERETURN_0&_lhs, const _sl_PARSERETURN_0&_rhs)
{
return ((_lhs.TokenPosition == _rhs.TokenPosition)&&(_lhs.ReturnList == _rhs.ReturnList));
}
bool operator!=(const _sl_PARSERETURN_0&_lhs, const _sl_PARSERETURN_0&_rhs)
{
 return ((_lhs.TokenPosition != _rhs.TokenPosition)||(_lhs.ReturnList != _rhs.ReturnList));
}
ostream &operator<<(ostream &stream, const _sl_RETURNVALUE_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_RETURNVALUE_0&_lhs, const _sl_RETURNVALUE_0&_rhs)
{
return ((_lhs.FinalState == _rhs.FinalState)&&(_lhs.Output == _rhs.Output)&&(_lhs.ConfigTable == _rhs.ConfigTable)&&(_lhs.RetIterations == _rhs.RetIterations));
}
bool operator!=(const _sl_RETURNVALUE_0&_lhs, const _sl_RETURNVALUE_0&_rhs)
{
 return ((_lhs.FinalState != _rhs.FinalState)||(_lhs.Output != _rhs.Output)||(_lhs.ConfigTable != _rhs.ConfigTable)||(_lhs.RetIterations != _rhs.RetIterations));
}
namespace
{
void SequenceL_RunMachine_0(Sequence< char > &_SequenceL__Arg_Text, Sequence< char > &_SequenceL__Arg_Flag, _sl_STATE_0 &_SequenceL__Arg_NewState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_InputMConfigs, int _SequenceL__Arg_Iterations, _sl_RETURNVALUE_0 &_SequenceL__resultConv);
void SequenceL_ParseTextFile_0(Sequence< char > &_SequenceL__Arg_Text, _sl_INPUT_DATA_0 &_SequenceL__resultConv);
void SequenceL_ProcessWithTrace_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, Sequence< _sl_STATE_0 > &_SequenceL__resultConv);
void SequenceL_last_1(Sequence< _sl_STATE_0 > &_SequenceL__Arg_list, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_Process_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_StateToString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv);
void SequenceL_delimit_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< char > &_SequenceL__resultConv);
void SequenceL_StateToArrowString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv);
void SequenceL_GetFSquares_0(Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
void SequenceL_TrimTapeEnd_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, Sequence< char > &_SequenceL__resultConv);
void SequenceL_DoesMachineHalt_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, bool &_SequenceL__resultConv);
void SequenceL_boolToString_2(bool _SequenceL__Arg_bool, Sequence< char > &_SequenceL__resultConv);
void SequenceL_Iterate_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_GetCurrentSymbol_0(_sl_STATE_0 &_SequenceL__Arg_State, char &_SequenceL__resultConv);
void SequenceL_GetConfig_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL_GetConfigHelper_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv);
void SequenceL_Replace_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL_ReplaceWorker_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, int _SequenceL__Arg_Argument, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL_ReplaceInSymbols_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Symbols, Sequence< Sequence< char > > &_SequenceL__resultConv);
void SequenceL_ReplaceScanned_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, char _SequenceL__Arg_symbol, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL_ReplaceInOperations_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, Sequence< Sequence< char > > &_SequenceL__resultConv);
void SequenceL_ReplaceInMFunction_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, _sl_MFUNCTION_0 &_SequenceL__resultConv);
void SequenceL_Matches_0(char _SequenceL__Arg_currentSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_symbols, bool &_SequenceL__resultConv);
void SequenceL_equalListNT_1(Sequence< char > &_SequenceL__Arg_list1, Sequence< char > &_SequenceL__Arg_list2, bool &_SequenceL__resultConv);
void SequenceL_HeadOfEach_0(Sequence< Sequence< char > > &_SequenceL__Arg_strings, Sequence< char > &_SequenceL__resultConv);
void SequenceL_Execute_0(_sl_STATE_0 &_SequenceL__Arg_State, _sl_MCONFIG_0 &_SequenceL__Arg_mConfig, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_ApplyOperations_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_ApplyOperation_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__Arg_Operation, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_PrintOperation_0(char _SequenceL__Arg_Symbol, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
void SequenceL_EraseOperation_0(int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
void SequenceL_setElementAt_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_location, char _SequenceL__Arg_newElement, Sequence< char > &_SequenceL__resultConv);
void SequenceL_last_1(Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL_TrimTapeBegin_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL_GetUtmOut_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__resultConv);
void SequenceL_duplicate_1(char _SequenceL__Arg_element, int _SequenceL__Arg_times, Sequence< char > &_SequenceL__resultConv);
void SequenceL_MFunctionToString_0(_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, Sequence< char > &_SequenceL__resultConv);
void SequenceL_delimitWorker_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv);
void SequenceL_allButLast_1(Sequence< char > &_SequenceL__Arg_list, Sequence< char > &_SequenceL__resultConv);
void SequenceL_intToString_2(int _SequenceL__Arg_number, Sequence< char > &_SequenceL__resultConv);
void SequenceL_intToChar_2(int _SequenceL__Arg_int, char &_SequenceL__resultConv);
void SequenceL_RemoveCharacter_0(char _SequenceL__Arg_character, Sequence< char > &_SequenceL__Arg_string, Sequence< char > &_SequenceL__resultConv);
void SequenceL_split_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv);
void SequenceL_stringToInt_2(Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL_trimStart_3(Sequence< char > &_SequenceL__Arg_input, Sequence< char > &_SequenceL__resultConv);
void SequenceL_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL_trimNonNumeric_2(Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, Sequence< char > &_SequenceL__resultConv);
void SequenceL_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL_take_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, Sequence< char > &_SequenceL__resultConv);
void SequenceL_atoIWorker_2(Sequence< char > &_SequenceL__Arg_numString, Sequence< int > &_SequenceL__resultConv);
void SequenceL_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL_SINGLETON_FUNCTION_0(Sequence< char > &_SequenceL__Arg_id, _sl_MFUNCTION_0 &_SequenceL__resultConv);
void SequenceL_ParseConfig_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__ex_iter, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv);
void SequenceL_TokenizeLine_0(Sequence< char > &_SequenceL__Arg_Line, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv);
void SequenceL_ParseMFunction_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
void SequenceL_indexesOf_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, Sequence< int > &_SequenceL__resultConv);
void SequenceL_multipleIndexes_1(Sequence< char > &_SequenceL__Arg_list, Sequence< Sequence< int > > &_SequenceL__Arg_indexes, Sequence< Sequence< char > > &_SequenceL__resultConv);
void SequenceL_TokenizeLineWorker_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_CurrentToken, Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv);
void SequenceL_MakeToken_0(Sequence< char > &_SequenceL__Arg_String, _sl_TOKEN_0 &_SequenceL__resultConv);
void SequenceL_ParseArgs_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
void SequenceL_ParseIDList_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
void SequenceL__parallel_RunMachine_0(Sequence< char > &_SequenceL__Arg_Text, Sequence< char > &_SequenceL__Arg_Flag, _sl_STATE_0 &_SequenceL__Arg_NewState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_InputMConfigs, int _SequenceL__Arg_Iterations, _sl_RETURNVALUE_0 &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt3_: public NTObj
{
	private:
		Sequence< _sl_STATE_0 > &_SequenceL__Arg_processedWithTrace;
		 Sequence< Sequence< char > > &_SequenceL__result4;

	public:
		SequenceL__sl_RunMachine_nt3_(Sequence< _sl_STATE_0 > &_inp1, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_processedWithTrace(_inp1), _SequenceL__result4(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt1_: public NTObj
{
	private:
		Sequence< _sl_STATE_0 > &_SequenceL__Arg_processedWithTrace;
		 Sequence< Sequence< char > > &_SequenceL__result2;

	public:
		SequenceL__sl_RunMachine_nt1_(Sequence< _sl_STATE_0 > &_inp1, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_processedWithTrace(_inp1), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_ParseTextFile_0(Sequence< char > &_SequenceL__Arg_Text, _sl_INPUT_DATA_0 &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt5_: public NTObj
{
	private:
		Sequence< Sequence< char > > &_SequenceL_tmp2225;
		 Sequence< _sl_MCONFIG_0 > &_SequenceL__result6;

	public:
		SequenceL__sl_RunMachine_nt5_(Sequence< Sequence< char > > &_inp1, Sequence< _sl_MCONFIG_0 > &_out1): NTObj(__LINE__,false), _SequenceL_tmp2225(_inp1), _SequenceL__result6(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_ProcessWithTrace_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, Sequence< _sl_STATE_0 > &_SequenceL__resultConv);
void SequenceL__parallel_last_1(Sequence< _sl_STATE_0 > &_SequenceL__Arg_list, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_Process_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, _sl_STATE_0 &_SequenceL__resultConv);
Sequence< Sequence< char > > _SequenceL_TRACE_HEADER_0(cspace);
void SequenceL__parallel_StateToString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_delimit_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_StateToArrowString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_GetFSquares_0(Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt7_: public NTObj
{
	private:
		Sequence< char > &_SequenceL__Arg_Tape;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< char > &_SequenceL__result8;

	public:
		SequenceL__sl_RunMachine_nt7_(Sequence< char > &_inp1, int _inp2, int _inp3, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_Tape(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result8(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_TrimTapeEnd_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_DoesMachineHalt_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, bool &_SequenceL__resultConv);
void SequenceL__parallel_boolToString_2(bool _SequenceL__Arg_bool, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_Iterate_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_GetCurrentSymbol_0(_sl_STATE_0 &_SequenceL__Arg_State, char &_SequenceL__resultConv);
void SequenceL__parallel_GetConfig_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_MCONFIG_0 &_SequenceL__resultConv);
_sl_MCONFIG_0 _SequenceL_NULL_CONFIG_0(cspace);
void SequenceL__parallel_GetConfigHelper_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt9_: public NTObj
{
	private:
		Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs;
		_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction;
		char _SequenceL__Arg_symbol;
		 Sequence< _sl_MCONFIG_0 > &_SequenceL__result10;

	public:
		SequenceL__sl_RunMachine_nt9_(Sequence< _sl_MCONFIG_0 > &_inp1, _sl_MFUNCTION_0 &_inp2, char _inp3, Sequence< _sl_MCONFIG_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_mConfigs(_inp1), _SequenceL__Arg_mfunction(_inp2), _SequenceL__Arg_symbol(_inp3), _SequenceL__result10(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_Replace_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL__parallel_ReplaceWorker_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, int _SequenceL__Arg_Argument, _sl_MCONFIG_0 &_SequenceL__resultConv);
void SequenceL__parallel_ReplaceInSymbols_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Symbols, Sequence< Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt11_: public NTObj
{
	private:
		Sequence< Sequence< char > > &_SequenceL__Arg_Symbols;
		_sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol;
		bool _SequenceL_tmp1916;
		_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol;
		 Sequence< Sequence< char > > &_SequenceL__result12;

	public:
		SequenceL__sl_RunMachine_nt11_(Sequence< Sequence< char > > &_inp1, _sl_MFUNCTION_0 &_inp2, bool _inp3, _sl_MFUNCTION_0 &_inp4, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_Symbols(_inp1), _SequenceL__Arg_OldSymbol(_inp2), _SequenceL_tmp1916(_inp3), _SequenceL__Arg_NewSymbol(_inp4), _SequenceL__result12(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_ReplaceScanned_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, char _SequenceL__Arg_symbol, _sl_MCONFIG_0 &_SequenceL__resultConv);
_sl_MFUNCTION_0 _SequenceL_SCANNED_FUNCTION_0(cspace);
void SequenceL__parallel_ReplaceInOperations_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, Sequence< Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt13_: public NTObj
{
	private:
		Sequence< Sequence< char > > &_SequenceL__Arg_Operations;
		_sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol;
		_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol;
		 Sequence< Sequence< char > > &_SequenceL__result14;

	public:
		SequenceL__sl_RunMachine_nt13_(Sequence< Sequence< char > > &_inp1, _sl_MFUNCTION_0 &_inp2, _sl_MFUNCTION_0 &_inp3, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_Operations(_inp1), _SequenceL__Arg_OldSymbol(_inp2), _SequenceL__Arg_NewSymbol(_inp3), _SequenceL__result14(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_ReplaceInMFunction_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, _sl_MFUNCTION_0 &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt15_: public NTObj
{
	private:
		_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol;
		_sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol;
		_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction;
		 Sequence< _sl_MFUNCTION_0 > &_SequenceL__result16;

	public:
		SequenceL__sl_RunMachine_nt15_(_sl_MFUNCTION_0 &_inp1, _sl_MFUNCTION_0 &_inp2, _sl_MFUNCTION_0 &_inp3, Sequence< _sl_MFUNCTION_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_NewSymbol(_inp1), _SequenceL__Arg_OldSymbol(_inp2), _SequenceL__Arg_MFunction(_inp3), _SequenceL__result16(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_Matches_0(char _SequenceL__Arg_currentSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_symbols, bool &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt21_: public NTObj
{
	private:
		Sequence< char > &_SequenceL_tmp1744;
		Sequence< Sequence< char > > &_SequenceL__Arg_symbols;
		 Sequence< bool > &_SequenceL__result22;

	public:
		SequenceL__sl_RunMachine_nt21_(Sequence< char > &_inp1, Sequence< Sequence< char > > &_inp2, Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL_tmp1744(_inp1), _SequenceL__Arg_symbols(_inp2), _SequenceL__result22(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt19_: public NTObj
{
	private:
		Sequence< char > &_SequenceL_tmp1754;
		Sequence< Sequence< char > > &_SequenceL__Arg_symbols;
		 Sequence< bool > &_SequenceL__result20;

	public:
		SequenceL__sl_RunMachine_nt19_(Sequence< char > &_inp1, Sequence< Sequence< char > > &_inp2, Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL_tmp1754(_inp1), _SequenceL__Arg_symbols(_inp2), _SequenceL__result20(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt17_: public NTObj
{
	private:
		char _SequenceL__Arg_currentSymbol;
		Sequence< char > &_SequenceL_tmp1761;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< bool > &_SequenceL__result18;

	public:
		SequenceL__sl_RunMachine_nt17_(char _inp1, Sequence< char > &_inp2, int _inp3, int _inp4, Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_currentSymbol(_inp1), _SequenceL_tmp1761(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result18(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_equalListNT_1(Sequence< char > &_SequenceL__Arg_list1, Sequence< char > &_SequenceL__Arg_list2, bool &_SequenceL__resultConv);
void SequenceL__parallel_HeadOfEach_0(Sequence< Sequence< char > > &_SequenceL__Arg_strings, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt23_: public NTObj
{
	private:
		Sequence< Sequence< char > > &_SequenceL__Arg_strings;
		 Sequence< char > &_SequenceL__result24;

	public:
		SequenceL__sl_RunMachine_nt23_(Sequence< Sequence< char > > &_inp1, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_strings(_inp1), _SequenceL__result24(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
_sl_MFUNCTION_0 _SequenceL_NULL_FUNCTION_0(cspace);
void SequenceL__parallel_Execute_0(_sl_STATE_0 &_SequenceL__Arg_State, _sl_MCONFIG_0 &_SequenceL__Arg_mConfig, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_ApplyOperations_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_ApplyOperation_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__Arg_Operation, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_PrintOperation_0(char _SequenceL__Arg_Symbol, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_EraseOperation_0(int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_setElementAt_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_location, char _SequenceL__Arg_newElement, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt27_: public NTObj
{
	private:
		int _SequenceL__Arg_location;
		Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_newElement;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< char > &_SequenceL__result28;

	public:
		SequenceL__sl_RunMachine_nt27_(int _inp1, Sequence< char > &_inp2, char _inp3, int _inp4, int _inp5, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_location(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__Arg_newElement(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result28(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt25_: public NTObj
{
	private:
		char _SequenceL__Arg_newElement;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< char > &_SequenceL__result26;

	public:
		SequenceL__sl_RunMachine_nt25_(char _inp1, int _inp2, int _inp3, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_newElement(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result26(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
char _SequenceL_SPACE_CHAR_0;
void SequenceL__parallel_last_1(Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL__parallel_TrimTapeBegin_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, _sl_STATE_0 &_SequenceL__resultConv);
void SequenceL__parallel_GetUtmOut_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt29_: public NTObj
{
	private:
		Sequence< Sequence< char > > &_SequenceL__Arg_splitTape;
		Sequence< char > &_SequenceL_tmp1359;
		 Sequence< char > &_SequenceL__result30;

	public:
		SequenceL__sl_RunMachine_nt29_(Sequence< Sequence< char > > &_inp1, Sequence< char > &_inp2, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_splitTape(_inp1), _SequenceL_tmp1359(_inp2), _SequenceL__result30(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_duplicate_1(char _SequenceL__Arg_element, int _SequenceL__Arg_times, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt31_: public NTObj
{
	private:
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< char > &_SequenceL__result32;

	public:
		SequenceL__sl_RunMachine_nt31_(char _inp1, int _inp2, int _inp3, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_element(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result32(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_MFunctionToString_0(_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt33_: public NTObj
{
	private:
		_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction;
		 Sequence< Sequence< char > > &_SequenceL__result34;

	public:
		SequenceL__sl_RunMachine_nt33_(_sl_MFUNCTION_0 &_inp1, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_MFunction(_inp1), _SequenceL__result34(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_delimitWorker_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt35_: public NTObj
{
	private:
		char _SequenceL__Arg_delimiter;
		Sequence< Sequence< char > > &_SequenceL__Arg_strings;
		 Sequence< Sequence< char > > &_SequenceL__result36;

	public:
		SequenceL__sl_RunMachine_nt35_(char _inp1, Sequence< Sequence< char > > &_inp2, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_delimiter(_inp1), _SequenceL__Arg_strings(_inp2), _SequenceL__result36(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_allButLast_1(Sequence< char > &_SequenceL__Arg_list, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_intToString_2(int _SequenceL__Arg_number, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_intToChar_2(int _SequenceL__Arg_int, char &_SequenceL__resultConv);
void SequenceL__parallel_RemoveCharacter_0(char _SequenceL__Arg_character, Sequence< char > &_SequenceL__Arg_string, Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt37_: public NTObj
{
	private:
		Sequence< char > &_SequenceL__Arg_string;
		char _SequenceL__Arg_character;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< char > &_SequenceL__result38;

	public:
		SequenceL__sl_RunMachine_nt37_(Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_string(_inp1), _SequenceL__Arg_character(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result38(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_split_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt43_: public NTObj
{
	private:
		Sequence< int > &_SequenceL_tmp1097;
		Sequence< int > &_SequenceL_tmp1102;
		 Sequence< Sequence< int > > &_SequenceL__result44;

	public:
		SequenceL__sl_RunMachine_nt43_(Sequence< int > &_inp1, Sequence< int > &_inp2, Sequence< Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp1097(_inp1), _SequenceL_tmp1102(_inp2), _SequenceL__result44(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt41_: public NTObj
{
	private:
		Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< int > &_SequenceL__result42;

	public:
		SequenceL__sl_RunMachine_nt41_(Sequence< int > &_inp1, int _inp2, int _inp3, Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result42(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_RunMachine_nt39_: public NTObj
{
	private:
		Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< int > &_SequenceL__result40;

	public:
		SequenceL__sl_RunMachine_nt39_(Sequence< int > &_inp1, int _inp2, int _inp3, Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result40(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stringToInt_2(Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL__parallel_trimStart_3(Sequence< char > &_SequenceL__Arg_input, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL__parallel_trimNonNumeric_2(Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL__parallel_take_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_atoIWorker_2(Sequence< char > &_SequenceL__Arg_numString, Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt45_: public NTObj
{
	private:
		Sequence< char > &_SequenceL__Arg_numString;
		 Sequence< int > &_SequenceL__result46;

	public:
		SequenceL__sl_RunMachine_nt45_(Sequence< char > &_inp1, Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_numString(_inp1), _SequenceL__result46(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL__parallel_SINGLETON_FUNCTION_0(Sequence< char > &_SequenceL__Arg_id, _sl_MFUNCTION_0 &_SequenceL__resultConv);
void SequenceL__parallel_ParseConfig_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__ex_iter, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv);
char _SequenceL_DELIMITER_0;
void SequenceL__parallel_TokenizeLine_0(Sequence< char > &_SequenceL__Arg_Line, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv);
void SequenceL__parallel_ParseMFunction_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
void SequenceL__parallel_indexesOf_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt47_: public NTObj
{
	private:
		Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< int > &_SequenceL__result48;

	public:
		SequenceL__sl_RunMachine_nt47_(Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result48(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_multipleIndexes_1(Sequence< char > &_SequenceL__Arg_list, Sequence< Sequence< int > > &_SequenceL__Arg_indexes, Sequence< Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt49_: public NTObj
{
	private:
		Sequence< Sequence< int > > &_SequenceL__Arg_indexes;
		Sequence< char > &_SequenceL__Arg_list;
		 Sequence< Sequence< char > > &_SequenceL__result50;

	public:
		SequenceL__sl_RunMachine_nt49_(Sequence< Sequence< int > > &_inp1, Sequence< char > &_inp2, Sequence< Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__result50(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_TokenizeLineWorker_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_CurrentToken, Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_nt51_: public NTObj
{
	private:
		Sequence< char > &_SequenceL__Arg_Line;
		int _SequenceL__Arg_Position;
		Sequence< char > &_SequenceL_tmp651;
		int _SequenceL__start;
		int _SequenceL__stop;
		 Sequence< bool > &_SequenceL__result52;

	public:
		SequenceL__sl_RunMachine_nt51_(Sequence< char > &_inp1, int _inp2, Sequence< char > &_inp3, int _inp4, int _inp5, Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_Line(_inp1), _SequenceL__Arg_Position(_inp2), _SequenceL_tmp651(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result52(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
Sequence< char > _SequenceL_delimitters_0(cspace);
void SequenceL__parallel_MakeToken_0(Sequence< char > &_SequenceL__Arg_String, _sl_TOKEN_0 &_SequenceL__resultConv);
void SequenceL__parallel_ParseArgs_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
void SequenceL__parallel_ParseIDList_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv);
class SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0: public task
{
	private:
		 _sl_MFUNCTION_0 &_SequenceL__Arg_MFunction;
		 Sequence< char > &_SequenceL__resultConv;
Sequence< Sequence< char > > _SequenceL__Arg_args;
Sequence< char > _SequenceL_tmp1304;
Sequence< char > _SequenceL_tmp1302;
Sequence< char > _SequenceL_tmp1301;
Sequence< char > _SequenceL_tmp1303;
Sequence< char > _SequenceL_tmp1305;

	public:
		SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0(_sl_MFUNCTION_0 &_inp1, Sequence< char > &_out1): _SequenceL__Arg_MFunction(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_args(cspace), _SequenceL_tmp1304(cspace), _SequenceL_tmp1302(cspace), _SequenceL_tmp1301(cspace), _SequenceL_tmp1303(cspace), _SequenceL_tmp1305(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_RunMachine_intToString_i_2: public task
{
	private:
		int _SequenceL__Arg_number;
		 Sequence< char > &_SequenceL__resultConv;
Sequence< char > _SequenceL_tmp1256;
Sequence< char > _SequenceL_tmp1258;
int _SequenceL_tmp1257;
Sequence< char > _SequenceL__Arg_lowestDigitChar;
int _SequenceL__Arg_lowestDigit;
Sequence< char > _SequenceL_tmp1265;
int _SequenceL_tmp1264;

	public:
		SequenceL__sl_RunMachine_intToString_i_2(int _inp1, Sequence< char > &_out1): _SequenceL__Arg_number(_inp1), _SequenceL__resultConv(_out1), _SequenceL_tmp1256(cspace), _SequenceL_tmp1258(cspace), _SequenceL__Arg_lowestDigitChar(cspace), _SequenceL_tmp1265(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0: public task
{
	private:
		 Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens;
		int _SequenceL__Arg_Position;
		 _sl_PARSERETURN_0 &_SequenceL__resultConv;
_sl_TOKEN_0 _SequenceL__Arg_currentToken;
bool _SequenceL_tmp757;
Sequence< char > _SequenceL_tmp756;
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp759;
Sequence< char > _SequenceL__Arg_id;
_sl_PARSERETURN_0 _SequenceL__Arg_args;
int _SequenceL_tmp761;
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp765;
Sequence< char > _SequenceL_tmp767;
Sequence< Empty > _SequenceL_tmp768;

	public:
		SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0(Sequence< _sl_TOKEN_0 > &_inp1, int _inp2, _sl_PARSERETURN_0 &_out1): _SequenceL__Arg_Tokens(_inp1), _SequenceL__Arg_Position(_inp2), _SequenceL__resultConv(_out1), _SequenceL__Arg_currentToken(cspace), _SequenceL_tmp756(cspace), _SequenceL_tmp759(cspace), _SequenceL__Arg_id(cspace), _SequenceL__Arg_args(cspace), _SequenceL_tmp765(cspace), _SequenceL_tmp767(cspace), _SequenceL_tmp768(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0: public task
{
	private:
		 Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens;
		int _SequenceL__Arg_Position;
		 _sl_PARSERETURN_0 &_SequenceL__resultConv;
Sequence< Empty > _SequenceL_tmp310;
_sl_TOKEN_0 _SequenceL__Arg_currentToken;
bool _SequenceL_tmp315;
Sequence< char > _SequenceL_tmp314;
Sequence< Empty > _SequenceL_tmp317;
_sl_PARSERETURN_0 _SequenceL__Arg_mFunction;
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp1;
_sl_PARSERETURN_0 _SequenceL__Arg_nextIDList;

	public:
		SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(Sequence< _sl_TOKEN_0 > &_inp1, int _inp2, _sl_PARSERETURN_0 &_out1): _SequenceL__Arg_Tokens(_inp1), _SequenceL__Arg_Position(_inp2), _SequenceL__resultConv(_out1), _SequenceL_tmp310(cspace), _SequenceL__Arg_currentToken(cspace), _SequenceL_tmp314(cspace), _SequenceL_tmp317(cspace), _SequenceL__Arg_mFunction(cspace), _SequenceL__delete_opttmp1(cspace), _SequenceL__Arg_nextIDList(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_RunMachine_csp69_: public task
{
	private:
		int _SequenceL__Arg_Position;
		 Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens;
		 _sl_PARSERETURN_0 &_SequenceL__Arg_mFunction;
		 _sl_PARSERETURN_0 &_SequenceL__Arg_nextIDList;
bool _SequenceL_tmp329;
Sequence< char > _SequenceL_tmp328;
int _SequenceL_tmp332;

	public:
		SequenceL__sl_RunMachine_csp69_(int _inp1, Sequence< _sl_TOKEN_0 > &_inp2, _sl_PARSERETURN_0 &_inp3, _sl_PARSERETURN_0 &_out1): _SequenceL__Arg_Position(_inp1), _SequenceL__Arg_Tokens(_inp2), _SequenceL__Arg_mFunction(_inp3), _SequenceL__Arg_nextIDList(_out1), _SequenceL_tmp328(cspace)
		{
		}
		task *execute();

};


void _SequenceL_init_sl_RunMachine_globals()
{
{

_SequenceL_TRACE_HEADER_0.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_TRACE_HEADER_0.get_ptr(1))) = "Config:\t| Place:\t| Tape:";	/*TuringMachineInterpreter.sl:37: "Config:\t| Place:\t| Tape:"*/
}
{
Sequence< char > _SequenceL_tmp1850(cspace);

_SequenceL_tmp1850 = "scanned";	/*TuringMachineInterpreter.sl:31: "scanned"*/
SequenceL__parallel_SINGLETON_FUNCTION_0(_SequenceL_tmp1850, _SequenceL_SCANNED_FUNCTION_0);	/*TuringMachineInterpreter.sl:31: SINGLETON_FUNCTION("scanned")*/
_SequenceL_tmp1850.delete_data(false);	
_SequenceL_tmp1850.finished();	
}
{
Sequence< char > _SequenceL_tmp1690(cspace);
Sequence< Empty > _SequenceL_tmp1691(cspace);

_SequenceL_tmp1690.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:29: ""*/
_SequenceL_NULL_FUNCTION_0.ID = _SequenceL_tmp1690;	
_SequenceL_tmp1690.delete_data(false);	
_SequenceL_tmp1690.finished();	
_SequenceL_tmp1691.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp1691, _SequenceL_NULL_FUNCTION_0.Arguments);	
_SequenceL_tmp1691.delete_data(false);	
_SequenceL_tmp1691.finished();	
}
{

_SequenceL_SPACE_CHAR_0 = '_';	/*TuringMachineInterpreter.sl:26: '_'*/
}
{

_SequenceL_DELIMITER_0 = '|';	/*TuringMachineInterpreter.sl:27: '|'*/
}
{

_SequenceL_delimitters_0 = "(),|";	/*TuringMachineInterpreter.sl:76: "(),|"*/
}
{
Sequence< Empty > _SequenceL_tmp1956(cspace);
Sequence< Empty > _SequenceL_tmp1957(cspace);

_SequenceL_NULL_CONFIG_0.Label.val_assign() = _SequenceL_NULL_FUNCTION_0;	/*TuringMachineInterpreter.sl:35: NULL_FUNCTION*/
_SequenceL_tmp1956.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp1956, _SequenceL_NULL_CONFIG_0.Symbols);	
_SequenceL_tmp1956.delete_data(false);	
_SequenceL_tmp1956.finished();	
_SequenceL_tmp1957.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp1957, _SequenceL_NULL_CONFIG_0.Operations);	
_SequenceL_tmp1957.delete_data(false);	
_SequenceL_tmp1957.finished();	
_SequenceL_NULL_CONFIG_0.FinalConfig.val_assign() = _SequenceL_NULL_FUNCTION_0;	/*TuringMachineInterpreter.sl:35: NULL_FUNCTION*/
}

}

void _SequenceL_delete_sl_RunMachine_globals()
{
_SequenceL_TRACE_HEADER_0.delete_data(false);
_SequenceL_TRACE_HEADER_0.finished();
_SequenceL_NULL_CONFIG_0._delete_data(false);
_SequenceL_NULL_CONFIG_0._finished();
_SequenceL_SCANNED_FUNCTION_0._delete_data(false);
_SequenceL_SCANNED_FUNCTION_0._finished();
_SequenceL_NULL_FUNCTION_0._delete_data(false);
_SequenceL_NULL_FUNCTION_0._finished();
_SequenceL_delimitters_0.delete_data(false);
_SequenceL_delimitters_0.finished();

}

#ifdef _WIN32
Sequence< Sequence< char > > _sl_vc10_SL_Generated_dummy_1(cspace);
Sequence< char > _sl_vc10_SL_Generated_dummy_2(cspace);
Sequence< _sl_MCONFIG_0 > _sl_vc10_SL_Generated_dummy_3(cspace);
Sequence< _sl_STATE_0 > _sl_vc10_SL_Generated_dummy_4(cspace);
Sequence< _sl_MFUNCTION_0 > _sl_vc10_SL_Generated_dummy_5(cspace);
Sequence< bool > _sl_vc10_SL_Generated_dummy_6(cspace);
Sequence< int > _sl_vc10_SL_Generated_dummy_7(cspace);
Sequence< Empty > _sl_vc10_SL_Generated_dummy_8(cspace);
Sequence< Sequence< int > > _sl_vc10_SL_Generated_dummy_9(cspace);
Sequence< _sl_MCONFIG_0 > _sl_vc10_SL_Generated_dummy_10(cspace);
Sequence< _sl_TOKEN_0 > _sl_vc10_SL_Generated_dummy_11(cspace);
#endif

task *SequenceL__sl_RunMachine_csp69_::execute()
{
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition) when Position > size(Tokens)			else				ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__Arg_Tokens, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList));
_SequenceL__Arg_mFunction._delete_data(true);	
}
else
{
_SequenceL_tmp328 = ",";	/*TuringMachineInterpreter.sl:166: ","*/
_SequenceL_tmp329 = eq_list((*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_mFunction.TokenPosition))).Type, _SequenceL_tmp328);	/*TuringMachineInterpreter.sl:167: equalList(Tokens[mFunction.TokenPosition].Type, ",")*/
_SequenceL_tmp328.delete_data(true);	
_SequenceL_tmp328.finished();	
if (_SequenceL_tmp329)	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
_SequenceL_tmp332 = (_SequenceL__Arg_mFunction.TokenPosition + 1);	/*TuringMachineInterpreter.sl:166: mFunction.TokenPosition + 1*/
_SequenceL__Arg_mFunction._delete_data(true);	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__Arg_Tokens, _SequenceL_tmp332, _SequenceL__Arg_nextIDList));
}
else
{
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__Arg_Tokens, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList));
_SequenceL__Arg_mFunction._delete_data(true);	
}
}
return NULL;
}
task *SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0::execute()
{
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when  Position > size(Tokens)		else			(ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp310.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp310, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp310.delete_data(true);	
_SequenceL_tmp310.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:170: Position*/
_SequenceL__Arg_Tokens.delete_data(true);	
}
else
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:161: Tokens[Position]*/
_SequenceL_tmp314 = ")";	/*TuringMachineInterpreter.sl:172: ")"*/
_SequenceL_tmp315 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp314);	/*TuringMachineInterpreter.sl:173: equalList(currentToken.Type, ")")*/
_SequenceL__Arg_currentToken.Type.delete_data(true);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp314.delete_data(true);	
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL_tmp314.finished();	
_SequenceL__Arg_currentToken._finished();	
if (_SequenceL_tmp315)	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp317.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp317, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp317.delete_data(true);	
_SequenceL_tmp317.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:172: Position*/
_SequenceL__Arg_Tokens.delete_data(true);	
}
else
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:162: ParseMFunction(Tokens, Position)*/
SequenceL_ParseMFunction_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_Position, _SequenceL__Arg_mFunction);	/*TuringMachineInterpreter.sl:162: ParseMFunction(Tokens, Position)*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_mFunction._Reference();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_csp69_(_SequenceL__Arg_Position, _SequenceL__Arg_Tokens, _SequenceL__Arg_mFunction, _SequenceL__Arg_nextIDList));
append(_SequenceL__Arg_mFunction.ReturnList, _SequenceL__Arg_nextIDList.ReturnList, _SequenceL__resultConv.ReturnList);	/*TuringMachineInterpreter.sl:174: mFunction.ReturnList ++ nextIDList.ReturnList*/
_SequenceL__Arg_mFunction._delete_data(true);	
_SequenceL__Arg_mFunction._finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_nextIDList.TokenPosition;	/*TuringMachineInterpreter.sl:174: nextIDList.TokenPosition*/
_SequenceL__Arg_nextIDList._delete_data(true);	
_SequenceL__Arg_nextIDList._finished();	
}
}
return NULL;
}
task *SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0::execute()
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:140: Tokens[Position]*/
_SequenceL_tmp756 = "ID";	/*TuringMachineInterpreter.sl:144: "ID"*/
_SequenceL_tmp757 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp756);	/*TuringMachineInterpreter.sl:145: equalList(currentToken.Type, "ID")*/
_SequenceL__Arg_currentToken.Type.delete_data(true);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp756.delete_data(true);	
_SequenceL_tmp756.finished();	
if (_SequenceL_tmp757)	/*TuringMachineInterpreter.sl:146: (ReturnList: [(ID: id, Arguments: args.ReturnList)], TokenPosition: args.TokenPosition) when equalList(currentToken.Type, "ID")		else			(ReturnList: [(ID: "", Arguments: [])], TokenPosition: Position)*/
{
_SequenceL_tmp759.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_id = _SequenceL__Arg_currentToken.Value;	/*TuringMachineInterpreter.sl:141: currentToken.Value*/
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL__Arg_currentToken._finished();	
(*(_SequenceL_tmp759.get_ptr(1))).ID = _SequenceL__Arg_id;	/*TuringMachineInterpreter.sl:144: id*/
_SequenceL__Arg_id.delete_data(true);	
_SequenceL__Arg_id.finished();	
_SequenceL_tmp761 = (_SequenceL__Arg_Position + 1);	/*TuringMachineInterpreter.sl:142: Position + 1*/
SequenceL_ParseArgs_0(_SequenceL__Arg_Tokens, _SequenceL_tmp761, _SequenceL__Arg_args);	/*TuringMachineInterpreter.sl:142: ParseArgs(Tokens, Position + 1)*/
_SequenceL__Arg_Tokens.delete_data(true);	
(*(_SequenceL_tmp759.get_ptr(1))).Arguments = _SequenceL__Arg_args.ReturnList;	/*TuringMachineInterpreter.sl:144: args.ReturnList*/
_SequenceL__resultConv.ReturnList = _SequenceL_tmp759;	/*TuringMachineInterpreter.sl:144: [(ID: id, Arguments: args.ReturnList)]*/
_SequenceL_tmp759.delete_data(true);	
_SequenceL_tmp759.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_args.TokenPosition;	/*TuringMachineInterpreter.sl:144: args.TokenPosition*/
_SequenceL__Arg_args._delete_data(true);	
_SequenceL__Arg_args._finished();	
}
else
{
_SequenceL_tmp765.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp767.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:146: ""*/
(*(_SequenceL_tmp765.get_ptr(1))).ID = _SequenceL_tmp767;	
_SequenceL_tmp767.delete_data(true);	
_SequenceL_tmp767.finished();	
_SequenceL_tmp768.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp768, (*(_SequenceL_tmp765.get_ptr(1))).Arguments);	
_SequenceL_tmp768.delete_data(true);	
_SequenceL_tmp768.finished();	
_SequenceL__resultConv.ReturnList = _SequenceL_tmp765;	/*TuringMachineInterpreter.sl:146: [(ID: "", Arguments: [])]*/
_SequenceL_tmp765.delete_data(true);	
_SequenceL_tmp765.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:146: Position*/
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL__Arg_Tokens.delete_data(true);	
_SequenceL__Arg_currentToken._finished();	
}
return NULL;
}
task *SequenceL__sl_RunMachine_intToString_i_2::execute()
{
if ((_SequenceL__Arg_number < 0))	/*Conversion.sl:72: "-" ++ intToString(-number) when number < 0		else 			lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL_tmp1256 = "-";	/*Conversion.sl:68: "-"*/
_SequenceL_tmp1257 = (-_SequenceL__Arg_number);	/*Conversion.sl:68: -number*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_intToString_i_2(_SequenceL_tmp1257, _SequenceL_tmp1258));
_appendF(_SequenceL_tmp1256, _SequenceL_tmp1258, _SequenceL__resultConv);	/*Conversion.sl:68: "-" ++ intToString(-number)*/
_SequenceL_tmp1256.delete_data(true);	
_SequenceL_tmp1258.delete_data(true);	
_SequenceL_tmp1258.finished();	
_SequenceL_tmp1256.finished();	
}
else
{
_SequenceL__Arg_lowestDigitChar.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_lowestDigit = (_SequenceL__Arg_number % 10);	/*Conversion.sl:65: number mod 10*/
SequenceL_intToChar_2(_SequenceL__Arg_lowestDigit, (*(_SequenceL__Arg_lowestDigitChar.get_ptr(1))));	/*Conversion.sl:66: intToChar(lowestDigit)*/
if ((_SequenceL__Arg_number < 10))	/*Conversion.sl:72: lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL__resultConv = _SequenceL__Arg_lowestDigitChar;	/*Conversion.sl:70: lowestDigitChar*/
_SequenceL__Arg_lowestDigitChar.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.finished();	
}
else
{
_SequenceL_tmp1264 = (_SequenceL__Arg_number / 10);	/*Conversion.sl:72: number / 10*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_intToString_i_2(_SequenceL_tmp1264, _SequenceL_tmp1265));
_appendF(_SequenceL_tmp1265, _SequenceL__Arg_lowestDigitChar, _SequenceL__resultConv);	/*Conversion.sl:72: intToString(number / 10) ++ lowestDigitChar*/
_SequenceL_tmp1265.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.finished();	
_SequenceL_tmp1265.finished();	
}
}
return NULL;
}
task *SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0::execute()
{
_SequenceL__Arg_args.setSize(_SequenceL__Arg_MFunction.Arguments.size());	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1297=1,_stop_val__SequenceL__i1297=_SequenceL__Arg_args.size(); _SequenceL__i1297<=_stop_val__SequenceL__i1297; _SequenceL__i1297+=1)
{
(*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297)))._Reference();	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0((*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297))), (*(_SequenceL__Arg_args.get_ptr(_SequenceL__i1297)))));
}
if ((_SequenceL__Arg_args.size() > 0))	/*TuringMachineInterpreter.sl:49: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")" when size(args) > 0		else			MFunction.ID*/
{
_SequenceL_tmp1301 = "(";	/*TuringMachineInterpreter.sl:47: "("*/
append(_SequenceL__Arg_MFunction.ID, _SequenceL_tmp1301, _SequenceL_tmp1302);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "("*/
_SequenceL_tmp1301.delete_data(true);	
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL_tmp1301.finished();	
SequenceL_delimit_1(_SequenceL__Arg_args, ',', _SequenceL_tmp1303);	/*TuringMachineInterpreter.sl:47: delimit(args, ',')*/
_SequenceL__Arg_args.delete_data(true);	
_SequenceL__Arg_args.finished();	
append(_SequenceL_tmp1302, _SequenceL_tmp1303, _SequenceL_tmp1304);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',')*/
_SequenceL_tmp1302.delete_data(true);	
_SequenceL_tmp1303.delete_data(true);	
_SequenceL_tmp1303.finished();	
_SequenceL_tmp1302.finished();	
_SequenceL_tmp1305 = ")";	/*TuringMachineInterpreter.sl:47: ")"*/
append(_SequenceL_tmp1304, _SequenceL_tmp1305, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")"*/
_SequenceL_tmp1304.delete_data(true);	
_SequenceL_tmp1305.delete_data(true);	
_SequenceL_tmp1305.finished();	
_SequenceL_tmp1304.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_MFunction.ID;	/*TuringMachineInterpreter.sl:49: MFunction.ID*/
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL__Arg_args.delete_data(true);	
_SequenceL__Arg_args.finished();	
}
return NULL;
}
void SequenceL__parallel_ParseIDList_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp310(cspace);
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp315;
Sequence< char > _SequenceL_tmp314(cspace);
Sequence< Empty > _SequenceL_tmp317(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_mFunction(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp1(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_nextIDList(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp2(cspace);
bool _SequenceL_tmp329;
Sequence< char > _SequenceL_tmp328(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp3(cspace);
int _SequenceL_tmp332;
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp4(cspace);

if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when  Position > size(Tokens)		else			(ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp310.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp310, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp310.delete_data(false);	
_SequenceL_tmp310.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:170: Position*/
}
else
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:161: Tokens[Position]*/
_SequenceL_tmp314 = ")";	/*TuringMachineInterpreter.sl:172: ")"*/
_SequenceL_tmp315 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp314);	/*TuringMachineInterpreter.sl:173: equalList(currentToken.Type, ")")*/
_SequenceL__Arg_currentToken.Type.delete_data(false);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp314.delete_data(false);	
_SequenceL__Arg_currentToken._delete_data(false);	
_SequenceL_tmp314.finished();	
_SequenceL__Arg_currentToken._finished();	
if (_SequenceL_tmp315)	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp317.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp317, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp317.delete_data(false);	
_SequenceL_tmp317.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:172: Position*/
}
else
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:162: ParseMFunction(Tokens, Position)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_Position, _SequenceL__Arg_mFunction));
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition) when Position > size(Tokens)			else				ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp2);	/*TuringMachineInterpreter.sl:164: ParseIDList(Tokens, mFunction.TokenPosition)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__delete_opttmp2, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList));
}
else
{
_SequenceL_tmp328 = ",";	/*TuringMachineInterpreter.sl:166: ","*/
_SequenceL_tmp329 = eq_list((*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_mFunction.TokenPosition))).Type, _SequenceL_tmp328);	/*TuringMachineInterpreter.sl:167: equalList(Tokens[mFunction.TokenPosition].Type, ",")*/
_SequenceL_tmp328.delete_data(false);	
_SequenceL_tmp328.finished();	
if (_SequenceL_tmp329)	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp3);	/*TuringMachineInterpreter.sl:166: ParseIDList(Tokens, mFunction.TokenPosition + 1)*/
_SequenceL_tmp332 = (_SequenceL__Arg_mFunction.TokenPosition + 1);	/*TuringMachineInterpreter.sl:166: mFunction.TokenPosition + 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__delete_opttmp3, _SequenceL_tmp332, _SequenceL__Arg_nextIDList));
}
else
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp4);	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__delete_opttmp4, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList));
}
}
append(_SequenceL__Arg_mFunction.ReturnList, _SequenceL__Arg_nextIDList.ReturnList, _SequenceL__resultConv.ReturnList);	/*TuringMachineInterpreter.sl:174: mFunction.ReturnList ++ nextIDList.ReturnList*/
_SequenceL__Arg_mFunction._delete_data(false);	
_SequenceL__Arg_mFunction._finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_nextIDList.TokenPosition;	/*TuringMachineInterpreter.sl:174: nextIDList.TokenPosition*/
_SequenceL__Arg_nextIDList._delete_data(false);	
_SequenceL__Arg_nextIDList._finished();	
}
}
}
void SequenceL__parallel_ParseArgs_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp340(cspace);
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp345;
Sequence< char > _SequenceL_tmp344(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_idList(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp347;
Sequence< Empty > _SequenceL_tmp352(cspace);

if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:157: (ReturnList: [], TokenPosition: Position) when Position > size(Tokens)		else			(ReturnList: idList.ReturnList, TokenPosition: idList.TokenPosition + 1) when equalList(currentToken.Type, "(")		else			(ReturnList: [], TokenPosition: Position)*/
{
_SequenceL_tmp340.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp340, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp340.delete_data(false);	
_SequenceL_tmp340.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:153: Position*/
}
else
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:150: Tokens[Position]*/
_SequenceL_tmp344 = "(";	/*TuringMachineInterpreter.sl:155: "("*/
_SequenceL_tmp345 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp344);	/*TuringMachineInterpreter.sl:156: equalList(currentToken.Type, "(")*/
_SequenceL__Arg_currentToken.Type.delete_data(false);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp344.delete_data(false);	
_SequenceL__Arg_currentToken._delete_data(false);	
_SequenceL_tmp344.finished();	
_SequenceL__Arg_currentToken._finished();	
if (_SequenceL_tmp345)	/*TuringMachineInterpreter.sl:157: (ReturnList: idList.ReturnList, TokenPosition: idList.TokenPosition + 1) when equalList(currentToken.Type, "(")		else			(ReturnList: [], TokenPosition: Position)*/
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:151: ParseIDList(Tokens, Position + 1)*/
_SequenceL_tmp347 = (_SequenceL__Arg_Position + 1);	/*TuringMachineInterpreter.sl:151: Position + 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseIDListTOKEN_i_0(_SequenceL__delete_opttmp1, _SequenceL_tmp347, _SequenceL__Arg_idList));
_SequenceL__resultConv.ReturnList = _SequenceL__Arg_idList.ReturnList;	/*TuringMachineInterpreter.sl:155: idList.ReturnList*/
_SequenceL__resultConv.TokenPosition = (_SequenceL__Arg_idList.TokenPosition + 1);	/*TuringMachineInterpreter.sl:155: idList.TokenPosition + 1*/
_SequenceL__Arg_idList._delete_data(false);	
_SequenceL__Arg_idList._finished();	
}
else
{
_SequenceL_tmp352.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp352, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp352.delete_data(false);	
_SequenceL_tmp352.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:157: Position*/
}
}
}
void SequenceL__parallel_MakeToken_0(Sequence< char > &_SequenceL__Arg_String, _sl_TOKEN_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_type(cspace);
char _SequenceL_tmp632;
char _SequenceL_tmp636;
char _SequenceL_tmp640;
char _SequenceL_tmp644;

_SequenceL__resultConv.Value = _SequenceL__Arg_String;	/*TuringMachineInterpreter.sl:93: String*/
if ((_SequenceL__Arg_String.size() == 1))	/*TuringMachineInterpreter.sl:91: ("(" when head(String) = '('				else					")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID")  when size(String) = 1			else				"ID"*/
{
_SequenceL_tmp632 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:81: head(String)*/
if ((_SequenceL_tmp632 == '('))	/*TuringMachineInterpreter.sl:89: "(" when head(String) = '('				else					")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = "(";	/*TuringMachineInterpreter.sl:81: "("*/
}
else
{
_SequenceL_tmp636 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:83: head(String)*/
if ((_SequenceL_tmp636 == ')'))	/*TuringMachineInterpreter.sl:89: ")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = ")";	/*TuringMachineInterpreter.sl:83: ")"*/
}
else
{
_SequenceL_tmp640 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:85: head(String)*/
if ((_SequenceL_tmp640 == ','))	/*TuringMachineInterpreter.sl:89: "," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = ",";	/*TuringMachineInterpreter.sl:85: ","*/
}
else
{
_SequenceL_tmp644 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:87: head(String)*/
if ((_SequenceL_tmp644 == '|'))	/*TuringMachineInterpreter.sl:89: "|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = "|";	/*TuringMachineInterpreter.sl:87: "|"*/
}
else
{
_SequenceL__Arg_type = "ID";	/*TuringMachineInterpreter.sl:89: "ID"*/
}
}
}
}
}
else
{
_SequenceL__Arg_type = "ID";	/*TuringMachineInterpreter.sl:91: "ID"*/
}
_SequenceL__resultConv.Type = _SequenceL__Arg_type;	/*TuringMachineInterpreter.sl:93: type*/
_SequenceL__Arg_type.delete_data(false);	
_SequenceL__Arg_type.finished();	
}
void SequenceL__sl_RunMachine_nt51_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i653 = _r.begin(); _SequenceL__i653 < _e; _SequenceL__i653++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i653 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i653 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result52.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_Line.get_ptr(_SequenceL__Arg_Position))) == (*(_SequenceL_tmp651.get_ptr(_SequenceL__no_share_iter))));	/*TuringMachineInterpreter.sl:101: Line[Position] = delimitters*/
}
}
}
void SequenceL__parallel_TokenizeLineWorker_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_CurrentToken, Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv)
{
int _SequenceL___Arg_Position_tco;
Sequence< char > _SequenceL___Arg_CurrentToken_tco(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL___Arg_Tokens_tco(cspace);
bool _SequenceL__invariant_opttmp5;
bool _SequenceL__Arg_atDelim;
Sequence< char > _SequenceL_tmp651(cspace);
Sequence< bool > _SequenceL_tmp652(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__Arg_newTokens(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp660(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp658(cspace);
_sl_TOKEN_0 _SequenceL__Arg_newToken(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp661(cspace);
_sl_TOKEN_0 _SequenceL__Arg_delimToken(cspace);
Sequence< char > _SequenceL_tmp663(cspace);
bool _SequenceL__Arg_haveP;
Sequence< _sl_TOKEN_0 > _SequenceL_tmp673(cspace);
Sequence< char > _SequenceL_tmp675(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp682(cspace);
int _SequenceL_tmp688;
Sequence< char > _SequenceL__Arg_newCurrentToken(cspace);
Sequence< char > _SequenceL_tmp699(cspace);

_SequenceL___Arg_Position_tco = _SequenceL__Arg_Position;	
_SequenceL___Arg_CurrentToken_tco.hard_copy(_SequenceL__Arg_CurrentToken,__LINE__);	
_SequenceL___Arg_Tokens_tco.hard_copy(_SequenceL__Arg_Tokens,__LINE__);	
_SequenceL__invariant_opttmp5 = true;	
_parallel_TokenizeLineWorker_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:103: some(Line[Position] = delimitters) when Position <= size(Line)			else 				false*/
{
if (_SequenceL__invariant_opttmp5)	
{
_SequenceL_tmp651 = _SequenceL_delimitters_0;	/*TuringMachineInterpreter.sl:101: delimitters*/
_SequenceL__invariant_opttmp5 = false;	
}
_SequenceL_tmp652.setSize(_SequenceL_tmp651.size());	/*TuringMachineInterpreter.sl:101: Line[Position] = delimitters*/
if (((((SL_FLOAT)(_SequenceL_tmp652.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt51_ SequenceL__sl_RunMachine_nt51__val(_SequenceL__Arg_Line, _SequenceL___Arg_Position_tco, _SequenceL_tmp651, 1, _SequenceL_tmp652.size(), _SequenceL_tmp652);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt51__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i653=1,_stop_val__SequenceL__i653=_SequenceL_tmp652.size(); _SequenceL__i653<=_stop_val__SequenceL__i653; _SequenceL__i653+=1)
{
(*(_SequenceL_tmp652.get_ptr(_SequenceL__i653))) = ((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == (*(_SequenceL_tmp651.get_ptr(_SequenceL__i653))));	/*TuringMachineInterpreter.sl:101: Line[Position] = delimitters*/
}
}
_SequenceL__Arg_atDelim = some(_SequenceL_tmp652);	/*TuringMachineInterpreter.sl:101: some(Line[Position] = delimitters)*/
}
else
{
_SequenceL__Arg_atDelim = false;	/*TuringMachineInterpreter.sl:103: false*/
}
if ((_SequenceL__Arg_atDelim && (_SequenceL___Arg_CurrentToken_tco.size() > 0)))	/*TuringMachineInterpreter.sl:120: Tokens ++ [newToken] ++ [delimToken] when atDelim and size(CurrentToken) > 0			else				Tokens ++ [delimToken] when atDelim or haveP			else				Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp658.setSize(1 > 0 ? 1 : 0);	
SequenceL__parallel_MakeToken_0(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newToken);	/*TuringMachineInterpreter.sl:110: MakeToken(CurrentToken)*/
(*(_SequenceL_tmp658.get_ptr(1))) = _SequenceL__Arg_newToken;	/*TuringMachineInterpreter.sl:114: newToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp658, _SequenceL_tmp660);	/*TuringMachineInterpreter.sl:114: Tokens ++ [newToken]*/
_SequenceL_tmp661.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp663.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp663.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:111: Line[Position]*/
SequenceL__parallel_MakeToken_0(_SequenceL_tmp663, _SequenceL__Arg_delimToken);	/*TuringMachineInterpreter.sl:111: MakeToken([Line[Position]])*/
(*(_SequenceL_tmp661.get_ptr(1))) = _SequenceL__Arg_delimToken;	/*TuringMachineInterpreter.sl:114: delimToken*/
append(_SequenceL_tmp660, _SequenceL_tmp661, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:114: Tokens ++ [newToken] ++ [delimToken]*/
}
else
{
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:108: Line[Position] = 'P' and size(CurrentToken) = 0 when Position <= size(Line)			else 				false*/
{
_SequenceL__Arg_haveP = (((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == 'P') && (_SequenceL___Arg_CurrentToken_tco.size() == 0));	/*TuringMachineInterpreter.sl:106: Line[Position] = 'P' and size(CurrentToken) = 0*/
}
else
{
_SequenceL__Arg_haveP = false;	/*TuringMachineInterpreter.sl:108: false*/
}
if ((_SequenceL__Arg_atDelim || _SequenceL__Arg_haveP))	/*TuringMachineInterpreter.sl:120: Tokens ++ [delimToken] when atDelim or haveP			else				Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp673.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp675.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp675.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:111: Line[Position]*/
SequenceL__parallel_MakeToken_0(_SequenceL_tmp675, _SequenceL__Arg_delimToken);	/*TuringMachineInterpreter.sl:111: MakeToken([Line[Position]])*/
(*(_SequenceL_tmp673.get_ptr(1))) = _SequenceL__Arg_delimToken;	/*TuringMachineInterpreter.sl:116: delimToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp673, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:116: Tokens ++ [delimToken]*/
}
else
{
if (((_SequenceL___Arg_Position_tco > _SequenceL__Arg_Line.size()) && (_SequenceL___Arg_CurrentToken_tco.size() > 0)))	/*TuringMachineInterpreter.sl:120: Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp682.setSize(1 > 0 ? 1 : 0);	
SequenceL__parallel_MakeToken_0(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newToken);	/*TuringMachineInterpreter.sl:110: MakeToken(CurrentToken)*/
(*(_SequenceL_tmp682.get_ptr(1))) = _SequenceL__Arg_newToken;	/*TuringMachineInterpreter.sl:118: newToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp682, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:118: Tokens ++ [newToken]*/
}
else
{
_SequenceL__Arg_newTokens = _SequenceL___Arg_Tokens_tco;	/*TuringMachineInterpreter.sl:120: Tokens*/
}
}
}
if ((_SequenceL___Arg_Position_tco > _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:132: newTokens when Position > size(Line)		else			TokenizeLineWorker(Line, Position + 1, newCurrentToken, newTokens)*/
{
_SequenceL__resultConv = _SequenceL__Arg_newTokens;	/*TuringMachineInterpreter.sl:130: newTokens*/
}
else
{
_SequenceL_tmp688 = (_SequenceL___Arg_Position_tco + 1);	/*TuringMachineInterpreter.sl:132: Position + 1*/
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:108: Line[Position] = 'P' and size(CurrentToken) = 0 when Position <= size(Line)			else 				false*/
{
_SequenceL__Arg_haveP = (((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == 'P') && (_SequenceL___Arg_CurrentToken_tco.size() == 0));	/*TuringMachineInterpreter.sl:106: Line[Position] = 'P' and size(CurrentToken) = 0*/
}
else
{
_SequenceL__Arg_haveP = false;	/*TuringMachineInterpreter.sl:108: false*/
}
if ((_SequenceL__Arg_atDelim || _SequenceL__Arg_haveP))	/*TuringMachineInterpreter.sl:127: "" when atDelim or haveP			else				CurrentToken ++ [Line[Position]] when Position <= size(Line)			else 				CurrentToken*/
{
_SequenceL__Arg_newCurrentToken.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:123: ""*/
}
else
{
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:127: CurrentToken ++ [Line[Position]] when Position <= size(Line)			else 				CurrentToken*/
{
_SequenceL_tmp699.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp699.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:125: Line[Position]*/
append(_SequenceL___Arg_CurrentToken_tco, _SequenceL_tmp699, _SequenceL__Arg_newCurrentToken);	/*TuringMachineInterpreter.sl:125: CurrentToken ++ [Line[Position]]*/
}
else
{
_SequenceL__Arg_newCurrentToken = _SequenceL___Arg_CurrentToken_tco;	/*TuringMachineInterpreter.sl:127: CurrentToken*/
}
}
_SequenceL___Arg_Position_tco = _SequenceL_tmp688;	
_swap(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newCurrentToken);	
_swap(_SequenceL___Arg_Tokens_tco, _SequenceL__Arg_newTokens);	
goto _parallel_TokenizeLineWorker_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:132: TokenizeLineWorker(Line, Position + 1, newCurrentToken, newTokens)*/
}
_SequenceL_tmp651.delete_data(false);	
_SequenceL_tmp652.delete_data(false);	
_SequenceL__Arg_newTokens.delete_data(false);	
_SequenceL_tmp660.delete_data(false);	
_SequenceL_tmp658.delete_data(false);	
_SequenceL__Arg_newToken._delete_data(false);	
_SequenceL_tmp661.delete_data(false);	
_SequenceL__Arg_delimToken._delete_data(false);	
_SequenceL_tmp663.delete_data(false);	
_SequenceL_tmp673.delete_data(false);	
_SequenceL_tmp675.delete_data(false);	
_SequenceL_tmp682.delete_data(false);	
_SequenceL__Arg_newCurrentToken.delete_data(false);	
_SequenceL_tmp699.delete_data(false);	
_SequenceL_tmp699.finished();	
_SequenceL__Arg_newCurrentToken.finished();	
_SequenceL_tmp682.finished();	
_SequenceL_tmp675.finished();	
_SequenceL_tmp673.finished();	
_SequenceL_tmp663.finished();	
_SequenceL__Arg_delimToken._finished();	
_SequenceL_tmp661.finished();	
_SequenceL__Arg_newToken._finished();	
_SequenceL_tmp658.finished();	
_SequenceL_tmp660.finished();	
_SequenceL__Arg_newTokens.finished();	
_SequenceL_tmp652.finished();	
_SequenceL_tmp651.finished();	
}
void SequenceL__sl_RunMachine_nt49_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result50.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__result50.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__result50.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL__parallel_multipleIndexes_1(Sequence< char > &_SequenceL__Arg_list, Sequence< Sequence< int > > &_SequenceL__Arg_indexes, Sequence< Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
if (((((SL_FLOAT)(_SequenceL__Arg_indexes.size() - 1)) * (-1 + ((_SequenceL__Arg_indexes.size() > 0) ? (*(_SequenceL__Arg_indexes.get_ptr(1))).size() : 0))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt49_ SequenceL__sl_RunMachine_nt49__val(_SequenceL__Arg_indexes, _SequenceL__Arg_list, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_indexes.size() + 1, SequenceL__sl_RunMachine_nt49__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_indexes.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
}
void SequenceL__sl_RunMachine_nt47_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__result48.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result48.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result48.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_indexesOf_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt47_ SequenceL__sl_RunMachine_nt47__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt47__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Index_i;	
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_ParseMFunction_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp757;
Sequence< char > _SequenceL_tmp756(cspace);
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp759(cspace);
Sequence< char > _SequenceL__Arg_id(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_args(cspace);
int _SequenceL_tmp761;
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp765(cspace);
Sequence< char > _SequenceL_tmp767(cspace);
Sequence< Empty > _SequenceL_tmp768(cspace);

_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:140: Tokens[Position]*/
_SequenceL_tmp756 = "ID";	/*TuringMachineInterpreter.sl:144: "ID"*/
_SequenceL_tmp757 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp756);	/*TuringMachineInterpreter.sl:145: equalList(currentToken.Type, "ID")*/
_SequenceL__Arg_currentToken.Type.delete_data(false);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp756.delete_data(false);	
_SequenceL_tmp756.finished();	
if (_SequenceL_tmp757)	/*TuringMachineInterpreter.sl:146: (ReturnList: [(ID: id, Arguments: args.ReturnList)], TokenPosition: args.TokenPosition) when equalList(currentToken.Type, "ID")		else			(ReturnList: [(ID: "", Arguments: [])], TokenPosition: Position)*/
{
_SequenceL_tmp759.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_id = _SequenceL__Arg_currentToken.Value;	/*TuringMachineInterpreter.sl:141: currentToken.Value*/
_SequenceL__Arg_currentToken._delete_data(false);	
_SequenceL__Arg_currentToken._finished();	
(*(_SequenceL_tmp759.get_ptr(1))).ID = _SequenceL__Arg_id;	/*TuringMachineInterpreter.sl:144: id*/
_SequenceL__Arg_id.delete_data(false);	
_SequenceL__Arg_id.finished();	
_SequenceL_tmp761 = (_SequenceL__Arg_Position + 1);	/*TuringMachineInterpreter.sl:142: Position + 1*/
SequenceL__parallel_ParseArgs_0(_SequenceL__Arg_Tokens, _SequenceL_tmp761, _SequenceL__Arg_args);	/*TuringMachineInterpreter.sl:142: ParseArgs(Tokens, Position + 1)*/
(*(_SequenceL_tmp759.get_ptr(1))).Arguments = _SequenceL__Arg_args.ReturnList;	/*TuringMachineInterpreter.sl:144: args.ReturnList*/
_SequenceL__resultConv.ReturnList = _SequenceL_tmp759;	/*TuringMachineInterpreter.sl:144: [(ID: id, Arguments: args.ReturnList)]*/
_SequenceL_tmp759.delete_data(false);	
_SequenceL_tmp759.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_args.TokenPosition;	/*TuringMachineInterpreter.sl:144: args.TokenPosition*/
_SequenceL__Arg_args._delete_data(false);	
_SequenceL__Arg_args._finished();	
}
else
{
_SequenceL_tmp765.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp767.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:146: ""*/
(*(_SequenceL_tmp765.get_ptr(1))).ID = _SequenceL_tmp767;	
_SequenceL_tmp767.delete_data(false);	
_SequenceL_tmp767.finished();	
_SequenceL_tmp768.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp768, (*(_SequenceL_tmp765.get_ptr(1))).Arguments);	
_SequenceL_tmp768.delete_data(false);	
_SequenceL_tmp768.finished();	
_SequenceL__resultConv.ReturnList = _SequenceL_tmp765;	/*TuringMachineInterpreter.sl:146: [(ID: "", Arguments: [])]*/
_SequenceL_tmp765.delete_data(false);	
_SequenceL_tmp765.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:146: Position*/
_SequenceL__Arg_currentToken._delete_data(false);	
_SequenceL__Arg_currentToken._finished();	
}
}
void SequenceL__parallel_TokenizeLine_0(Sequence< char > &_SequenceL__Arg_Line, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp770(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp772(cspace);
Sequence< Empty > _SequenceL_tmp771(cspace);

_SequenceL_tmp770.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:96: ""*/
_SequenceL_tmp771.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp771, _SequenceL_tmp772);	
_SequenceL_tmp771.delete_data(false);	
_SequenceL_tmp771.finished();	
SequenceL__parallel_TokenizeLineWorker_0(_SequenceL__Arg_Line, 1, _SequenceL_tmp770, _SequenceL_tmp772, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:96: TokenizeLineWorker(Line, 1, "", [])*/
_SequenceL_tmp770.delete_data(false);	
_SequenceL_tmp772.delete_data(false);	
_SequenceL_tmp772.finished();	
_SequenceL_tmp770.finished();	
}
void SequenceL__parallel_ParseConfig_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__ex_iter, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv)
{
_sl_MFUNCTION_0 _SequenceL__Arg_label(cspace);
_sl_PARSERETURN_0 _SequenceL_tmp796(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp795(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_entries(cspace);
char _SequenceL_tmp794;
Sequence< Sequence< char > > _SequenceL__Arg_symbols(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_operations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_finalConfig(cspace);
_sl_PARSERETURN_0 _SequenceL_tmp799(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp798(cspace);

if ((_SequenceL__Arg_Line.size() > 0))	/*TuringMachineInterpreter.sl:188: ((Label: label, Symbols: symbols, Operations: operations, FinalConfig: finalConfig) 				when not((Line[1] = '/') and (Line[2] = '/'))) 			when size(Line) > 0*/
{
if (!(((*(_SequenceL__Arg_Line.get_ptr(1))) == '/') && ((*(_SequenceL__Arg_Line.get_ptr(2))) == '/')))	/*TuringMachineInterpreter.sl:187: (Label: label, Symbols: symbols, Operations: operations, FinalConfig: finalConfig) 				when not((Line[1] = '/') and (Line[2] = '/'))*/
{
_SequenceL_tmp794 = _SequenceL_DELIMITER_0;	/*TuringMachineInterpreter.sl:180: DELIMITER*/
SequenceL__parallel_split_1(_SequenceL__Arg_Line, _SequenceL_tmp794, _SequenceL__Arg_entries);	/*TuringMachineInterpreter.sl:180: split(Line, DELIMITER)*/
SequenceL__parallel_TokenizeLine_0((*(_SequenceL__Arg_entries.get_ptr(1))), _SequenceL_tmp795);	/*TuringMachineInterpreter.sl:181: TokenizeLine(entries[1])*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0(_SequenceL_tmp795, 1, _SequenceL_tmp796));
_SequenceL_tmp795.finished();	
_SequenceL_tmp796.ReturnList.head(_SequenceL__Arg_label);	/*TuringMachineInterpreter.sl:181: head(ParseMFunction(TokenizeLine(entries[1]), 1).ReturnList)*/
_SequenceL_tmp796._delete_data(false);	
_SequenceL_tmp796._finished();	
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Label.val_assign() = _SequenceL__Arg_label;	/*TuringMachineInterpreter.sl:186: label*/
_SequenceL__Arg_label._delete_data(false);	
_SequenceL__Arg_label._finished();	
SequenceL__parallel_split_1((*(_SequenceL__Arg_entries.get_ptr(2))), ',', _SequenceL__Arg_symbols);	/*TuringMachineInterpreter.sl:182: split(entries[2], ',')*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Symbols = _SequenceL__Arg_symbols;	/*TuringMachineInterpreter.sl:186: symbols*/
_SequenceL__Arg_symbols.delete_data(false);	
_SequenceL__Arg_symbols.finished();	
SequenceL__parallel_split_1((*(_SequenceL__Arg_entries.get_ptr(3))), ',', _SequenceL__Arg_operations);	/*TuringMachineInterpreter.sl:183: split(entries[3], ',')*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Operations = _SequenceL__Arg_operations;	/*TuringMachineInterpreter.sl:186: operations*/
_SequenceL__Arg_operations.delete_data(false);	
_SequenceL__Arg_operations.finished();	
SequenceL__parallel_TokenizeLine_0((*(_SequenceL__Arg_entries.get_ptr(4))), _SequenceL_tmp798);	/*TuringMachineInterpreter.sl:184: TokenizeLine(entries[4])*/
_SequenceL__Arg_entries.delete_data(false);	
_SequenceL__Arg_entries.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_ParseMFunctionTOKEN_i_0(_SequenceL_tmp798, 1, _SequenceL_tmp799));
_SequenceL_tmp798.finished();	
_SequenceL_tmp799.ReturnList.head(_SequenceL__Arg_finalConfig);	/*TuringMachineInterpreter.sl:184: head(ParseMFunction(TokenizeLine(entries[4]), 1).ReturnList)*/
_SequenceL_tmp799._delete_data(false);	
_SequenceL_tmp799._finished();	
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).FinalConfig.val_assign() = _SequenceL__Arg_finalConfig;	/*TuringMachineInterpreter.sl:186: finalConfig*/
_SequenceL__Arg_finalConfig._delete_data(false);	
_SequenceL__Arg_finalConfig._finished();	
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
void SequenceL__parallel_SINGLETON_FUNCTION_0(Sequence< char > &_SequenceL__Arg_id, _sl_MFUNCTION_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp803(cspace);

_SequenceL__resultConv.ID = _SequenceL__Arg_id;	/*TuringMachineInterpreter.sl:33: id*/
_SequenceL_tmp803.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp803, _SequenceL__resultConv.Arguments);	
_SequenceL_tmp803.delete_data(false);	
_SequenceL_tmp803.finished();	
}
void SequenceL__parallel_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp835;
int _SequenceL_tmp836;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp835 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp836 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp835;	
_SequenceL___Arg_val_tco = _SequenceL_tmp836;	
goto _parallel_integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL__parallel_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL__parallel_integerPowerHelper_4(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL__parallel_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_char == '0'))	/*Conversion.sl:120: 0 when char = '0'	else		1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:100: 0*/
}
else
{
if ((_SequenceL__Arg_char == '1'))	/*Conversion.sl:120: 1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 1;	/*Conversion.sl:102: 1*/
}
else
{
if ((_SequenceL__Arg_char == '2'))	/*Conversion.sl:120: 2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 2;	/*Conversion.sl:104: 2*/
}
else
{
if ((_SequenceL__Arg_char == '3'))	/*Conversion.sl:120: 3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 3;	/*Conversion.sl:106: 3*/
}
else
{
if ((_SequenceL__Arg_char == '4'))	/*Conversion.sl:120: 4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 4;	/*Conversion.sl:108: 4*/
}
else
{
if ((_SequenceL__Arg_char == '5'))	/*Conversion.sl:120: 5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 5;	/*Conversion.sl:110: 5*/
}
else
{
if ((_SequenceL__Arg_char == '6'))	/*Conversion.sl:120: 6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 6;	/*Conversion.sl:112: 6*/
}
else
{
if ((_SequenceL__Arg_char == '7'))	/*Conversion.sl:120: 7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 7;	/*Conversion.sl:114: 7*/
}
else
{
if ((_SequenceL__Arg_char == '8'))	/*Conversion.sl:120: 8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 8;	/*Conversion.sl:116: 8*/
}
else
{
if ((_SequenceL__Arg_char == '9'))	/*Conversion.sl:120: 9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 9;	/*Conversion.sl:118: 9*/
}
else
{
_SequenceL__resultConv = 0;	/*Conversion.sl:120: 0*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL__sl_RunMachine_nt45_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp897;
int _SequenceL__Arg_place;
int _SequenceL_tmp898;

SequenceL_charToInt_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp897);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp898 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_4(10, _SequenceL_tmp898, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result46.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp897 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL__parallel_atoIWorker_2(Sequence< char > &_SequenceL__Arg_numString, Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SequenceL__sl_RunMachine_nt45_ SequenceL__sl_RunMachine_nt45__val(_SequenceL__Arg_numString, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_numString.size() + 1, SequenceL__sl_RunMachine_nt45__val);
}
void SequenceL__parallel_take_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:165: list[1 ... n]*/
}
void SequenceL__parallel_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL__parallel_trimNonNumeric_2(Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp974;
int _SequenceL_tmp977;
int _SequenceL_tmp979;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp974);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp974)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp977 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_1(_SequenceL__Arg_numString, _SequenceL_tmp977, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp979 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp979;	
goto _parallel_trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
_SequenceL__Arg_numString.delete_data(false);	
}
void SequenceL__parallel_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL__parallel_trimStart_3(Sequence< char > &_SequenceL__Arg_input, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp1056;
char _SequenceL_tmp1055;
Sequence< char > _SequenceL_tmp1058(cspace);

_SequenceL___Arg_input_tco.hard_copy(_SequenceL__Arg_input,__LINE__);	
_SequenceL__Arg_input.delete_data(false);	
_parallel_trimStart_String_label_tco:	
if ((_SequenceL___Arg_input_tco.size() == 0))	/*String.sl:12: input when size(input) = 0	else		trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:8: input*/
}
else
{
_SequenceL_tmp1055 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_3(_SequenceL_tmp1055, _SequenceL_tmp1056);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp1056)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp1058);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp1058);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp1058.delete_data(false);	
_SequenceL_tmp1058.finished();	
}
void SequenceL__parallel_stringToInt_2(Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp1078;
int _SequenceL_tmp1082;
Sequence< char > _SequenceL_tmp1081(cspace);
char _SequenceL_tmp1084;
Sequence< char > _SequenceL_tmp1087(cspace);
Sequence< int > _SequenceL_tmp1089(cspace);
Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL__parallel_trimStart_3(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp1078 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp1078 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp1081);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_2(_SequenceL_tmp1081, _SequenceL_tmp1082);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp1081.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp1082);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp1084 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp1084 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp1087);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_2(_SequenceL_tmp1087, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp1087.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_2(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_2(_SequenceL__Arg_justNumber, _SequenceL_tmp1089);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp1089, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp1089.delete_data(false);	
_SequenceL_tmp1089.finished();	
}
}
}
}
void SequenceL__sl_RunMachine_nt39_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1096 = _r.begin(); _SequenceL__i1096 < _e; _SequenceL__i1096++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i1096 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i1096 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result40.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_RunMachine_nt41_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1099 = _r.begin(); _SequenceL__i1099 < _e; _SequenceL__i1099++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i1099 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i1099 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result42.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_RunMachine_nt43_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1104 = _r.begin(); _SequenceL__i1104 < _e; _SequenceL__i1104++)
{

ellipsis((*(_SequenceL_tmp1097.get_ptr(_SequenceL__i1104))), (*(_SequenceL_tmp1102.get_ptr(_SequenceL__i1104))), (*(_SequenceL__result44.get_ptr(_SequenceL__i1104))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp1091(cspace);
Sequence< int > _SequenceL_tmp1097(cspace);
Sequence< int > _SequenceL_tmp1093(cspace);
Sequence< int > _SequenceL__Arg_indexes(cspace);
Sequence< int > _SequenceL_tmp1095(cspace);
Sequence< int > _SequenceL_tmp1102(cspace);
Sequence< int > _SequenceL_tmp1098(cspace);
Sequence< int > _SequenceL_tmp1100(cspace);
Sequence< Sequence< int > > _SequenceL_tmp1103(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp1091.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp1091, _SequenceL__resultConv);	
_SequenceL_tmp1091.delete_data(false);	
_SequenceL_tmp1091.finished();	
_SequenceL_tmp1103.delete_data(false);	
_SequenceL_tmp1103.finished();	
}
else
{
_SequenceL_tmp1093.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1093.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp1095.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp1095.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt39_ SequenceL__sl_RunMachine_nt39__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp1095.size(), _SequenceL_tmp1095);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt39__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i1096=1,_stop_val__SequenceL__i1096=_SequenceL_tmp1095.size(); _SequenceL__i1096<=_stop_val__SequenceL__i1096; _SequenceL__i1096+=1)
{
(*(_SequenceL_tmp1095.get_ptr(_SequenceL__i1096))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i1096))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp1093, _SequenceL_tmp1095, _SequenceL_tmp1097);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp1093.delete_data(false);	
_SequenceL_tmp1095.delete_data(false);	
_SequenceL_tmp1095.finished();	
_SequenceL_tmp1093.finished();	
_SequenceL_tmp1098.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp1098.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt41_ SequenceL__sl_RunMachine_nt41__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp1098.size(), _SequenceL_tmp1098);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt41__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i1099=1,_stop_val__SequenceL__i1099=_SequenceL_tmp1098.size(); _SequenceL__i1099<=_stop_val__SequenceL__i1099; _SequenceL__i1099+=1)
{
(*(_SequenceL_tmp1098.get_ptr(_SequenceL__i1099))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i1099))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp1100.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1100.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp1098, _SequenceL_tmp1100, _SequenceL_tmp1102);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp1098.delete_data(false);	
_SequenceL_tmp1100.delete_data(false);	
_SequenceL_tmp1100.finished();	
_SequenceL_tmp1098.finished();	
_SequenceL_tmp1103.setSize(_SequenceL_tmp1097.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_RunMachine_nt43_ SequenceL__sl_RunMachine_nt43__val(_SequenceL_tmp1097, _SequenceL_tmp1102, _SequenceL_tmp1103);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp1103.size() + 1, SequenceL__sl_RunMachine_nt43__val);
_SequenceL_tmp1097.delete_data(false);	
_SequenceL_tmp1102.delete_data(false);	
_SequenceL_tmp1102.finished();	
_SequenceL_tmp1097.finished();	
SequenceL__parallel_multipleIndexes_1(_SequenceL__Arg_list, _SequenceL_tmp1103, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp1103.delete_data(false);	
_SequenceL_tmp1103.finished();	
}
}
void SequenceL__sl_RunMachine_nt37_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (!((*(_SequenceL__Arg_string.get_ptr(_SequenceL__no_share_iter))) == _SequenceL__Arg_character))	/*TuringMachineInterpreter.sl:65: string[i] when not(string[i] = character)*/
{
(*(_SequenceL__result38.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_string.get_ptr(_SequenceL__no_share_iter)));	/*TuringMachineInterpreter.sl:65: string[i]*/
_SequenceL__result38.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result38.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_RemoveCharacter_0(char _SequenceL__Arg_character, Sequence< char > &_SequenceL__Arg_string, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_string.size());	/*TuringMachineInterpreter.sl:65: string[i] when not(string[i] = character)*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_string.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt37_ SequenceL__sl_RunMachine_nt37__val(_SequenceL__Arg_string, _SequenceL__Arg_character, 1, _SequenceL__Arg_string.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt37__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_string.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!((*(_SequenceL__Arg_string.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_character))	/*TuringMachineInterpreter.sl:65: string[i] when not(string[i] = character)*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_string.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:65: string[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_intToChar_2(int _SequenceL__Arg_int, char &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_int == 0))	/*Conversion.sl:96: '0' when int = 0	else		'1' when int = 1	else		'2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '0';	/*Conversion.sl:76: '0'*/
}
else
{
if ((_SequenceL__Arg_int == 1))	/*Conversion.sl:96: '1' when int = 1	else		'2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '1';	/*Conversion.sl:78: '1'*/
}
else
{
if ((_SequenceL__Arg_int == 2))	/*Conversion.sl:96: '2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '2';	/*Conversion.sl:80: '2'*/
}
else
{
if ((_SequenceL__Arg_int == 3))	/*Conversion.sl:96: '3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '3';	/*Conversion.sl:82: '3'*/
}
else
{
if ((_SequenceL__Arg_int == 4))	/*Conversion.sl:96: '4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '4';	/*Conversion.sl:84: '4'*/
}
else
{
if ((_SequenceL__Arg_int == 5))	/*Conversion.sl:96: '5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '5';	/*Conversion.sl:86: '5'*/
}
else
{
if ((_SequenceL__Arg_int == 6))	/*Conversion.sl:96: '6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '6';	/*Conversion.sl:88: '6'*/
}
else
{
if ((_SequenceL__Arg_int == 7))	/*Conversion.sl:96: '7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '7';	/*Conversion.sl:90: '7'*/
}
else
{
if ((_SequenceL__Arg_int == 8))	/*Conversion.sl:96: '8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '8';	/*Conversion.sl:92: '8'*/
}
else
{
if ((_SequenceL__Arg_int == 9))	/*Conversion.sl:96: '9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '9';	/*Conversion.sl:94: '9'*/
}
else
{
_SequenceL__resultConv = '0';	/*Conversion.sl:96: '0'*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL__parallel_intToString_2(int _SequenceL__Arg_number, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp1256(cspace);
Sequence< char > _SequenceL_tmp1258(cspace);
int _SequenceL_tmp1257;
Sequence< char > _SequenceL__Arg_lowestDigitChar(cspace);
int _SequenceL__Arg_lowestDigit;
Sequence< char > _SequenceL_tmp1265(cspace);
int _SequenceL_tmp1264;

if ((_SequenceL__Arg_number < 0))	/*Conversion.sl:72: "-" ++ intToString(-number) when number < 0		else 			lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL_tmp1256 = "-";	/*Conversion.sl:68: "-"*/
_SequenceL_tmp1257 = (-_SequenceL__Arg_number);	/*Conversion.sl:68: -number*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_intToString_i_2(_SequenceL_tmp1257, _SequenceL_tmp1258));
_appendF(_SequenceL_tmp1256, _SequenceL_tmp1258, _SequenceL__resultConv);	/*Conversion.sl:68: "-" ++ intToString(-number)*/
_SequenceL_tmp1256.delete_data(false);	
_SequenceL_tmp1258.delete_data(false);	
_SequenceL_tmp1258.finished();	
_SequenceL_tmp1256.finished();	
}
else
{
_SequenceL__Arg_lowestDigitChar.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_lowestDigit = (_SequenceL__Arg_number % 10);	/*Conversion.sl:65: number mod 10*/
SequenceL__parallel_intToChar_2(_SequenceL__Arg_lowestDigit, (*(_SequenceL__Arg_lowestDigitChar.get_ptr(1))));	/*Conversion.sl:66: intToChar(lowestDigit)*/
if ((_SequenceL__Arg_number < 10))	/*Conversion.sl:72: lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL__resultConv = _SequenceL__Arg_lowestDigitChar;	/*Conversion.sl:70: lowestDigitChar*/
_SequenceL__Arg_lowestDigitChar.delete_data(false);	
_SequenceL__Arg_lowestDigitChar.finished();	
}
else
{
_SequenceL_tmp1264 = (_SequenceL__Arg_number / 10);	/*Conversion.sl:72: number / 10*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_intToString_i_2(_SequenceL_tmp1264, _SequenceL_tmp1265));
_appendF(_SequenceL_tmp1265, _SequenceL__Arg_lowestDigitChar, _SequenceL__resultConv);	/*Conversion.sl:72: intToString(number / 10) ++ lowestDigitChar*/
_SequenceL_tmp1265.delete_data(false);	
_SequenceL__Arg_lowestDigitChar.delete_data(false);	
_SequenceL__Arg_lowestDigitChar.finished();	
_SequenceL_tmp1265.finished();	
}
}
}
void SequenceL__parallel_allButLast_1(Sequence< char > &_SequenceL__Arg_list, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:157: list[1 ... (size(list) - 1)]*/
}
void SequenceL__sl_RunMachine_nt35_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
Sequence< char > _SequenceL_tmp1282(cspace);

_SequenceL_tmp1282.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1282.get_ptr(1))) = _SequenceL__Arg_delimiter;	/*Sequence.sl:65: delimiter*/
append((*(_SequenceL__Arg_strings.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1282, (*(_SequenceL__result36.get_ptr(_SequenceL__Index_i))));	/*Sequence.sl:65: strings[i] ++ [delimiter]*/
}
}
void SequenceL__parallel_delimitWorker_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_strings.size());	/*Sequence.sl:65: strings[i] ++ [delimiter]*/
SequenceL__sl_RunMachine_nt35_ SequenceL__sl_RunMachine_nt35__val(_SequenceL__Arg_delimiter, _SequenceL__Arg_strings, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_strings.size() + 1, SequenceL__sl_RunMachine_nt35__val);
}
void SequenceL__sl_RunMachine_nt33_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1297 = _r.begin(); _SequenceL__i1297 < _e; _SequenceL__i1297++)
{

(*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297)))._Reference();	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
SequenceL_MFunctionToString_0((*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297))), (*(_SequenceL__result34.get_ptr(_SequenceL__i1297))));	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
}
}
void SequenceL__parallel_MFunctionToString_0(_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, Sequence< char > &_SequenceL__resultConv)
{
Sequence< Sequence< char > > _SequenceL__Arg_args(cspace);
Sequence< char > _SequenceL_tmp1304(cspace);
Sequence< char > _SequenceL_tmp1302(cspace);
Sequence< char > _SequenceL_tmp1301(cspace);
Sequence< char > _SequenceL_tmp1303(cspace);
Sequence< char > _SequenceL_tmp1305(cspace);

_SequenceL__Arg_args.setSize(_SequenceL__Arg_MFunction.Arguments.size());	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
SequenceL__sl_RunMachine_nt33_ SequenceL__sl_RunMachine_nt33__val(_SequenceL__Arg_MFunction, _SequenceL__Arg_args);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_args.size() + 1, SequenceL__sl_RunMachine_nt33__val);
if ((_SequenceL__Arg_args.size() > 0))	/*TuringMachineInterpreter.sl:49: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")" when size(args) > 0		else			MFunction.ID*/
{
_SequenceL_tmp1301 = "(";	/*TuringMachineInterpreter.sl:47: "("*/
append(_SequenceL__Arg_MFunction.ID, _SequenceL_tmp1301, _SequenceL_tmp1302);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "("*/
_SequenceL_tmp1301.delete_data(false);	
_SequenceL_tmp1301.finished();	
SequenceL__parallel_delimit_1(_SequenceL__Arg_args, ',', _SequenceL_tmp1303);	/*TuringMachineInterpreter.sl:47: delimit(args, ',')*/
_SequenceL__Arg_args.delete_data(false);	
_SequenceL__Arg_args.finished();	
append(_SequenceL_tmp1302, _SequenceL_tmp1303, _SequenceL_tmp1304);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',')*/
_SequenceL_tmp1302.delete_data(false);	
_SequenceL_tmp1303.delete_data(false);	
_SequenceL_tmp1303.finished();	
_SequenceL_tmp1302.finished();	
_SequenceL_tmp1305 = ")";	/*TuringMachineInterpreter.sl:47: ")"*/
append(_SequenceL_tmp1304, _SequenceL_tmp1305, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")"*/
_SequenceL_tmp1304.delete_data(false);	
_SequenceL_tmp1305.delete_data(false);	
_SequenceL_tmp1305.finished();	
_SequenceL_tmp1304.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_MFunction.ID;	/*TuringMachineInterpreter.sl:49: MFunction.ID*/
_SequenceL__Arg_args.delete_data(false);	
_SequenceL__Arg_args.finished();	
}
}
void SequenceL__sl_RunMachine_nt31_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result32.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_element;	/*Sequence.sl:82: element*/
}
}
}
void SequenceL__parallel_duplicate_1(char _SequenceL__Arg_element, int _SequenceL__Arg_times, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_times > 0 ? _SequenceL__Arg_times : 0);	/*Sequence.sl:82: element*/
if (((((SL_FLOAT)(_SequenceL__Arg_times - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt31_ SequenceL__sl_RunMachine_nt31__val(_SequenceL__Arg_element, 1, _SequenceL__Arg_times, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt31__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_times; _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_element;	/*Sequence.sl:82: element*/
}
}
}
void SequenceL__sl_RunMachine_nt29_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp1360;
bool _SequenceL_tmp1364;
Sequence< char > _SequenceL_tmp1363(cspace);

_SequenceL_tmp1360 = eq_list((*(_SequenceL__Arg_splitTape.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1359);	/*TuringMachineInterpreter.sl:412: equalList(splitTape[i], "_0_")*/
if (_SequenceL_tmp1360)	/*TuringMachineInterpreter.sl:413: '0' when equalList(splitTape[i], "_0_")	 	else	 		'1' when equalList(splitTape[i], "_1_")*/
{
(*(_SequenceL__result30.get_ptr(_SequenceL__Index_i))) = '0';	/*TuringMachineInterpreter.sl:411: '0'*/
_SequenceL__result30.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL_tmp1363 = "_1_";	/*TuringMachineInterpreter.sl:413: "_1_"*/
_SequenceL_tmp1364 = eq_list((*(_SequenceL__Arg_splitTape.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1363);	/*TuringMachineInterpreter.sl:413: equalList(splitTape[i], "_1_")*/
if (_SequenceL_tmp1364)	/*TuringMachineInterpreter.sl:413: '1' when equalList(splitTape[i], "_1_")*/
{
(*(_SequenceL__result30.get_ptr(_SequenceL__Index_i))) = '1';	/*TuringMachineInterpreter.sl:413: '1'*/
_SequenceL__result30.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__result30.setExistence(_SequenceL__Index_i, false);	
}
}
}
}
void SequenceL__parallel_GetUtmOut_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__resultConv)
{
Sequence< Sequence< char > > _SequenceL__Arg_splitTape(cspace);
Sequence< char > _SequenceL_tmp1359(cspace);

SequenceL__parallel_split_1(_SequenceL__Arg_State.Tape, ':', _SequenceL__Arg_splitTape);	/*TuringMachineInterpreter.sl:409: split(State.Tape, ':')*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_splitTape.size());	/*TuringMachineInterpreter.sl:413: '0' when equalList(splitTape[i], "_0_")	 	else	 		'1' when equalList(splitTape[i], "_1_")*/
_SequenceL__resultConv.create_map();	
if ((_SequenceL__Arg_splitTape.size() >= 1))	
{
_SequenceL_tmp1359 = "_0_";	/*TuringMachineInterpreter.sl:411: "_0_"*/
}
SequenceL__sl_RunMachine_nt29_ SequenceL__sl_RunMachine_nt29__val(_SequenceL__Arg_splitTape, _SequenceL_tmp1359, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_splitTape.size() + 1, SequenceL__sl_RunMachine_nt29__val);
_SequenceL__Arg_splitTape.delete_data(false);	
_SequenceL_tmp1359.delete_data(false);	
_SequenceL_tmp1359.finished();	
_SequenceL__Arg_splitTape.finished();	
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_TrimTapeBegin_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, _sl_STATE_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_tape_tco(cspace);
int _SequenceL___Arg_position_tco;
char _SequenceL_tmp1489;
Sequence< char > _SequenceL_tmp1495(cspace);
int _SequenceL_tmp1496;

_SequenceL___Arg_tape_tco.hard_copy(_SequenceL__Arg_tape,__LINE__);	
_SequenceL__Arg_tape.delete_data(false);	
_SequenceL___Arg_position_tco = _SequenceL__Arg_position;	
_parallel_TrimTapeBegin_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_position_tco == 1))	/*TuringMachineInterpreter.sl:308: (CurrentPosition: position, Tape: tape) when position = 1	else		(CurrentPosition: position, Tape: tape) when not(head(tape) = SPACE_CHAR)	else		TrimTapeBegin(tail(tape), position - 1)*/
{
_SequenceL__resultConv.CurrentPosition = _SequenceL___Arg_position_tco;	/*TuringMachineInterpreter.sl:304: position*/
_SequenceL__resultConv.Tape = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:304: tape*/
}
else
{
_SequenceL_tmp1489 = _SequenceL___Arg_tape_tco.head();	/*TuringMachineInterpreter.sl:306: head(tape)*/
if (!(_SequenceL_tmp1489 == _SequenceL_SPACE_CHAR_0))	/*TuringMachineInterpreter.sl:308: (CurrentPosition: position, Tape: tape) when not(head(tape) = SPACE_CHAR)	else		TrimTapeBegin(tail(tape), position - 1)*/
{
_SequenceL__resultConv.CurrentPosition = _SequenceL___Arg_position_tco;	/*TuringMachineInterpreter.sl:306: position*/
_SequenceL__resultConv.Tape = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:306: tape*/
}
else
{
_SequenceL___Arg_tape_tco.tail(_SequenceL_tmp1495);	/*TuringMachineInterpreter.sl:308: tail(tape)*/
_SequenceL_tmp1496 = (_SequenceL___Arg_position_tco - 1);	/*TuringMachineInterpreter.sl:308: position - 1*/
_swap(_SequenceL___Arg_tape_tco, _SequenceL_tmp1495);	
_SequenceL___Arg_position_tco = _SequenceL_tmp1496;	
goto _parallel_TrimTapeBegin_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:308: TrimTapeBegin(tail(tape), position - 1)*/
}
}
_SequenceL_tmp1495.delete_data(false);	
_SequenceL_tmp1495.finished();	
}
void SequenceL__parallel_last_1(Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:153: list[size(list)]*/
}
void SequenceL__sl_RunMachine_nt25_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result26.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
void SequenceL__sl_RunMachine_nt27_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (!(_SequenceL__no_share_iter == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__result28.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__result28.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL__parallel_setElementAt_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_location, char _SequenceL__Arg_newElement, Sequence< char > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_list.onlyInstance())	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
_SequenceL__resultConv = _SequenceL__Arg_list;	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_list.size(), _SequenceL__Arg_location) - SequenceL_max(1, _SequenceL__Arg_location))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt25_ SequenceL__sl_RunMachine_nt25__val(_SequenceL__Arg_newElement, SequenceL_max(1, _SequenceL__Arg_location), SequenceL_min(_SequenceL__Arg_list.size(), _SequenceL__Arg_location), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt25__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, _SequenceL__Arg_location),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_list.size(), _SequenceL__Arg_location); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt27_ SequenceL__sl_RunMachine_nt27__val(_SequenceL__Arg_location, _SequenceL__Arg_list, _SequenceL__Arg_newElement, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt27__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!(_SequenceL__Index_i == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
}
void SequenceL__parallel_EraseOperation_0(int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{
char _SequenceL_tmp1546;

_SequenceL_tmp1546 = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:355: SPACE_CHAR*/
SequenceL__parallel_PrintOperation_0(_SequenceL_tmp1546, _SequenceL__Arg_Position, _SequenceL__Arg_Tape, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:355: PrintOperation(SPACE_CHAR, Position, Tape)*/
}
void SequenceL__parallel_PrintOperation_0(char _SequenceL__Arg_Symbol, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_finalTape(cspace);
Sequence< char > _SequenceL__Arg_expandedTape(cspace);
Sequence< char > _SequenceL_tmp1551(cspace);
char _SequenceL_tmp1547;
int _SequenceL__Arg_diff;

_SequenceL_tmp1547 = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:349: SPACE_CHAR*/
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tape.size()))	/*TuringMachineInterpreter.sl:348: Position - size(Tape) when Position > size(Tape) else 0*/
{
_SequenceL__Arg_diff = (_SequenceL__Arg_Position - _SequenceL__Arg_Tape.size());	/*TuringMachineInterpreter.sl:348: Position - size(Tape)*/
}
else
{
_SequenceL__Arg_diff = 0;	/*TuringMachineInterpreter.sl:348: 0*/
}
SequenceL__parallel_duplicate_1(_SequenceL_tmp1547, _SequenceL__Arg_diff, _SequenceL_tmp1551);	/*TuringMachineInterpreter.sl:349: duplicate(SPACE_CHAR, diff)*/
append(_SequenceL__Arg_Tape, _SequenceL_tmp1551, _SequenceL__Arg_expandedTape);	/*TuringMachineInterpreter.sl:349: Tape ++ duplicate(SPACE_CHAR, diff)*/
_SequenceL_tmp1551.delete_data(false);	
_SequenceL_tmp1551.finished();	
SequenceL__parallel_setElementAt_1(_SequenceL__Arg_expandedTape, _SequenceL__Arg_Position, _SequenceL__Arg_Symbol, _SequenceL__Arg_finalTape);	/*TuringMachineInterpreter.sl:350: setElementAt(expandedTape, Position, Symbol)*/
_SequenceL__Arg_expandedTape.delete_data(false);	
_SequenceL__Arg_expandedTape.finished();	
_SequenceL__resultConv = _SequenceL__Arg_finalTape;	/*TuringMachineInterpreter.sl:352: finalTape*/
_SequenceL__Arg_finalTape.delete_data(false);	
_SequenceL__Arg_finalTape.finished();	
}
void SequenceL__parallel_ApplyOperation_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__Arg_Operation, _sl_STATE_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_trimmedTape(cspace);
Sequence< char > _SequenceL__Arg_newTape(cspace);
char _SequenceL_tmp1610;
char _SequenceL_tmp1614;
Sequence< char > _SequenceL_tmp1613(cspace);
char _SequenceL_tmp1618;
char _SequenceL_tmp1624;
Sequence< char > _SequenceL_tmp1630(cspace);
char _SequenceL_tmp1634;
Sequence< char > _SequenceL_tmp1642(cspace);
int _SequenceL__Arg_newPosition;
char _SequenceL_tmp1645;
char _SequenceL_tmp1652;
char _SequenceL_tmp1657;

if ((_SequenceL__Arg_Operation.size() == 0))	/*TuringMachineInterpreter.sl:344: State when size(Operation) = 0		else			TrimTapeBegin(trimmedTape, newPosition)*/
{
_SequenceL__resultConv = _SequenceL__Arg_State;	/*TuringMachineInterpreter.sl:342: State*/
}
else
{
_SequenceL_tmp1610 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:321: head(Operation)*/
if ((_SequenceL_tmp1610 == 'P'))	/*TuringMachineInterpreter.sl:329: PrintOperation(head(tail(Operation)), State.CurrentPosition, State.Tape) when head(Operation) = 'P'			else				EraseOperation(State.CurrentPosition, State.Tape) when head(Operation) = 'E'			else				[SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL__Arg_Operation.tail(_SequenceL_tmp1613);	/*TuringMachineInterpreter.sl:321: tail(Operation)*/
_SequenceL_tmp1614 = _SequenceL_tmp1613.head();	/*TuringMachineInterpreter.sl:321: head(tail(Operation))*/
_SequenceL_tmp1613.delete_data(false);	
_SequenceL_tmp1613.finished();	
SequenceL__parallel_PrintOperation_0(_SequenceL_tmp1614, _SequenceL__Arg_State.CurrentPosition, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:321: PrintOperation(head(tail(Operation)), State.CurrentPosition, State.Tape)*/
}
else
{
_SequenceL_tmp1618 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:323: head(Operation)*/
if ((_SequenceL_tmp1618 == 'E'))	/*TuringMachineInterpreter.sl:329: EraseOperation(State.CurrentPosition, State.Tape) when head(Operation) = 'E'			else				[SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
SequenceL__parallel_EraseOperation_0(_SequenceL__Arg_State.CurrentPosition, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:323: EraseOperation(State.CurrentPosition, State.Tape)*/
}
else
{
_SequenceL_tmp1624 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:325: head(Operation)*/
if (((_SequenceL_tmp1624 == 'L') && (_SequenceL__Arg_State.CurrentPosition == 1)))	/*TuringMachineInterpreter.sl:329: [SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL_tmp1630.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1630.get_ptr(1))) = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:325: SPACE_CHAR*/
append(_SequenceL_tmp1630, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:325: [SPACE_CHAR] ++ State.Tape*/
_SequenceL_tmp1630.delete_data(false);	
_SequenceL_tmp1630.finished();	
}
else
{
_SequenceL_tmp1634 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:327: head(Operation)*/
if (((_SequenceL_tmp1634 == 'R') && (_SequenceL__Arg_State.CurrentPosition == _SequenceL__Arg_State.Tape.size())))	/*TuringMachineInterpreter.sl:329: State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL_tmp1642.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1642.get_ptr(1))) = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:327: SPACE_CHAR*/
append(_SequenceL__Arg_State.Tape, _SequenceL_tmp1642, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:327: State.Tape ++ [SPACE_CHAR]*/
_SequenceL_tmp1642.delete_data(false);	
_SequenceL_tmp1642.finished();	
}
else
{
_SequenceL__Arg_newTape = _SequenceL__Arg_State.Tape;	/*TuringMachineInterpreter.sl:329: State.Tape*/
}
}
}
}
_SequenceL_tmp1645 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:332: head(Operation)*/
if (((_SequenceL_tmp1645 == 'L') && (_SequenceL__Arg_State.CurrentPosition == 1)))	/*TuringMachineInterpreter.sl:338: 1 when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.CurrentPosition + 1 when head(Operation) = 'R'			else				State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = 1;	/*TuringMachineInterpreter.sl:332: 1*/
}
else
{
_SequenceL_tmp1652 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:334: head(Operation)*/
if ((_SequenceL_tmp1652 == 'R'))	/*TuringMachineInterpreter.sl:338: State.CurrentPosition + 1 when head(Operation) = 'R'			else				State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = (_SequenceL__Arg_State.CurrentPosition + 1);	/*TuringMachineInterpreter.sl:334: State.CurrentPosition + 1*/
}
else
{
_SequenceL_tmp1657 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:336: head(Operation)*/
if ((_SequenceL_tmp1657 == 'L'))	/*TuringMachineInterpreter.sl:338: State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = (_SequenceL__Arg_State.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:336: State.CurrentPosition - 1*/
}
else
{
_SequenceL__Arg_newPosition = _SequenceL__Arg_State.CurrentPosition;	/*TuringMachineInterpreter.sl:338: State.CurrentPosition*/
}
}
}
SequenceL__parallel_TrimTapeEnd_0(_SequenceL__Arg_newTape, _SequenceL__Arg_newPosition, _SequenceL__Arg_trimmedTape);	/*TuringMachineInterpreter.sl:340: TrimTapeEnd(newTape, newPosition)*/
_SequenceL__Arg_newTape.finished();	
SequenceL__parallel_TrimTapeBegin_0(_SequenceL__Arg_trimmedTape, _SequenceL__Arg_newPosition, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:344: TrimTapeBegin(trimmedTape, newPosition)*/
_SequenceL__Arg_trimmedTape.finished();	
}
}
void SequenceL__parallel_ApplyOperations_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL___Arg_State_tco(cspace);
Sequence< Sequence< char > > _SequenceL___Arg_Operations_tco(cspace);
_sl_STATE_0 _SequenceL__Arg_newState(cspace);
Sequence< char > _SequenceL__delete_opttmp1(cspace);
Sequence< char > _SequenceL_tmp1665(cspace);
Sequence< Sequence< char > > _SequenceL_tmp1666(cspace);
_sl_STATE_0 _SequenceL__tmp__Arg_State_tco(cspace);

_SequenceL___Arg_State_tco._hard_copy(_SequenceL__Arg_State,__LINE__);	
_SequenceL__Arg_State._delete_data(false);	
_SequenceL___Arg_Operations_tco.hard_copy(_SequenceL__Arg_Operations,__LINE__);	
_SequenceL__Arg_Operations.delete_data(false);	
_parallel_ApplyOperations_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_Operations_tco.size() == 0))	/*TuringMachineInterpreter.sl:316: State when size(Operations) = 0		else			ApplyOperations(newState, tail(Operations))*/
{
_SequenceL__resultConv = _SequenceL___Arg_State_tco;	/*TuringMachineInterpreter.sl:314: State*/
}
else
{
_SequenceL___Arg_State_tco._Reference();	/*TuringMachineInterpreter.sl:312: ApplyOperation(State, head(Operations))*/
_SequenceL___Arg_Operations_tco.head(_SequenceL_tmp1665);	/*TuringMachineInterpreter.sl:312: head(Operations)*/
_SequenceL_tmp1665.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:312: ApplyOperation(State, head(Operations))*/
SequenceL__parallel_ApplyOperation_0(_SequenceL___Arg_State_tco, _SequenceL__delete_opttmp1, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:312: ApplyOperation(State, head(Operations))*/
_SequenceL___Arg_State_tco._dereference();	
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL___Arg_Operations_tco.tail(_SequenceL_tmp1666);	/*TuringMachineInterpreter.sl:316: tail(Operations)*/
_SequenceL__tmp__Arg_State_tco = _SequenceL__Arg_newState;	
_SequenceL___Arg_State_tco = _SequenceL__tmp__Arg_State_tco;	
_swap(_SequenceL___Arg_Operations_tco, _SequenceL_tmp1666);	
goto _parallel_ApplyOperations_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:316: ApplyOperations(newState, tail(Operations))*/
}
_SequenceL__Arg_newState._delete_data(false);	
_SequenceL_tmp1665.delete_data(false);	
_SequenceL_tmp1666.delete_data(false);	
_SequenceL__tmp__Arg_State_tco._delete_data(false);	
_SequenceL___Arg_State_tco._delete_data(false);	
_SequenceL___Arg_State_tco._finished();	
_SequenceL__tmp__Arg_State_tco._finished();	
_SequenceL_tmp1666.finished();	
_SequenceL_tmp1665.finished();	
_SequenceL__Arg_newState._finished();	
}
void SequenceL__parallel_Execute_0(_sl_STATE_0 &_SequenceL__Arg_State, _sl_MCONFIG_0 &_SequenceL__Arg_mConfig, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_newState(cspace);
Sequence< Sequence< char > > _SequenceL__delete_opttmp1(cspace);

_SequenceL__resultConv.CurrentConfig.val_assign() = _SequenceL__Arg_mConfig.FinalConfig.val("TuringMachineInterpreter.sl:446: mConfig.FinalConfig");	/*TuringMachineInterpreter.sl:446: mConfig.FinalConfig*/
_SequenceL__Arg_State._Reference();	/*TuringMachineInterpreter.sl:444: ApplyOperations(State, mConfig.Operations)*/
_SequenceL__Arg_mConfig.Operations.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:444: ApplyOperations(State, mConfig.Operations)*/
SequenceL__parallel_ApplyOperations_0(_SequenceL__Arg_State, _SequenceL__delete_opttmp1, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:444: ApplyOperations(State, mConfig.Operations)*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL__resultConv.CurrentPosition = _SequenceL__Arg_newState.CurrentPosition;	/*TuringMachineInterpreter.sl:446: newState.CurrentPosition*/
_SequenceL__resultConv.Tape = _SequenceL__Arg_newState.Tape;	/*TuringMachineInterpreter.sl:446: newState.Tape*/
_SequenceL__Arg_newState._delete_data(false);	
_SequenceL__Arg_newState._finished();	
}
void SequenceL__sl_RunMachine_nt23_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result24.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_strings.get_ptr(_SequenceL__Index_i))).head();	/*TuringMachineInterpreter.sl:62: head(strings[i])*/
}
}
void SequenceL__parallel_HeadOfEach_0(Sequence< Sequence< char > > &_SequenceL__Arg_strings, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_strings.size());	/*TuringMachineInterpreter.sl:62: head(strings[i])*/
SequenceL__sl_RunMachine_nt23_ SequenceL__sl_RunMachine_nt23__val(_SequenceL__Arg_strings, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_strings.size() + 1, SequenceL__sl_RunMachine_nt23__val);
}
void SequenceL__parallel_equalListNT_1(Sequence< char > &_SequenceL__Arg_list1, Sequence< char > &_SequenceL__Arg_list2, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = eq_list(_SequenceL__Arg_list1, _SequenceL__Arg_list2);	/*Sequence.sl:8: equalList(list1, list2)*/
}
void SequenceL__sl_RunMachine_nt17_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1763 = _r.begin(); _SequenceL__i1763 < _e; _SequenceL__i1763++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i1763 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i1763 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result18.get_ptr(_SequenceL__no_share_iter))) = (_SequenceL__Arg_currentSymbol == (*(_SequenceL_tmp1761.get_ptr(_SequenceL__no_share_iter))));	/*TuringMachineInterpreter.sl:214: currentSymbol = HeadOfEach(symbols)*/
}
}
}
void SequenceL__sl_RunMachine_nt19_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1756 = _r.begin(); _SequenceL__i1756 < _e; _SequenceL__i1756++)
{

SequenceL_equalListNT_1(_SequenceL_tmp1754, (*(_SequenceL__Arg_symbols.get_ptr(_SequenceL__i1756))), (*(_SequenceL__result20.get_ptr(_SequenceL__i1756))));	/*TuringMachineInterpreter.sl:212: equalListNT("any", symbols)*/
}
}
void SequenceL__sl_RunMachine_nt21_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1746 = _r.begin(); _SequenceL__i1746 < _e; _SequenceL__i1746++)
{

SequenceL_equalListNT_1(_SequenceL_tmp1744, (*(_SequenceL__Arg_symbols.get_ptr(_SequenceL__i1746))), (*(_SequenceL__result22.get_ptr(_SequenceL__i1746))));	/*TuringMachineInterpreter.sl:210: equalListNT("none", symbols)*/
}
}
void SequenceL__parallel_Matches_0(char _SequenceL__Arg_currentSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_symbols, bool &_SequenceL__resultConv)
{
bool _SequenceL_tmp1747;
Sequence< char > _SequenceL_tmp1744(cspace);
Sequence< bool > _SequenceL_tmp1745(cspace);
bool _SequenceL_tmp1757;
Sequence< char > _SequenceL_tmp1754(cspace);
Sequence< bool > _SequenceL_tmp1755(cspace);
bool _SequenceL_tmp1764;
Sequence< char > _SequenceL_tmp1761(cspace);
Sequence< bool > _SequenceL_tmp1762(cspace);

if ((_SequenceL__Arg_symbols.size() == 0))	/*TuringMachineInterpreter.sl:216: true when size(symbols) = 0	else		true when currentSymbol = SPACE_CHAR and some(equalListNT("none", symbols))	else		true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:208: true*/
_SequenceL_tmp1745.delete_data(false);	
_SequenceL_tmp1755.delete_data(false);	
_SequenceL_tmp1755.finished();	
_SequenceL_tmp1745.finished();	
}
else
{
_SequenceL_tmp1744 = "none";	/*TuringMachineInterpreter.sl:210: "none"*/
_SequenceL_tmp1745.setSize(_SequenceL__Arg_symbols.size());	/*TuringMachineInterpreter.sl:210: equalListNT("none", symbols)*/
SequenceL__sl_RunMachine_nt21_ SequenceL__sl_RunMachine_nt21__val(_SequenceL_tmp1744, _SequenceL__Arg_symbols, _SequenceL_tmp1745);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp1745.size() + 1, SequenceL__sl_RunMachine_nt21__val);
_SequenceL_tmp1744.delete_data(false);	
_SequenceL_tmp1744.finished();	
_SequenceL_tmp1747 = some(_SequenceL_tmp1745);	/*TuringMachineInterpreter.sl:211: some(equalListNT("none", symbols))*/
_SequenceL_tmp1745.delete_data(false);	
_SequenceL_tmp1745.finished();	
if (((_SequenceL__Arg_currentSymbol == _SequenceL_SPACE_CHAR_0) && _SequenceL_tmp1747))	/*TuringMachineInterpreter.sl:216: true when currentSymbol = SPACE_CHAR and some(equalListNT("none", symbols))	else		true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:210: true*/
_SequenceL_tmp1755.delete_data(false);	
_SequenceL_tmp1755.finished();	
}
else
{
_SequenceL_tmp1754 = "any";	/*TuringMachineInterpreter.sl:212: "any"*/
_SequenceL_tmp1755.setSize(_SequenceL__Arg_symbols.size());	/*TuringMachineInterpreter.sl:212: equalListNT("any", symbols)*/
SequenceL__sl_RunMachine_nt19_ SequenceL__sl_RunMachine_nt19__val(_SequenceL_tmp1754, _SequenceL__Arg_symbols, _SequenceL_tmp1755);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp1755.size() + 1, SequenceL__sl_RunMachine_nt19__val);
_SequenceL_tmp1754.delete_data(false);	
_SequenceL_tmp1754.finished();	
_SequenceL_tmp1757 = some(_SequenceL_tmp1755);	/*TuringMachineInterpreter.sl:213: some(equalListNT("any", symbols))*/
_SequenceL_tmp1755.delete_data(false);	
_SequenceL_tmp1755.finished();	
if ((!(_SequenceL__Arg_currentSymbol == _SequenceL_SPACE_CHAR_0) && _SequenceL_tmp1757))	/*TuringMachineInterpreter.sl:216: true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:212: true*/
}
else
{
SequenceL__parallel_HeadOfEach_0(_SequenceL__Arg_symbols, _SequenceL_tmp1761);	/*TuringMachineInterpreter.sl:214: HeadOfEach(symbols)*/
_SequenceL_tmp1762.setSize(_SequenceL_tmp1761.size());	/*TuringMachineInterpreter.sl:214: currentSymbol = HeadOfEach(symbols)*/
if (((((SL_FLOAT)(_SequenceL_tmp1762.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt17_ SequenceL__sl_RunMachine_nt17__val(_SequenceL__Arg_currentSymbol, _SequenceL_tmp1761, 1, _SequenceL_tmp1762.size(), _SequenceL_tmp1762);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt17__val);
_SequenceL_tmp1761.delete_data(false);	
_SequenceL_tmp1761.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i1763=1,_stop_val__SequenceL__i1763=_SequenceL_tmp1762.size(); _SequenceL__i1763<=_stop_val__SequenceL__i1763; _SequenceL__i1763+=1)
{
(*(_SequenceL_tmp1762.get_ptr(_SequenceL__i1763))) = (_SequenceL__Arg_currentSymbol == (*(_SequenceL_tmp1761.get_ptr(_SequenceL__i1763))));	/*TuringMachineInterpreter.sl:214: currentSymbol = HeadOfEach(symbols)*/
}
_SequenceL_tmp1761.delete_data(false);	
_SequenceL_tmp1761.finished();	
}
_SequenceL_tmp1764 = some(_SequenceL_tmp1762);	/*TuringMachineInterpreter.sl:215: some(currentSymbol = HeadOfEach(symbols))*/
_SequenceL_tmp1762.delete_data(false);	
_SequenceL_tmp1762.finished();	
if (_SequenceL_tmp1764)	/*TuringMachineInterpreter.sl:216: true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:214: true*/
}
else
{
_SequenceL__resultConv = false;	/*TuringMachineInterpreter.sl:216: false*/
}
}
}
}
}
void SequenceL__sl_RunMachine_nt15_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1810 = _r.begin(); _SequenceL__i1810 < _e; _SequenceL__i1810++)
{

_SequenceL__Arg_NewSymbol._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
_SequenceL__Arg_OldSymbol._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
(*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1810)))._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
SequenceL_ReplaceInMFunction_0(_SequenceL__Arg_NewSymbol, _SequenceL__Arg_OldSymbol, (*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1810))), (*(_SequenceL__result16.get_ptr(_SequenceL__i1810))));	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
}
}
void SequenceL__parallel_ReplaceInMFunction_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, _sl_MFUNCTION_0 &_SequenceL__resultConv)
{
_sl_MFUNCTION_0 _SequenceL__Arg_newMFunction(cspace);
Sequence< _sl_MFUNCTION_0 > _SequenceL__Arg_args(cspace);
bool _SequenceL_tmp1816;

if ((_SequenceL__Arg_MFunction.Arguments.size() > 0))	/*TuringMachineInterpreter.sl:275: (ID: MFunction.ID, Arguments: args) when size(MFunction.Arguments) > 0			else				NewSymbol when size(MFunction.Arguments) = 0 and equalList(MFunction.ID, OldSymbol.ID)			else				MFunction*/
{
_SequenceL__Arg_newMFunction.ID = _SequenceL__Arg_MFunction.ID;	/*TuringMachineInterpreter.sl:271: MFunction.ID*/
_SequenceL__Arg_args.setSize(_SequenceL__Arg_MFunction.Arguments.size());	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
SequenceL__sl_RunMachine_nt15_ SequenceL__sl_RunMachine_nt15__val(_SequenceL__Arg_NewSymbol, _SequenceL__Arg_OldSymbol, _SequenceL__Arg_MFunction, _SequenceL__Arg_args);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_args.size() + 1, SequenceL__sl_RunMachine_nt15__val);
_SequenceL__Arg_newMFunction.Arguments = _SequenceL__Arg_args;	/*TuringMachineInterpreter.sl:271: args*/
_SequenceL__Arg_args.delete_data(false);	
_SequenceL__Arg_args.finished();	
}
else
{
_SequenceL_tmp1816 = eq_list(_SequenceL__Arg_MFunction.ID, _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:274: equalList(MFunction.ID, OldSymbol.ID)*/
if (((_SequenceL__Arg_MFunction.Arguments.size() == 0) && _SequenceL_tmp1816))	/*TuringMachineInterpreter.sl:275: NewSymbol when size(MFunction.Arguments) = 0 and equalList(MFunction.ID, OldSymbol.ID)			else				MFunction*/
{
_SequenceL__Arg_newMFunction = _SequenceL__Arg_NewSymbol;	/*TuringMachineInterpreter.sl:273: NewSymbol*/
}
else
{
_SequenceL__Arg_newMFunction = _SequenceL__Arg_MFunction;	/*TuringMachineInterpreter.sl:275: MFunction*/
}
_SequenceL__Arg_args.delete_data(false);	
_SequenceL__Arg_args.finished();	
}
_SequenceL__resultConv = _SequenceL__Arg_newMFunction;	/*TuringMachineInterpreter.sl:277: newMFunction*/
_SequenceL__Arg_newMFunction._delete_data(false);	
_SequenceL__Arg_newMFunction._finished();	
}
void SequenceL__sl_RunMachine_nt13_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp1843;
Sequence< char > _SequenceL_tmp1841(cspace);
Sequence< char > _SequenceL_tmp1846(cspace);

if (((*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).size() <= 1))	/*TuringMachineInterpreter.sl:289: Operations[i] when size(Operations[i]) <= 1	else 		[head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
{
(*(_SequenceL__result14.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:285: Operations[i]*/
}
else
{
(*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).tail(_SequenceL_tmp1841);	/*TuringMachineInterpreter.sl:287: tail(Operations[i])*/
_SequenceL_tmp1843 = eq_list(_SequenceL_tmp1841, _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:288: equalList(tail(Operations[i]), OldSymbol.ID)*/
if (((_SequenceL__Arg_NewSymbol.Arguments.size() == 0) && _SequenceL_tmp1843))	/*TuringMachineInterpreter.sl:289: [head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
{
_SequenceL_tmp1846.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1846.get_ptr(1))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).head();	/*TuringMachineInterpreter.sl:287: head(Operations[i])*/
append(_SequenceL_tmp1846, _SequenceL__Arg_NewSymbol.ID, (*(_SequenceL__result14.get_ptr(_SequenceL__Index_i))));	/*TuringMachineInterpreter.sl:287: [head(Operations[i])] ++ NewSymbol.ID*/
}
else
{
(*(_SequenceL__result14.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:289: Operations[i]*/
}
}
}
}
void SequenceL__parallel_ReplaceInOperations_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, Sequence< Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_Operations.size());	/*TuringMachineInterpreter.sl:289: Operations[i] when size(Operations[i]) <= 1	else 		[head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
SequenceL__sl_RunMachine_nt13_ SequenceL__sl_RunMachine_nt13__val(_SequenceL__Arg_Operations, _SequenceL__Arg_OldSymbol, _SequenceL__Arg_NewSymbol, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_Operations.size() + 1, SequenceL__sl_RunMachine_nt13__val);
}
void SequenceL__parallel_ReplaceScanned_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, char _SequenceL__Arg_symbol, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
Sequence< Sequence< char > > _SequenceL__Arg_newOperations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_symbolArgument(cspace);
Sequence< char > _SequenceL_tmp1853(cspace);
_sl_MFUNCTION_0 _SequenceL_tmp1855(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_newFinalConfig(cspace);
_sl_MFUNCTION_0 _SequenceL_tmp1857(cspace);

_SequenceL__resultConv.Label.val_assign() = _SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:250: TargetMConfig.Label");	/*TuringMachineInterpreter.sl:250: TargetMConfig.Label*/
_SequenceL__resultConv.Symbols = _SequenceL__Arg_TargetMConfig.Symbols;	/*TuringMachineInterpreter.sl:250: TargetMConfig.Symbols*/
_SequenceL_tmp1853.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1853.get_ptr(1))) = _SequenceL__Arg_symbol;	/*TuringMachineInterpreter.sl:246: symbol*/
SequenceL__parallel_SINGLETON_FUNCTION_0(_SequenceL_tmp1853, _SequenceL__Arg_symbolArgument);	/*TuringMachineInterpreter.sl:246: SINGLETON_FUNCTION([symbol])*/
_SequenceL_tmp1853.delete_data(false);	
_SequenceL_tmp1853.finished();	
_SequenceL_tmp1855 = _SequenceL_SCANNED_FUNCTION_0;	/*TuringMachineInterpreter.sl:247: SCANNED_FUNCTION*/
SequenceL__parallel_ReplaceInOperations_0(_SequenceL__Arg_symbolArgument, _SequenceL_tmp1855, _SequenceL__Arg_TargetMConfig.Operations, _SequenceL__Arg_newOperations);	/*TuringMachineInterpreter.sl:247: ReplaceInOperations(symbolArgument, SCANNED_FUNCTION, TargetMConfig.Operations)*/
_SequenceL_tmp1855._delete_data(false);	
_SequenceL_tmp1855._finished();	
_SequenceL__resultConv.Operations = _SequenceL__Arg_newOperations;	/*TuringMachineInterpreter.sl:250: newOperations*/
_SequenceL__Arg_newOperations.delete_data(false);	
_SequenceL__Arg_newOperations.finished();	
_SequenceL_tmp1857 = _SequenceL_SCANNED_FUNCTION_0;	/*TuringMachineInterpreter.sl:248: SCANNED_FUNCTION*/
SequenceL__parallel_ReplaceInMFunction_0(_SequenceL__Arg_symbolArgument, _SequenceL_tmp1857, _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)"), _SequenceL__Arg_newFinalConfig);	/*TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)*/
_SequenceL__Arg_symbolArgument._delete_data(false);	
_SequenceL_tmp1857._delete_data(false);	
_SequenceL_tmp1857._finished();	
_SequenceL__Arg_symbolArgument._finished();	
_SequenceL__resultConv.FinalConfig.val_assign() = _SequenceL__Arg_newFinalConfig;	/*TuringMachineInterpreter.sl:250: newFinalConfig*/
_SequenceL__Arg_newFinalConfig._delete_data(false);	
_SequenceL__Arg_newFinalConfig._finished();	
}
void SequenceL__sl_RunMachine_nt11_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp1918;

_SequenceL_tmp1918 = eq_list((*(_SequenceL__Arg_Symbols.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:281: equalList(Symbols[i], OldSymbol.ID)*/
if ((_SequenceL_tmp1916 && _SequenceL_tmp1918))	/*TuringMachineInterpreter.sl:282: NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(Symbols[i], OldSymbol.ID)	else		Symbols[i]*/
{
(*(_SequenceL__result12.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_NewSymbol.ID;	/*TuringMachineInterpreter.sl:280: NewSymbol.ID*/
}
else
{
(*(_SequenceL__result12.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Symbols.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:282: Symbols[i]*/
}
}
}
void SequenceL__parallel_ReplaceInSymbols_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Symbols, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1916;

_SequenceL__resultConv.setSize(_SequenceL__Arg_Symbols.size());	/*TuringMachineInterpreter.sl:282: NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(Symbols[i], OldSymbol.ID)	else		Symbols[i]*/
if ((_SequenceL__Arg_Symbols.size() >= 1))	
{
_SequenceL_tmp1916 = (_SequenceL__Arg_NewSymbol.Arguments.size() == 0);	/*TuringMachineInterpreter.sl:280: size(NewSymbol.Arguments) = 0*/
}
else
{
_SequenceL_tmp1916 = 0;	
}
SequenceL__sl_RunMachine_nt11_ SequenceL__sl_RunMachine_nt11__val(_SequenceL__Arg_Symbols, _SequenceL__Arg_OldSymbol, _SequenceL_tmp1916, _SequenceL__Arg_NewSymbol, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_Symbols.size() + 1, SequenceL__sl_RunMachine_nt11__val);
}
void SequenceL__parallel_ReplaceWorker_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, int _SequenceL__Arg_Argument, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
_sl_MCONFIG_0 _SequenceL__Arg_newTargetConfig(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_newSymbols(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_newOperations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_newFinalConfig(cspace);
int _SequenceL_tmp1942;

if ((_SequenceL__Arg_Argument > _SequenceL__Arg_CurrentMFunction.Arguments.size()))	/*TuringMachineInterpreter.sl:265: (Label: CurrentMFunction, Symbols: TargetMConfig.Symbols, Operations: TargetMConfig.Operations, FinalConfig: TargetMConfig.FinalConfig)				when Argument > size(CurrentMFunction.Arguments)		else			ReplaceWorker(newTargetConfig, CurrentMFunction, Argument + 1)*/
{
_SequenceL__resultConv.Label.val_assign() = _SequenceL__Arg_CurrentMFunction;	/*TuringMachineInterpreter.sl:262: CurrentMFunction*/
_SequenceL__resultConv.Symbols = _SequenceL__Arg_TargetMConfig.Symbols;	/*TuringMachineInterpreter.sl:262: TargetMConfig.Symbols*/
_SequenceL__resultConv.Operations = _SequenceL__Arg_TargetMConfig.Operations;	/*TuringMachineInterpreter.sl:262: TargetMConfig.Operations*/
_SequenceL__resultConv.FinalConfig.val_assign() = _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:262: TargetMConfig.FinalConfig");	/*TuringMachineInterpreter.sl:262: TargetMConfig.FinalConfig*/
}
else
{
_SequenceL__Arg_newTargetConfig.Label.val_assign() = _SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:260: TargetMConfig.Label");	/*TuringMachineInterpreter.sl:260: TargetMConfig.Label*/
SequenceL__parallel_ReplaceInSymbols_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:257: ReplaceInSymbols(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Symbols)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.Symbols, _SequenceL__Arg_newSymbols);	/*TuringMachineInterpreter.sl:257: ReplaceInSymbols(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Symbols)*/
_SequenceL__Arg_newTargetConfig.Symbols = _SequenceL__Arg_newSymbols;	/*TuringMachineInterpreter.sl:260: newSymbols*/
_SequenceL__Arg_newSymbols.delete_data(false);	
_SequenceL__Arg_newSymbols.finished();	
SequenceL__parallel_ReplaceInOperations_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:258: ReplaceInOperations(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Operations)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.Operations, _SequenceL__Arg_newOperations);	/*TuringMachineInterpreter.sl:258: ReplaceInOperations(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Operations)*/
_SequenceL__Arg_newTargetConfig.Operations = _SequenceL__Arg_newOperations;	/*TuringMachineInterpreter.sl:260: newOperations*/
_SequenceL__Arg_newOperations.delete_data(false);	
_SequenceL__Arg_newOperations.finished();	
SequenceL__parallel_ReplaceInMFunction_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)"), _SequenceL__Arg_newFinalConfig);	/*TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)*/
_SequenceL__Arg_newTargetConfig.FinalConfig.val_assign() = _SequenceL__Arg_newFinalConfig;	/*TuringMachineInterpreter.sl:260: newFinalConfig*/
_SequenceL__Arg_newFinalConfig._delete_data(false);	
_SequenceL__Arg_newFinalConfig._finished();	
_SequenceL_tmp1942 = (_SequenceL__Arg_Argument + 1);	/*TuringMachineInterpreter.sl:265: Argument + 1*/
SequenceL__parallel_ReplaceWorker_0(_SequenceL__Arg_newTargetConfig, _SequenceL__Arg_CurrentMFunction, _SequenceL_tmp1942, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:265: ReplaceWorker(newTargetConfig, CurrentMFunction, Argument + 1)*/
_SequenceL__Arg_newTargetConfig._delete_data(false);	
_SequenceL__Arg_newTargetConfig._finished();	
}
}
void SequenceL__parallel_Replace_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, _sl_MCONFIG_0 &_SequenceL__resultConv)
{

SequenceL__parallel_ReplaceWorker_0(_SequenceL__Arg_TargetMConfig, _SequenceL__Arg_CurrentMFunction, 1, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:253: ReplaceWorker(TargetMConfig, CurrentMFunction, 1)*/
}
void SequenceL__sl_RunMachine_nt9_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp1946;
bool _SequenceL_tmp1954;
_sl_MCONFIG_0 _SequenceL__Arg_replaced(cspace);
_sl_MCONFIG_0 _SequenceL_tmp1952(cspace);

_SequenceL_tmp1946 = eq_list((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))).Label.val("TuringMachineInterpreter.sl:228: equalList(mConfigs[i].Label.ID, mfunction.ID)").ID, _SequenceL__Arg_mfunction.ID);	/*TuringMachineInterpreter.sl:228: equalList(mConfigs[i].Label.ID, mfunction.ID)*/
if ((_SequenceL_tmp1946 && ((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))).Label.val("TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)").Arguments.size() == _SequenceL__Arg_mfunction.Arguments.size())))	/*TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)*/
{
SequenceL_Replace_0((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_mfunction, _SequenceL_tmp1952);	/*TuringMachineInterpreter.sl:225: Replace(mConfigs[i], mfunction)*/
SequenceL_ReplaceScanned_0(_SequenceL_tmp1952, _SequenceL__Arg_symbol, _SequenceL__Arg_replaced);	/*TuringMachineInterpreter.sl:225: ReplaceScanned(Replace(mConfigs[i], mfunction), symbol)*/
SequenceL_Matches_0(_SequenceL__Arg_symbol, _SequenceL__Arg_replaced.Symbols, _SequenceL_tmp1954);	/*TuringMachineInterpreter.sl:227: Matches(symbol, replaced.Symbols)*/
if (_SequenceL_tmp1954)	/*TuringMachineInterpreter.sl:227: replaced when Matches(symbol, replaced.Symbols)*/
{
(*(_SequenceL__result10.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_replaced;	/*TuringMachineInterpreter.sl:227: replaced*/
_SequenceL__result10.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__result10.setExistence(_SequenceL__Index_i, false);	
}
}
else
{
_SequenceL__result10.setExistence(_SequenceL__Index_i, false);	
}
}
}
void SequenceL__parallel_GetConfigHelper_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_mConfigs.size());	/*TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)*/
_SequenceL__resultConv.create_map();	
SequenceL__sl_RunMachine_nt9_ SequenceL__sl_RunMachine_nt9__val(_SequenceL__Arg_mConfigs, _SequenceL__Arg_mfunction, _SequenceL__Arg_symbol, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_mConfigs.size() + 1, SequenceL__sl_RunMachine_nt9__val);
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_GetConfig_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
Sequence< _sl_MCONFIG_0 > _SequenceL__Arg_searchResults(cspace);

if ((_SequenceL__Arg_mfunction.ID.size() == 0))	/*TuringMachineInterpreter.sl:238: NULL_CONFIG when size(mfunction.ID) = 0		else			NULL_CONFIG when size(searchResults) = 0		else			searchResults[1]*/
{
_SequenceL__resultConv = _SequenceL_NULL_CONFIG_0;	/*TuringMachineInterpreter.sl:234: NULL_CONFIG*/
}
else
{
SequenceL__parallel_GetConfigHelper_0(_SequenceL__Arg_mfunction, _SequenceL__Arg_symbol, _SequenceL__Arg_mConfigs, _SequenceL__Arg_searchResults);	/*TuringMachineInterpreter.sl:232: GetConfigHelper(mfunction, symbol, mConfigs)*/
if ((_SequenceL__Arg_searchResults.size() == 0))	/*TuringMachineInterpreter.sl:238: NULL_CONFIG when size(searchResults) = 0		else			searchResults[1]*/
{
_SequenceL__resultConv = _SequenceL_NULL_CONFIG_0;	/*TuringMachineInterpreter.sl:236: NULL_CONFIG*/
_SequenceL__Arg_searchResults.delete_data(false);	
_SequenceL__Arg_searchResults.finished();	
}
else
{
_SequenceL__resultConv = (*(_SequenceL__Arg_searchResults.get_ptr(1)));	/*TuringMachineInterpreter.sl:238: searchResults[1]*/
_SequenceL__Arg_searchResults.delete_data(false);	
_SequenceL__Arg_searchResults.finished();	
}
}
}
void SequenceL__parallel_GetCurrentSymbol_0(_sl_STATE_0 &_SequenceL__Arg_State, char &_SequenceL__resultConv)
{

if (((_SequenceL__Arg_State.Tape.size() >= _SequenceL__Arg_State.CurrentPosition) && (_SequenceL__Arg_State.CurrentPosition > 0)))	/*TuringMachineInterpreter.sl:221: State.Tape[State.CurrentPosition] when size(State.Tape) >= State.CurrentPosition and State.CurrentPosition > 0	else 		SPACE_CHAR*/
{
_SequenceL__resultConv = (*(_SequenceL__Arg_State.Tape.get_ptr(_SequenceL__Arg_State.CurrentPosition)));	/*TuringMachineInterpreter.sl:219: State.Tape[State.CurrentPosition]*/
}
else
{
_SequenceL__resultConv = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:221: SPACE_CHAR*/
}
}
void SequenceL__parallel_Iterate_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_newState(cspace);
_sl_MCONFIG_0 _SequenceL__Arg_currentConfig(cspace);
char _SequenceL_tmp1993;

SequenceL__parallel_GetCurrentSymbol_0(_SequenceL__Arg_State, _SequenceL_tmp1993);	/*TuringMachineInterpreter.sl:437: GetCurrentSymbol(State)*/
SequenceL__parallel_GetConfig_0(_SequenceL__Arg_State.CurrentConfig.val("TuringMachineInterpreter.sl:437: GetConfig(State.CurrentConfig, GetCurrentSymbol(State), mConfigs)"), _SequenceL_tmp1993, _SequenceL__Arg_mConfigs, _SequenceL__Arg_currentConfig);	/*TuringMachineInterpreter.sl:437: GetConfig(State.CurrentConfig, GetCurrentSymbol(State), mConfigs)*/
SequenceL__parallel_Execute_0(_SequenceL__Arg_State, _SequenceL__Arg_currentConfig, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:438: Execute(State, currentConfig)*/
_SequenceL__Arg_currentConfig._delete_data(false);	
_SequenceL__Arg_currentConfig._finished();	
_SequenceL__resultConv = _SequenceL__Arg_newState;	/*TuringMachineInterpreter.sl:440: newState*/
_SequenceL__Arg_newState._delete_data(false);	
_SequenceL__Arg_newState._finished();	
}
void SequenceL__parallel_boolToString_2(bool _SequenceL__Arg_bool, Sequence< char > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_bool)	/*Conversion.sl:208: "true" when bool else "false"*/
{
_SequenceL__resultConv = "true";	/*Conversion.sl:208: "true"*/
}
else
{
_SequenceL__resultConv = "false";	/*Conversion.sl:208: "false"*/
}
}
void SequenceL__parallel_DoesMachineHalt_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, bool &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_resultState(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp1(cspace);
Sequence< char > _SequenceL_tmp2021(cspace);

_SequenceL__Arg_InitialState._Reference();	/*TuringMachineInterpreter.sl:417: Process(InitialState, mConfigs, Iterations)*/
_SequenceL__Arg_mConfigs.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:417: Process(InitialState, mConfigs, Iterations)*/
SequenceL__parallel_Process_0(_SequenceL__Arg_InitialState, _SequenceL__delete_opttmp1, _SequenceL__Arg_Iterations, _SequenceL__Arg_resultState);	/*TuringMachineInterpreter.sl:417: Process(InitialState, mConfigs, Iterations)*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL_tmp2021 = "halt";	/*TuringMachineInterpreter.sl:419: "halt"*/
_SequenceL__resultConv = eq_list(_SequenceL__Arg_resultState.CurrentConfig.val("TuringMachineInterpreter.sl:419: equalList(resultState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2021);	/*TuringMachineInterpreter.sl:419: equalList(resultState.CurrentConfig.ID, "halt")*/
_SequenceL__Arg_resultState.CurrentConfig.val("").ID.delete_data(false);	
_SequenceL__Arg_resultState.CurrentConfig.val("").ID.finished();	
_SequenceL_tmp2021.delete_data(false);	
_SequenceL__Arg_resultState._delete_data(false);	
_SequenceL_tmp2021.finished();	
_SequenceL__Arg_resultState._finished();	
}
void SequenceL__parallel_TrimTapeEnd_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_tape_tco(cspace);
char _SequenceL_tmp2029;
Sequence< char > _SequenceL_tmp2035(cspace);

_SequenceL___Arg_tape_tco.hard_copy(_SequenceL__Arg_tape,__LINE__);	
_SequenceL__Arg_tape.delete_data(false);	
_parallel_TrimTapeEnd_TuringMachineInterpreter_label_tco:	
if ((_SequenceL__Arg_position == _SequenceL___Arg_tape_tco.size()))	/*TuringMachineInterpreter.sl:301: tape when position = size(tape)	else		tape when not(last(tape) = SPACE_CHAR)	else		TrimTapeEnd(allButLast(tape), position)*/
{
_SequenceL__resultConv = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:297: tape*/
}
else
{
SequenceL__parallel_last_1(_SequenceL___Arg_tape_tco, _SequenceL_tmp2029);	/*TuringMachineInterpreter.sl:299: last(tape)*/
if (!(_SequenceL_tmp2029 == _SequenceL_SPACE_CHAR_0))	/*TuringMachineInterpreter.sl:301: tape when not(last(tape) = SPACE_CHAR)	else		TrimTapeEnd(allButLast(tape), position)*/
{
_SequenceL__resultConv = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:299: tape*/
}
else
{
SequenceL__parallel_allButLast_1(_SequenceL___Arg_tape_tco, _SequenceL_tmp2035);	/*TuringMachineInterpreter.sl:301: allButLast(tape)*/
_swap(_SequenceL___Arg_tape_tco, _SequenceL_tmp2035);	
goto _parallel_TrimTapeEnd_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:301: TrimTapeEnd(allButLast(tape), position)*/
}
}
_SequenceL_tmp2035.delete_data(false);	
_SequenceL_tmp2035.finished();	
}
void SequenceL__sl_RunMachine_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (((_SequenceL__no_share_iter % 2) == 1))	/*TuringMachineInterpreter.sl:68: Tape[i] when (i mod 2) = 1*/
{
(*(_SequenceL__result8.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_Tape.get_ptr(_SequenceL__no_share_iter)));	/*TuringMachineInterpreter.sl:68: Tape[i]*/
_SequenceL__result8.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result8.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_GetFSquares_0(Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_Tape.size());	/*TuringMachineInterpreter.sl:68: Tape[i] when (i mod 2) = 1*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_Tape.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_RunMachine_nt7_ SequenceL__sl_RunMachine_nt7__val(_SequenceL__Arg_Tape, 1, _SequenceL__Arg_Tape.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_RunMachine_nt7__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_Tape.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i % 2) == 1))	/*TuringMachineInterpreter.sl:68: Tape[i] when (i mod 2) = 1*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Tape.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:68: Tape[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_StateToArrowString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp2092(cspace);
Sequence< char > _SequenceL_tmp2089(cspace);
Sequence< char > _SequenceL_tmp2085(cspace);
Sequence< char > _SequenceL_tmp2083(cspace);
Sequence< char > _SequenceL_tmp2079(cspace);
Sequence< char > _SequenceL_tmp2078(cspace);
Sequence< char > _SequenceL_tmp2082(cspace);
int _SequenceL_tmp2081;
Sequence< char > _SequenceL_tmp2084(cspace);
Sequence< char > _SequenceL_tmp2088(cspace);
int _SequenceL_tmp2087;
Sequence< char > _SequenceL_tmp2091(cspace);
Sequence< char > _SequenceL_tmp2093(cspace);

_SequenceL_tmp2078 = "\n";	/*TuringMachineInterpreter.sl:57: "\n"*/
append(_SequenceL__Arg_state.Tape, _SequenceL_tmp2078, _SequenceL_tmp2079);	/*TuringMachineInterpreter.sl:57: state.Tape ++ "\n"*/
_SequenceL_tmp2078.delete_data(false);	
_SequenceL_tmp2078.finished();	
_SequenceL_tmp2081 = (_SequenceL__Arg_state.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:58: state.CurrentPosition - 1*/
SequenceL__parallel_duplicate_1(' ', _SequenceL_tmp2081, _SequenceL_tmp2082);	/*TuringMachineInterpreter.sl:58: duplicate(' ', state.CurrentPosition - 1)*/
append(_SequenceL_tmp2079, _SequenceL_tmp2082, _SequenceL_tmp2083);	/*TuringMachineInterpreter.sl:58: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1)*/
_SequenceL_tmp2079.delete_data(false);	
_SequenceL_tmp2082.delete_data(false);	
_SequenceL_tmp2082.finished();	
_SequenceL_tmp2079.finished();	
_SequenceL_tmp2084 = "|\n";	/*TuringMachineInterpreter.sl:58: "|\n"*/
append(_SequenceL_tmp2083, _SequenceL_tmp2084, _SequenceL_tmp2085);	/*TuringMachineInterpreter.sl:58: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n"*/
_SequenceL_tmp2083.delete_data(false);	
_SequenceL_tmp2084.delete_data(false);	
_SequenceL_tmp2084.finished();	
_SequenceL_tmp2083.finished();	
_SequenceL_tmp2087 = (_SequenceL__Arg_state.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:59: state.CurrentPosition - 1*/
SequenceL__parallel_duplicate_1(' ', _SequenceL_tmp2087, _SequenceL_tmp2088);	/*TuringMachineInterpreter.sl:59: duplicate(' ', state.CurrentPosition - 1)*/
append(_SequenceL_tmp2085, _SequenceL_tmp2088, _SequenceL_tmp2089);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1)*/
_SequenceL_tmp2085.delete_data(false);	
_SequenceL_tmp2088.delete_data(false);	
_SequenceL_tmp2088.finished();	
_SequenceL_tmp2085.finished();	
_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)")._Reference();	/*TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0(_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)"), _SequenceL_tmp2091));
append(_SequenceL_tmp2089, _SequenceL_tmp2091, _SequenceL_tmp2092);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ MFunctionToString(state.CurrentConfig)*/
_SequenceL_tmp2089.delete_data(false);	
_SequenceL_tmp2091.delete_data(false);	
_SequenceL_tmp2091.finished();	
_SequenceL_tmp2089.finished();	
_SequenceL_tmp2093 = "\n";	/*TuringMachineInterpreter.sl:59: "\n"*/
append(_SequenceL_tmp2092, _SequenceL_tmp2093, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ MFunctionToString(state.CurrentConfig) ++ "\n"*/
_SequenceL_tmp2092.delete_data(false);	
_SequenceL_tmp2093.delete_data(false);	
_SequenceL_tmp2093.finished();	
_SequenceL_tmp2092.finished();	
}
void SequenceL__parallel_delimit_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_result(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2152(cspace);

SequenceL__parallel_delimitWorker_1(_SequenceL__Arg_strings, _SequenceL__Arg_delimiter, _SequenceL_tmp2152);	/*Sequence.sl:59: delimitWorker(strings, delimiter)*/
_SequenceL_parallel_appends(_SequenceL_tmp2152, __LINE__, _SequenceL__Arg_result);	/*Sequence.sl:59: join(delimitWorker(strings, delimiter))*/
_SequenceL_tmp2152.delete_data(false);	
_SequenceL_tmp2152.finished();	
SequenceL__parallel_allButLast_1(_SequenceL__Arg_result, _SequenceL__resultConv);	/*Sequence.sl:61: allButLast(result)*/
_SequenceL__Arg_result.delete_data(false);	
_SequenceL__Arg_result.finished();	
}
void SequenceL__parallel_StateToString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp2161(cspace);
Sequence< char > _SequenceL_tmp2159(cspace);
Sequence< char > _SequenceL_tmp2156(cspace);
Sequence< char > _SequenceL_tmp2154(cspace);
Sequence< char > _SequenceL_tmp2155(cspace);
Sequence< char > _SequenceL_tmp2158(cspace);
Sequence< char > _SequenceL_tmp2160(cspace);

_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)")._Reference();	/*TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_MFunctionToStringMFUNCTION_0(_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)"), _SequenceL_tmp2154));
_SequenceL_tmp2155 = "  \t\t| ";	/*TuringMachineInterpreter.sl:53: "  \t\t| "*/
append(_SequenceL_tmp2154, _SequenceL_tmp2155, _SequenceL_tmp2156);	/*TuringMachineInterpreter.sl:53: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| "*/
_SequenceL_tmp2154.delete_data(false);	
_SequenceL_tmp2155.delete_data(false);	
_SequenceL_tmp2155.finished();	
_SequenceL_tmp2154.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_RunMachine_intToString_i_2(_SequenceL__Arg_state.CurrentPosition, _SequenceL_tmp2158));
_SequenceL_tmp2158.parallel_deFrag(__LINE__);	
append(_SequenceL_tmp2156, _SequenceL_tmp2158, _SequenceL_tmp2159);	/*TuringMachineInterpreter.sl:53: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition)*/
_SequenceL_tmp2156.delete_data(false);	
_SequenceL_tmp2158.delete_data(false);	
_SequenceL_tmp2158.finished();	
_SequenceL_tmp2156.finished();	
_SequenceL_tmp2160 = "  \t| ";	/*TuringMachineInterpreter.sl:54: "  \t| "*/
append(_SequenceL_tmp2159, _SequenceL_tmp2160, _SequenceL_tmp2161);	/*TuringMachineInterpreter.sl:54: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition) ++ 	"  \t| "*/
_SequenceL_tmp2159.delete_data(false);	
_SequenceL_tmp2160.delete_data(false);	
_SequenceL_tmp2160.finished();	
_SequenceL_tmp2159.finished();	
append(_SequenceL_tmp2161, _SequenceL__Arg_state.Tape, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:54: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition) ++ 	"  \t| " ++ state.Tape*/
_SequenceL_tmp2161.delete_data(false);	
_SequenceL_tmp2161.finished();	
}
void SequenceL__parallel_Process_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL___Arg_InitialState_tco(cspace);
int _SequenceL___Arg_Iterations_tco;
Sequence< char > _SequenceL_tmp2194(cspace);
bool _SequenceL_tmp2195;
_sl_STATE_0 _SequenceL_tmp2199(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp2200;
_sl_STATE_0 _SequenceL__tmp__Arg_InitialState_tco(cspace);

_SequenceL___Arg_InitialState_tco._hard_copy(_SequenceL__Arg_InitialState,__LINE__);	
_SequenceL__Arg_InitialState._delete_data(false);	
_SequenceL___Arg_Iterations_tco = _SequenceL__Arg_Iterations;	
_SequenceL_tmp2194 = "halt";	/*TuringMachineInterpreter.sl:431: "halt"*/
_parallel_Process_TuringMachineInterpreter_label_tco:	
_SequenceL_tmp2195 = eq_list(_SequenceL___Arg_InitialState_tco.CurrentConfig.val("TuringMachineInterpreter.sl:432: equalList(InitialState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2194);	/*TuringMachineInterpreter.sl:432: equalList(InitialState.CurrentConfig.ID, "halt")*/
if ((((_SequenceL___Arg_Iterations_tco == 0) || (_SequenceL___Arg_InitialState_tco.CurrentConfig.val("TuringMachineInterpreter.sl:433: InitialState when Iterations = 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, \"halt\")	else		Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)").ID.size() == 0)) || _SequenceL_tmp2195))	/*TuringMachineInterpreter.sl:433: InitialState when Iterations = 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, "halt")	else		Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_InitialState_tco;	/*TuringMachineInterpreter.sl:429: InitialState*/
}
else
{
_SequenceL___Arg_InitialState_tco._Reference();	/*TuringMachineInterpreter.sl:433: Iterate(InitialState, mConfigs)*/
_SequenceL__Arg_mConfigs.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:433: Iterate(InitialState, mConfigs)*/
SequenceL__parallel_Iterate_0(_SequenceL___Arg_InitialState_tco, _SequenceL__delete_opttmp1, _SequenceL_tmp2199);	/*TuringMachineInterpreter.sl:433: Iterate(InitialState, mConfigs)*/
_SequenceL___Arg_InitialState_tco._dereference();	
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_tmp2200 = (_SequenceL___Arg_Iterations_tco - 1);	/*TuringMachineInterpreter.sl:433: Iterations - 1*/
_SequenceL__tmp__Arg_InitialState_tco = _SequenceL_tmp2199;	
_SequenceL___Arg_InitialState_tco = _SequenceL__tmp__Arg_InitialState_tco;	
_SequenceL___Arg_Iterations_tco = _SequenceL_tmp2200;	
goto _parallel_Process_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:433: Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
}
_SequenceL_tmp2199._delete_data(false);	
_SequenceL__tmp__Arg_InitialState_tco._delete_data(false);	
_SequenceL___Arg_InitialState_tco._delete_data(false);	
_SequenceL___Arg_InitialState_tco._finished();	
_SequenceL__tmp__Arg_InitialState_tco._finished();	
_SequenceL_tmp2199._finished();	
_SequenceL__Arg_mConfigs.delete_data(false);	
}
void SequenceL__parallel_last_1(Sequence< _sl_STATE_0 > &_SequenceL__Arg_list, _sl_STATE_0 &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:153: list[size(list)]*/
}
void SequenceL__parallel_ProcessWithTrace_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, Sequence< _sl_STATE_0 > &_SequenceL__resultConv)
{
bool _SequenceL_tmp2213;
Sequence< char > _SequenceL_tmp2212(cspace);
Sequence< _sl_STATE_0 > _SequenceL_tmp2218(cspace);
Sequence< _sl_STATE_0 > _SequenceL_tmp2222(cspace);
_sl_STATE_0 _SequenceL_tmp2220(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp2221;

_SequenceL_tmp2212 = "halt";	/*TuringMachineInterpreter.sl:424: "halt"*/
_SequenceL_tmp2213 = eq_list(_SequenceL__Arg_InitialState.CurrentConfig.val("TuringMachineInterpreter.sl:425: equalList(InitialState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2212);	/*TuringMachineInterpreter.sl:425: equalList(InitialState.CurrentConfig.ID, "halt")*/
_SequenceL_tmp2212.delete_data(false);	
_SequenceL_tmp2212.finished();	
if ((((_SequenceL__Arg_Iterations <= 0) || (_SequenceL__Arg_InitialState.CurrentConfig.val("TuringMachineInterpreter.sl:426: [InitialState] when Iterations <= 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, \"halt\")	else		[InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)").ID.size() == 0)) || _SequenceL_tmp2213))	/*TuringMachineInterpreter.sl:426: [InitialState] when Iterations <= 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, "halt")	else		[InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_InitialState;	/*TuringMachineInterpreter.sl:422: InitialState*/
_SequenceL__Arg_InitialState._delete_data(false);	
_SequenceL__Arg_mConfigs.delete_data(false);	
}
else
{
_SequenceL_tmp2218.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp2218.get_ptr(1))) = _SequenceL__Arg_InitialState;	/*TuringMachineInterpreter.sl:426: InitialState*/
_SequenceL__Arg_mConfigs.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:426: Iterate(InitialState, mConfigs)*/
SequenceL__parallel_Iterate_0(_SequenceL__Arg_InitialState, _SequenceL__delete_opttmp1, _SequenceL_tmp2220);	/*TuringMachineInterpreter.sl:426: Iterate(InitialState, mConfigs)*/
_SequenceL__Arg_InitialState._delete_data(false);	
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_tmp2221 = (_SequenceL__Arg_Iterations - 1);	/*TuringMachineInterpreter.sl:426: Iterations - 1*/
SequenceL__parallel_ProcessWithTrace_0(_SequenceL_tmp2220, _SequenceL__Arg_mConfigs, _SequenceL_tmp2221, _SequenceL_tmp2222);	/*TuringMachineInterpreter.sl:426: ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
_SequenceL_tmp2220._finished();	
_appendF(_SequenceL_tmp2218, _SequenceL_tmp2222, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:426: [InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
_SequenceL_tmp2218.delete_data(false);	
_SequenceL_tmp2222.delete_data(false);	
_SequenceL_tmp2222.finished();	
_SequenceL_tmp2218.finished();	
}
}
void SequenceL__sl_RunMachine_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i2226 = _r.begin(); _SequenceL__i2226 < _e; _SequenceL__i2226++)
{

SequenceL_ParseConfig_0((*(_SequenceL_tmp2225.get_ptr(_SequenceL__i2226))), _SequenceL__i2226, _SequenceL__result6);	/*TuringMachineInterpreter.sl:198: ParseConfig(lines[5 ... size(lines)])*/
}
}
void SequenceL__parallel_ParseTextFile_0(Sequence< char > &_SequenceL__Arg_Text, _sl_INPUT_DATA_0 &_SequenceL__resultConv)
{
int _SequenceL__Arg_iterations;
Sequence< char > _SequenceL__delete_opttmp1(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_lines(cspace);
Sequence< char > _SequenceL__Arg_noSpaces(cspace);
Sequence< char > _SequenceL_tmp2224(cspace);
Sequence< char > _SequenceL_tmp2223(cspace);
Sequence< char > _SequenceL__Arg_initialTape(cspace);
int _SequenceL__Arg_initialPosition;
Sequence< char > _SequenceL__delete_opttmp2(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_initialConfig(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2225(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__Arg_mConfigs(cspace);

SequenceL__parallel_RemoveCharacter_0(' ', _SequenceL__Arg_Text, _SequenceL_tmp2223);	/*TuringMachineInterpreter.sl:192: RemoveCharacter(' ', Text)*/
SequenceL__parallel_RemoveCharacter_0('\r', _SequenceL_tmp2223, _SequenceL_tmp2224);	/*TuringMachineInterpreter.sl:192: RemoveCharacter('\r', RemoveCharacter(' ', Text))*/
_SequenceL_tmp2223.delete_data(false);	
_SequenceL_tmp2223.finished();	
SequenceL__parallel_RemoveCharacter_0('\t', _SequenceL_tmp2224, _SequenceL__Arg_noSpaces);	/*TuringMachineInterpreter.sl:192: RemoveCharacter('\t', RemoveCharacter('\r', RemoveCharacter(' ', Text)))*/
_SequenceL_tmp2224.delete_data(false);	
_SequenceL_tmp2224.finished();	
SequenceL__parallel_split_1(_SequenceL__Arg_noSpaces, '\n', _SequenceL__Arg_lines);	/*TuringMachineInterpreter.sl:193: split(noSpaces, '\n')*/
_SequenceL__Arg_noSpaces.delete_data(false);	
_SequenceL__Arg_noSpaces.finished();	
(*(_SequenceL__Arg_lines.get_ptr(1))).clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:194: stringToInt(lines[1])*/
SequenceL__parallel_stringToInt_2(_SequenceL__delete_opttmp1, _SequenceL__Arg_iterations);	/*TuringMachineInterpreter.sl:194: stringToInt(lines[1])*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL__resultConv.Iterations = _SequenceL__Arg_iterations;	/*TuringMachineInterpreter.sl:200: iterations*/
_SequenceL__Arg_initialTape = (*(_SequenceL__Arg_lines.get_ptr(2)));	/*TuringMachineInterpreter.sl:195: lines[2]*/
_SequenceL__resultConv.InitialTape = _SequenceL__Arg_initialTape;	/*TuringMachineInterpreter.sl:200: initialTape*/
_SequenceL__Arg_initialTape.delete_data(false);	
_SequenceL__Arg_initialTape.finished();	
(*(_SequenceL__Arg_lines.get_ptr(3))).clone(_SequenceL__delete_opttmp2);	/*TuringMachineInterpreter.sl:196: stringToInt(lines[3])*/
SequenceL__parallel_stringToInt_2(_SequenceL__delete_opttmp2, _SequenceL__Arg_initialPosition);	/*TuringMachineInterpreter.sl:196: stringToInt(lines[3])*/
_SequenceL__delete_opttmp2.finished();	
_SequenceL__resultConv.StartingPosition = _SequenceL__Arg_initialPosition;	/*TuringMachineInterpreter.sl:201: initialPosition*/
SequenceL__parallel_SINGLETON_FUNCTION_0((*(_SequenceL__Arg_lines.get_ptr(4))), _SequenceL__Arg_initialConfig);	/*TuringMachineInterpreter.sl:197: SINGLETON_FUNCTION(lines[4])*/
_SequenceL__resultConv.InitialConfig.val_assign() = _SequenceL__Arg_initialConfig;	/*TuringMachineInterpreter.sl:201: initialConfig*/
_SequenceL__Arg_initialConfig._delete_data(false);	
_SequenceL__Arg_initialConfig._finished();	
_SequenceL__Arg_lines.sub_seq(5, _SequenceL__Arg_lines.size(), _SequenceL_tmp2225);	/*TuringMachineInterpreter.sl:198: lines[5 ... size(lines)]*/
_SequenceL__Arg_lines.delete_data(false);	
_SequenceL__Arg_lines.finished();	
_SequenceL__Arg_mConfigs.setSize(_SequenceL_tmp2225.size());	/*TuringMachineInterpreter.sl:198: ParseConfig(lines[5 ... size(lines)])*/
_SequenceL__Arg_mConfigs.create_map();	
SequenceL__sl_RunMachine_nt5_ SequenceL__sl_RunMachine_nt5__val(_SequenceL_tmp2225, _SequenceL__Arg_mConfigs);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_mConfigs.size() + 1, SequenceL__sl_RunMachine_nt5__val);
_SequenceL_tmp2225.delete_data(false);	
_SequenceL_tmp2225.finished();	
_SequenceL__Arg_mConfigs.cleanup(false);	
_SequenceL__resultConv.MConfigs = _SequenceL__Arg_mConfigs;	/*TuringMachineInterpreter.sl:201: mConfigs*/
_SequenceL__Arg_mConfigs.delete_data(false);	
_SequenceL__Arg_mConfigs.finished();	
}
void SequenceL__sl_RunMachine_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i2272 = _r.begin(); _SequenceL__i2272 < _e; _SequenceL__i2272++)
{

SequenceL_StateToString_0((*(_SequenceL__Arg_processedWithTrace.get_ptr(_SequenceL__i2272))), (*(_SequenceL__result2.get_ptr(_SequenceL__i2272))));	/*TuringMachineInterpreter.sl:388: StateToString(processedWithTrace)*/
}
}
void SequenceL__sl_RunMachine_nt3_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i2290 = _r.begin(); _SequenceL__i2290 < _e; _SequenceL__i2290++)
{

SequenceL_StateToArrowString_0((*(_SequenceL__Arg_processedWithTrace.get_ptr(_SequenceL__i2290))), (*(_SequenceL__result4.get_ptr(_SequenceL__i2290))));	/*TuringMachineInterpreter.sl:390: StateToArrowString(processedWithTrace)*/
}
}
void SequenceL__parallel_RunMachine_0(Sequence< char > &_SequenceL__Arg_Text, Sequence< char > &_SequenceL__Arg_Flag, _sl_STATE_0 &_SequenceL__Arg_NewState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_InputMConfigs, int _SequenceL__Arg_Iterations, _sl_RETURNVALUE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_finalState(cspace);
bool _SequenceL_tmp2228;
Sequence< char > _SequenceL_tmp2227(cspace);
bool _SequenceL_tmp2230;
Sequence< char > _SequenceL_tmp2229(cspace);
Sequence< _sl_STATE_0 > _SequenceL__Arg_processedWithTrace(cspace);
_sl_STATE_0 _SequenceL__Arg_initialState(cspace);
_sl_INPUT_DATA_0 _SequenceL__Arg_input(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp1(cspace);
_sl_STATE_0 _SequenceL__Arg_processed(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp2(cspace);
Sequence< char > _SequenceL__Arg_outString(cspace);
bool _SequenceL_tmp2257;
Sequence< char > _SequenceL_tmp2256(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2273(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2259(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp3(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2271(cspace);
bool _SequenceL_tmp2276;
Sequence< char > _SequenceL_tmp2275(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp4(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2289(cspace);
bool _SequenceL_tmp2293;
Sequence< char > _SequenceL_tmp2292(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp5(cspace);
bool _SequenceL_tmp2308;
Sequence< char > _SequenceL_tmp2307(cspace);
Sequence< char > _SequenceL_tmp2322(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp6(cspace);
bool _SequenceL_tmp2325;
Sequence< char > _SequenceL_tmp2324(cspace);
bool _SequenceL__Arg_doesHalt;
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp7(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp8(cspace);
bool _SequenceL_tmp2351;
Sequence< char > _SequenceL_tmp2350(cspace);
bool _SequenceL_tmp2355;
Sequence< char > _SequenceL_tmp2354(cspace);

_SequenceL_tmp2227 = "trace";	/*TuringMachineInterpreter.sl:383: "trace"*/
_SequenceL_tmp2228 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2227);	/*TuringMachineInterpreter.sl:383: equalList(Flag, "trace")*/
_SequenceL_tmp2227.delete_data(false);	
_SequenceL_tmp2227.finished();	
_SequenceL_tmp2229 = "arrow-trace";	/*TuringMachineInterpreter.sl:383: "arrow-trace"*/
_SequenceL_tmp2230 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2229);	/*TuringMachineInterpreter.sl:384: equalList(Flag, "arrow-trace")*/
_SequenceL_tmp2229.delete_data(false);	
_SequenceL_tmp2229.finished();	
if ((_SequenceL_tmp2228 || _SequenceL_tmp2230))	/*TuringMachineInterpreter.sl:385: last(processedWithTrace) when equalList(Flag, "trace") or equalList(Flag, "arrow-trace")				else					processed*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_initialState._Reference();	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp1, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_processedWithTrace.parallel_deFrag(__LINE__);	
SequenceL__parallel_last_1(_SequenceL__Arg_processedWithTrace, _SequenceL__Arg_finalState);	/*TuringMachineInterpreter.sl:383: last(processedWithTrace)*/
}
else
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_initialState._Reference();	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp2);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_Process_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp2, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp2.finished();	
_SequenceL__Arg_finalState = _SequenceL__Arg_processed;	/*TuringMachineInterpreter.sl:385: processed*/
}
_SequenceL__resultConv.FinalState.val_assign() = _SequenceL__Arg_finalState;	/*TuringMachineInterpreter.sl:405: finalState*/
_SequenceL__Arg_finalState._delete_data(false);	
_SequenceL__Arg_finalState._finished();	
_SequenceL_tmp2256 = "trace";	/*TuringMachineInterpreter.sl:388: "trace"*/
_SequenceL_tmp2257 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2256);	/*TuringMachineInterpreter.sl:389: equalList(Flag, "trace")*/
_SequenceL_tmp2256.delete_data(false);	
_SequenceL_tmp2256.finished();	
if (_SequenceL_tmp2257)	/*TuringMachineInterpreter.sl:402: delimit(TRACE_HEADER ++ StateToString(processedWithTrace), '\n') when equalList(Flag, "trace")				else					delimit(StateToArrowString(processedWithTrace), '\n') when equalList(Flag, "arrow-trace")				else					processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
_SequenceL_tmp2259 = _SequenceL_TRACE_HEADER_0;	/*TuringMachineInterpreter.sl:388: TRACE_HEADER*/
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp3);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp3, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp3.finished();	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_processedWithTrace.parallel_deFrag(__LINE__);	
_SequenceL_tmp2271.setSize(_SequenceL__Arg_processedWithTrace.size());	/*TuringMachineInterpreter.sl:388: StateToString(processedWithTrace)*/
SequenceL__sl_RunMachine_nt1_ SequenceL__sl_RunMachine_nt1__val(_SequenceL__Arg_processedWithTrace, _SequenceL_tmp2271);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp2271.size() + 1, SequenceL__sl_RunMachine_nt1__val);
_SequenceL__Arg_processedWithTrace.delete_data(false);	
_SequenceL__Arg_processedWithTrace.finished();	
append(_SequenceL_tmp2259, _SequenceL_tmp2271, _SequenceL_tmp2273);	/*TuringMachineInterpreter.sl:388: TRACE_HEADER ++ StateToString(processedWithTrace)*/
_SequenceL_tmp2259.delete_data(false);	
_SequenceL_tmp2271.delete_data(false);	
_SequenceL_tmp2271.finished();	
_SequenceL_tmp2259.finished();	
SequenceL__parallel_delimit_1(_SequenceL_tmp2273, '\n', _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:388: delimit(TRACE_HEADER ++ StateToString(processedWithTrace), '\n')*/
_SequenceL_tmp2273.delete_data(false);	
_SequenceL_tmp2273.finished();	
_SequenceL_tmp2289.delete_data(false);	
_SequenceL_tmp2289.finished();	
}
else
{
_SequenceL_tmp2275 = "arrow-trace";	/*TuringMachineInterpreter.sl:390: "arrow-trace"*/
_SequenceL_tmp2276 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2275);	/*TuringMachineInterpreter.sl:391: equalList(Flag, "arrow-trace")*/
_SequenceL_tmp2275.delete_data(false);	
_SequenceL_tmp2275.finished();	
if (_SequenceL_tmp2276)	/*TuringMachineInterpreter.sl:402: delimit(StateToArrowString(processedWithTrace), '\n') when equalList(Flag, "arrow-trace")				else					processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp4);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp4, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp4.finished();	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_processedWithTrace.parallel_deFrag(__LINE__);	
_SequenceL_tmp2289.setSize(_SequenceL__Arg_processedWithTrace.size());	/*TuringMachineInterpreter.sl:390: StateToArrowString(processedWithTrace)*/
SequenceL__sl_RunMachine_nt3_ SequenceL__sl_RunMachine_nt3__val(_SequenceL__Arg_processedWithTrace, _SequenceL_tmp2289);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp2289.size() + 1, SequenceL__sl_RunMachine_nt3__val);
_SequenceL__Arg_processedWithTrace.delete_data(false);	
_SequenceL__Arg_processedWithTrace.finished();	
SequenceL__parallel_delimit_1(_SequenceL_tmp2289, '\n', _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:390: delimit(StateToArrowString(processedWithTrace), '\n')*/
_SequenceL_tmp2289.delete_data(false);	
_SequenceL_tmp2289.finished();	
}
else
{
_SequenceL_tmp2292 = "tape";	/*TuringMachineInterpreter.sl:392: "tape"*/
_SequenceL_tmp2293 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2292);	/*TuringMachineInterpreter.sl:393: equalList(Flag, "tape")*/
_SequenceL_tmp2292.delete_data(false);	
_SequenceL_tmp2292.finished();	
if (_SequenceL_tmp2293)	/*TuringMachineInterpreter.sl:402: processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp5);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_Process_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp5, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp5.finished();	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_outString = _SequenceL__Arg_processed.Tape;	/*TuringMachineInterpreter.sl:392: processed.Tape*/
_SequenceL__Arg_processed._delete_data(false);	
_SequenceL__Arg_processed._finished();	
}
else
{
_SequenceL_tmp2307 = "f-squares";	/*TuringMachineInterpreter.sl:394: "f-squares"*/
_SequenceL_tmp2308 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2307);	/*TuringMachineInterpreter.sl:395: equalList(Flag, "f-squares")*/
_SequenceL_tmp2307.delete_data(false);	
_SequenceL_tmp2307.finished();	
if (_SequenceL_tmp2308)	/*TuringMachineInterpreter.sl:402: TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp6);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_Process_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp6, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp6.finished();	
_SequenceL__Arg_initialState._finished();	
SequenceL__parallel_GetFSquares_0(_SequenceL__Arg_processed.Tape, _SequenceL_tmp2322);	/*TuringMachineInterpreter.sl:394: GetFSquares(processed.Tape)*/
_SequenceL__Arg_processed.Tape.delete_data(false);	
_SequenceL__Arg_processed.Tape.finished();	
_SequenceL__Arg_processed._delete_data(false);	
_SequenceL__Arg_processed._finished();	
SequenceL__parallel_TrimTapeEnd_0(_SequenceL_tmp2322, 1, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:394: TrimTapeEnd(GetFSquares(processed.Tape), 1)*/
_SequenceL_tmp2322.finished();	
}
else
{
_SequenceL_tmp2324 = "halts";	/*TuringMachineInterpreter.sl:396: "halts"*/
_SequenceL_tmp2325 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2324);	/*TuringMachineInterpreter.sl:397: equalList(Flag, "halts")*/
_SequenceL_tmp2324.delete_data(false);	
_SequenceL_tmp2324.finished();	
if (_SequenceL_tmp2325)	/*TuringMachineInterpreter.sl:402: boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp7);	/*TuringMachineInterpreter.sl:378: DoesMachineHalt(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_DoesMachineHalt_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp7, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_doesHalt);	/*TuringMachineInterpreter.sl:378: DoesMachineHalt(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(false);	
_SequenceL__delete_opttmp7.delete_data(false);	
_SequenceL__delete_opttmp7.finished();	
_SequenceL__Arg_initialState._finished();	
SequenceL__parallel_boolToString_2(_SequenceL__Arg_doesHalt, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:396: boolToString(doesHalt)*/
}
else
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
_SequenceL__Arg_input.MConfigs.clone(_SequenceL__delete_opttmp8);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
SequenceL__parallel_Process_0(_SequenceL__Arg_initialState, _SequenceL__delete_opttmp8, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__delete_opttmp8.finished();	
_SequenceL__Arg_initialState._finished();	
_SequenceL_tmp2350 = "utm-out";	/*TuringMachineInterpreter.sl:398: "utm-out"*/
_SequenceL_tmp2351 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2350);	/*TuringMachineInterpreter.sl:399: equalList(Flag, "utm-out")*/
_SequenceL_tmp2350.delete_data(false);	
_SequenceL_tmp2350.finished();	
if (_SequenceL_tmp2351)	/*TuringMachineInterpreter.sl:402: GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
SequenceL__parallel_GetUtmOut_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:398: GetUtmOut(processed)*/
_SequenceL__Arg_processed._delete_data(false);	
_SequenceL__Arg_processed._finished();	
}
else
{
_SequenceL_tmp2354 = "arrow-state";	/*TuringMachineInterpreter.sl:400: "arrow-state"*/
_SequenceL_tmp2355 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2354);	/*TuringMachineInterpreter.sl:401: equalList(Flag, "arrow-state")*/
_SequenceL_tmp2354.delete_data(false);	
_SequenceL_tmp2354.finished();	
if (_SequenceL_tmp2355)	/*TuringMachineInterpreter.sl:402: StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
SequenceL__parallel_StateToArrowString_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:400: StateToArrowString(processed)*/
_SequenceL__Arg_processed._delete_data(false);	
_SequenceL__Arg_processed._finished();	
}
else
{
SequenceL__parallel_StateToString_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:402: StateToString(processed)*/
_SequenceL__Arg_processed._delete_data(false);	
_SequenceL__Arg_processed._finished();	
}
}
}
}
}
_SequenceL_tmp2289.delete_data(false);	
_SequenceL_tmp2289.finished();	
}
_SequenceL_tmp2271.delete_data(false);	
_SequenceL_tmp2271.finished();	
}
_SequenceL__resultConv.Output = _SequenceL__Arg_outString;	/*TuringMachineInterpreter.sl:405: outString*/
_SequenceL__Arg_outString.delete_data(false);	
_SequenceL__Arg_outString.finished();	
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL__parallel_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__resultConv.ConfigTable = _SequenceL__Arg_input.MConfigs;	/*TuringMachineInterpreter.sl:405: input.MConfigs*/
_SequenceL__resultConv.RetIterations = _SequenceL__Arg_input.Iterations;	/*TuringMachineInterpreter.sl:405: input.Iterations*/
_SequenceL__Arg_input._delete_data(false);	
_SequenceL__Arg_input._finished();	
}
void SequenceL_ParseIDList_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp310(cspace);
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp315;
Sequence< char > _SequenceL_tmp314(cspace);
Sequence< Empty > _SequenceL_tmp317(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_mFunction(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp1(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_nextIDList(cspace);
bool _SequenceL_tmp329;
Sequence< char > _SequenceL_tmp328(cspace);
int _SequenceL_tmp332;

if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when  Position > size(Tokens)		else			(ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp310.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp310, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp310.delete_data(true);	
_SequenceL_tmp310.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:170: Position*/
_SequenceL__Arg_Tokens.delete_data(true);	
}
else
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:161: Tokens[Position]*/
_SequenceL_tmp314 = ")";	/*TuringMachineInterpreter.sl:172: ")"*/
_SequenceL_tmp315 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp314);	/*TuringMachineInterpreter.sl:173: equalList(currentToken.Type, ")")*/
_SequenceL__Arg_currentToken.Type.delete_data(true);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp314.delete_data(true);	
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL_tmp314.finished();	
_SequenceL__Arg_currentToken._finished();	
if (_SequenceL_tmp315)	/*TuringMachineInterpreter.sl:174: (ReturnList: [], TokenPosition: Position) when equalList(currentToken.Type, ")")		else			(ReturnList: mFunction.ReturnList ++ nextIDList.ReturnList, TokenPosition: nextIDList.TokenPosition)*/
{
_SequenceL_tmp317.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp317, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp317.delete_data(true);	
_SequenceL_tmp317.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:172: Position*/
_SequenceL__Arg_Tokens.delete_data(true);	
}
else
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:162: ParseMFunction(Tokens, Position)*/
SequenceL_ParseMFunction_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_Position, _SequenceL__Arg_mFunction);	/*TuringMachineInterpreter.sl:162: ParseMFunction(Tokens, Position)*/
_SequenceL__delete_opttmp1.finished();	
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition) when Position > size(Tokens)			else				ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
SequenceL_ParseIDList_0(_SequenceL__Arg_Tokens, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList);	/*TuringMachineInterpreter.sl:164: ParseIDList(Tokens, mFunction.TokenPosition)*/
}
else
{
_SequenceL_tmp328 = ",";	/*TuringMachineInterpreter.sl:166: ","*/
_SequenceL_tmp329 = eq_list((*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_mFunction.TokenPosition))).Type, _SequenceL_tmp328);	/*TuringMachineInterpreter.sl:167: equalList(Tokens[mFunction.TokenPosition].Type, ",")*/
_SequenceL_tmp328.delete_data(true);	
_SequenceL_tmp328.finished();	
if (_SequenceL_tmp329)	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition + 1) when equalList(Tokens[mFunction.TokenPosition].Type, ",")			else				ParseIDList(Tokens, mFunction.TokenPosition)*/
{
_SequenceL_tmp332 = (_SequenceL__Arg_mFunction.TokenPosition + 1);	/*TuringMachineInterpreter.sl:166: mFunction.TokenPosition + 1*/
SequenceL_ParseIDList_0(_SequenceL__Arg_Tokens, _SequenceL_tmp332, _SequenceL__Arg_nextIDList);	/*TuringMachineInterpreter.sl:166: ParseIDList(Tokens, mFunction.TokenPosition + 1)*/
}
else
{
SequenceL_ParseIDList_0(_SequenceL__Arg_Tokens, _SequenceL__Arg_mFunction.TokenPosition, _SequenceL__Arg_nextIDList);	/*TuringMachineInterpreter.sl:168: ParseIDList(Tokens, mFunction.TokenPosition)*/
}
}
append(_SequenceL__Arg_mFunction.ReturnList, _SequenceL__Arg_nextIDList.ReturnList, _SequenceL__resultConv.ReturnList);	/*TuringMachineInterpreter.sl:174: mFunction.ReturnList ++ nextIDList.ReturnList*/
_SequenceL__Arg_mFunction._delete_data(true);	
_SequenceL__Arg_mFunction._finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_nextIDList.TokenPosition;	/*TuringMachineInterpreter.sl:174: nextIDList.TokenPosition*/
_SequenceL__Arg_nextIDList._delete_data(true);	
_SequenceL__Arg_nextIDList._finished();	
}
}
}
void SequenceL_ParseArgs_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp340(cspace);
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp345;
Sequence< char > _SequenceL_tmp344(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_idList(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp347;
Sequence< Empty > _SequenceL_tmp352(cspace);

if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tokens.size()))	/*TuringMachineInterpreter.sl:157: (ReturnList: [], TokenPosition: Position) when Position > size(Tokens)		else			(ReturnList: idList.ReturnList, TokenPosition: idList.TokenPosition + 1) when equalList(currentToken.Type, "(")		else			(ReturnList: [], TokenPosition: Position)*/
{
_SequenceL_tmp340.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp340, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp340.delete_data(true);	
_SequenceL_tmp340.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:153: Position*/
}
else
{
_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:150: Tokens[Position]*/
_SequenceL_tmp344 = "(";	/*TuringMachineInterpreter.sl:155: "("*/
_SequenceL_tmp345 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp344);	/*TuringMachineInterpreter.sl:156: equalList(currentToken.Type, "(")*/
_SequenceL__Arg_currentToken.Type.delete_data(true);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp344.delete_data(true);	
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL_tmp344.finished();	
_SequenceL__Arg_currentToken._finished();	
if (_SequenceL_tmp345)	/*TuringMachineInterpreter.sl:157: (ReturnList: idList.ReturnList, TokenPosition: idList.TokenPosition + 1) when equalList(currentToken.Type, "(")		else			(ReturnList: [], TokenPosition: Position)*/
{
_SequenceL__Arg_Tokens.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:151: ParseIDList(Tokens, Position + 1)*/
_SequenceL_tmp347 = (_SequenceL__Arg_Position + 1);	/*TuringMachineInterpreter.sl:151: Position + 1*/
SequenceL_ParseIDList_0(_SequenceL__delete_opttmp1, _SequenceL_tmp347, _SequenceL__Arg_idList);	/*TuringMachineInterpreter.sl:151: ParseIDList(Tokens, Position + 1)*/
_SequenceL__delete_opttmp1.finished();	
_SequenceL__resultConv.ReturnList = _SequenceL__Arg_idList.ReturnList;	/*TuringMachineInterpreter.sl:155: idList.ReturnList*/
_SequenceL__resultConv.TokenPosition = (_SequenceL__Arg_idList.TokenPosition + 1);	/*TuringMachineInterpreter.sl:155: idList.TokenPosition + 1*/
_SequenceL__Arg_idList._delete_data(true);	
_SequenceL__Arg_idList._finished();	
}
else
{
_SequenceL_tmp352.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp352, _SequenceL__resultConv.ReturnList);	
_SequenceL_tmp352.delete_data(true);	
_SequenceL_tmp352.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:157: Position*/
}
}
}
void SequenceL_MakeToken_0(Sequence< char > &_SequenceL__Arg_String, _sl_TOKEN_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_type(cspace);
char _SequenceL_tmp632;
char _SequenceL_tmp636;
char _SequenceL_tmp640;
char _SequenceL_tmp644;

_SequenceL__resultConv.Value = _SequenceL__Arg_String;	/*TuringMachineInterpreter.sl:93: String*/
if ((_SequenceL__Arg_String.size() == 1))	/*TuringMachineInterpreter.sl:91: ("(" when head(String) = '('				else					")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID")  when size(String) = 1			else				"ID"*/
{
_SequenceL_tmp632 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:81: head(String)*/
if ((_SequenceL_tmp632 == '('))	/*TuringMachineInterpreter.sl:89: "(" when head(String) = '('				else					")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = "(";	/*TuringMachineInterpreter.sl:81: "("*/
}
else
{
_SequenceL_tmp636 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:83: head(String)*/
if ((_SequenceL_tmp636 == ')'))	/*TuringMachineInterpreter.sl:89: ")" when head(String) = ')'				else					"," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = ")";	/*TuringMachineInterpreter.sl:83: ")"*/
}
else
{
_SequenceL_tmp640 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:85: head(String)*/
if ((_SequenceL_tmp640 == ','))	/*TuringMachineInterpreter.sl:89: "," when head(String) = ','				else					"|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = ",";	/*TuringMachineInterpreter.sl:85: ","*/
}
else
{
_SequenceL_tmp644 = _SequenceL__Arg_String.head();	/*TuringMachineInterpreter.sl:87: head(String)*/
if ((_SequenceL_tmp644 == '|'))	/*TuringMachineInterpreter.sl:89: "|" when head(String) = '|'				else					"ID"*/
{
_SequenceL__Arg_type = "|";	/*TuringMachineInterpreter.sl:87: "|"*/
}
else
{
_SequenceL__Arg_type = "ID";	/*TuringMachineInterpreter.sl:89: "ID"*/
}
}
}
}
}
else
{
_SequenceL__Arg_type = "ID";	/*TuringMachineInterpreter.sl:91: "ID"*/
}
_SequenceL__resultConv.Type = _SequenceL__Arg_type;	/*TuringMachineInterpreter.sl:93: type*/
_SequenceL__Arg_type.delete_data(true);	
_SequenceL__Arg_type.finished();	
}
void SequenceL_TokenizeLineWorker_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_CurrentToken, Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv)
{
int _SequenceL___Arg_Position_tco;
Sequence< char > _SequenceL___Arg_CurrentToken_tco(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL___Arg_Tokens_tco(cspace);
bool _SequenceL__invariant_opttmp1;
bool _SequenceL__Arg_atDelim;
Sequence< char > _SequenceL_tmp651(cspace);
Sequence< bool > _SequenceL_tmp652(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL__Arg_newTokens(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp660(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp658(cspace);
_sl_TOKEN_0 _SequenceL__Arg_newToken(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp661(cspace);
_sl_TOKEN_0 _SequenceL__Arg_delimToken(cspace);
Sequence< char > _SequenceL_tmp663(cspace);
bool _SequenceL__Arg_haveP;
Sequence< _sl_TOKEN_0 > _SequenceL_tmp673(cspace);
Sequence< char > _SequenceL_tmp675(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp682(cspace);
int _SequenceL_tmp688;
Sequence< char > _SequenceL__Arg_newCurrentToken(cspace);
Sequence< char > _SequenceL_tmp699(cspace);

_SequenceL___Arg_Position_tco = _SequenceL__Arg_Position;	
_SequenceL___Arg_CurrentToken_tco.hard_copy(_SequenceL__Arg_CurrentToken,__LINE__);	
_SequenceL__Arg_CurrentToken.delete_data(true);	
_SequenceL___Arg_Tokens_tco.hard_copy(_SequenceL__Arg_Tokens,__LINE__);	
_SequenceL__Arg_Tokens.delete_data(true);	
_SequenceL__invariant_opttmp1 = true;	
TokenizeLineWorker_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:103: some(Line[Position] = delimitters) when Position <= size(Line)			else 				false*/
{
if (_SequenceL__invariant_opttmp1)	
{
_SequenceL_tmp651 = _SequenceL_delimitters_0;	/*TuringMachineInterpreter.sl:101: delimitters*/
_SequenceL__invariant_opttmp1 = false;	
}
_SequenceL_tmp652.setSize(_SequenceL_tmp651.size());	/*TuringMachineInterpreter.sl:101: Line[Position] = delimitters*/
SIMD_DIRECTIVE
for (int _SequenceL__i653=1,_stop_val__SequenceL__i653=_SequenceL_tmp652.size(); _SequenceL__i653<=_stop_val__SequenceL__i653; _SequenceL__i653+=1)
{
(*(_SequenceL_tmp652.get_ptr(_SequenceL__i653))) = ((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == (*(_SequenceL_tmp651.get_ptr(_SequenceL__i653))));	/*TuringMachineInterpreter.sl:101: Line[Position] = delimitters*/
}
_SequenceL__Arg_atDelim = some(_SequenceL_tmp652);	/*TuringMachineInterpreter.sl:101: some(Line[Position] = delimitters)*/
}
else
{
_SequenceL__Arg_atDelim = false;	/*TuringMachineInterpreter.sl:103: false*/
}
if ((_SequenceL__Arg_atDelim && (_SequenceL___Arg_CurrentToken_tco.size() > 0)))	/*TuringMachineInterpreter.sl:120: Tokens ++ [newToken] ++ [delimToken] when atDelim and size(CurrentToken) > 0			else				Tokens ++ [delimToken] when atDelim or haveP			else				Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp658.setSize(1 > 0 ? 1 : 0);	
SequenceL_MakeToken_0(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newToken);	/*TuringMachineInterpreter.sl:110: MakeToken(CurrentToken)*/
(*(_SequenceL_tmp658.get_ptr(1))) = _SequenceL__Arg_newToken;	/*TuringMachineInterpreter.sl:114: newToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp658, _SequenceL_tmp660);	/*TuringMachineInterpreter.sl:114: Tokens ++ [newToken]*/
_SequenceL_tmp661.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp663.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp663.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:111: Line[Position]*/
SequenceL_MakeToken_0(_SequenceL_tmp663, _SequenceL__Arg_delimToken);	/*TuringMachineInterpreter.sl:111: MakeToken([Line[Position]])*/
(*(_SequenceL_tmp661.get_ptr(1))) = _SequenceL__Arg_delimToken;	/*TuringMachineInterpreter.sl:114: delimToken*/
append(_SequenceL_tmp660, _SequenceL_tmp661, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:114: Tokens ++ [newToken] ++ [delimToken]*/
}
else
{
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:108: Line[Position] = 'P' and size(CurrentToken) = 0 when Position <= size(Line)			else 				false*/
{
_SequenceL__Arg_haveP = (((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == 'P') && (_SequenceL___Arg_CurrentToken_tco.size() == 0));	/*TuringMachineInterpreter.sl:106: Line[Position] = 'P' and size(CurrentToken) = 0*/
}
else
{
_SequenceL__Arg_haveP = false;	/*TuringMachineInterpreter.sl:108: false*/
}
if ((_SequenceL__Arg_atDelim || _SequenceL__Arg_haveP))	/*TuringMachineInterpreter.sl:120: Tokens ++ [delimToken] when atDelim or haveP			else				Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp673.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp675.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp675.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:111: Line[Position]*/
SequenceL_MakeToken_0(_SequenceL_tmp675, _SequenceL__Arg_delimToken);	/*TuringMachineInterpreter.sl:111: MakeToken([Line[Position]])*/
(*(_SequenceL_tmp673.get_ptr(1))) = _SequenceL__Arg_delimToken;	/*TuringMachineInterpreter.sl:116: delimToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp673, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:116: Tokens ++ [delimToken]*/
}
else
{
if (((_SequenceL___Arg_Position_tco > _SequenceL__Arg_Line.size()) && (_SequenceL___Arg_CurrentToken_tco.size() > 0)))	/*TuringMachineInterpreter.sl:120: Tokens ++ [newToken] when Position > size(Line) and size(CurrentToken) > 0			else				Tokens*/
{
_SequenceL_tmp682.setSize(1 > 0 ? 1 : 0);	
SequenceL_MakeToken_0(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newToken);	/*TuringMachineInterpreter.sl:110: MakeToken(CurrentToken)*/
(*(_SequenceL_tmp682.get_ptr(1))) = _SequenceL__Arg_newToken;	/*TuringMachineInterpreter.sl:118: newToken*/
append(_SequenceL___Arg_Tokens_tco, _SequenceL_tmp682, _SequenceL__Arg_newTokens);	/*TuringMachineInterpreter.sl:118: Tokens ++ [newToken]*/
}
else
{
_SequenceL__Arg_newTokens = _SequenceL___Arg_Tokens_tco;	/*TuringMachineInterpreter.sl:120: Tokens*/
}
}
}
if ((_SequenceL___Arg_Position_tco > _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:132: newTokens when Position > size(Line)		else			TokenizeLineWorker(Line, Position + 1, newCurrentToken, newTokens)*/
{
_SequenceL__resultConv = _SequenceL__Arg_newTokens;	/*TuringMachineInterpreter.sl:130: newTokens*/
}
else
{
_SequenceL_tmp688 = (_SequenceL___Arg_Position_tco + 1);	/*TuringMachineInterpreter.sl:132: Position + 1*/
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:108: Line[Position] = 'P' and size(CurrentToken) = 0 when Position <= size(Line)			else 				false*/
{
_SequenceL__Arg_haveP = (((*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco))) == 'P') && (_SequenceL___Arg_CurrentToken_tco.size() == 0));	/*TuringMachineInterpreter.sl:106: Line[Position] = 'P' and size(CurrentToken) = 0*/
}
else
{
_SequenceL__Arg_haveP = false;	/*TuringMachineInterpreter.sl:108: false*/
}
if ((_SequenceL__Arg_atDelim || _SequenceL__Arg_haveP))	/*TuringMachineInterpreter.sl:127: "" when atDelim or haveP			else				CurrentToken ++ [Line[Position]] when Position <= size(Line)			else 				CurrentToken*/
{
_SequenceL__Arg_newCurrentToken.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:123: ""*/
}
else
{
if ((_SequenceL___Arg_Position_tco <= _SequenceL__Arg_Line.size()))	/*TuringMachineInterpreter.sl:127: CurrentToken ++ [Line[Position]] when Position <= size(Line)			else 				CurrentToken*/
{
_SequenceL_tmp699.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp699.get_ptr(1))) = (*(_SequenceL__Arg_Line.get_ptr(_SequenceL___Arg_Position_tco)));	/*TuringMachineInterpreter.sl:125: Line[Position]*/
append(_SequenceL___Arg_CurrentToken_tco, _SequenceL_tmp699, _SequenceL__Arg_newCurrentToken);	/*TuringMachineInterpreter.sl:125: CurrentToken ++ [Line[Position]]*/
}
else
{
_SequenceL__Arg_newCurrentToken = _SequenceL___Arg_CurrentToken_tco;	/*TuringMachineInterpreter.sl:127: CurrentToken*/
}
}
_SequenceL___Arg_Position_tco = _SequenceL_tmp688;	
_swap(_SequenceL___Arg_CurrentToken_tco, _SequenceL__Arg_newCurrentToken);	
_swap(_SequenceL___Arg_Tokens_tco, _SequenceL__Arg_newTokens);	
goto TokenizeLineWorker_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:132: TokenizeLineWorker(Line, Position + 1, newCurrentToken, newTokens)*/
}
_SequenceL_tmp651.delete_data(true);	
_SequenceL_tmp652.delete_data(true);	
_SequenceL__Arg_newTokens.delete_data(true);	
_SequenceL_tmp660.delete_data(true);	
_SequenceL_tmp658.delete_data(true);	
_SequenceL__Arg_newToken._delete_data(true);	
_SequenceL_tmp661.delete_data(true);	
_SequenceL__Arg_delimToken._delete_data(true);	
_SequenceL_tmp663.delete_data(true);	
_SequenceL_tmp673.delete_data(true);	
_SequenceL_tmp675.delete_data(true);	
_SequenceL_tmp682.delete_data(true);	
_SequenceL__Arg_newCurrentToken.delete_data(true);	
_SequenceL_tmp699.delete_data(true);	
_SequenceL_tmp699.finished();	
_SequenceL__Arg_newCurrentToken.finished();	
_SequenceL_tmp682.finished();	
_SequenceL_tmp675.finished();	
_SequenceL_tmp673.finished();	
_SequenceL_tmp663.finished();	
_SequenceL__Arg_delimToken._finished();	
_SequenceL_tmp661.finished();	
_SequenceL__Arg_newToken._finished();	
_SequenceL_tmp658.finished();	
_SequenceL_tmp660.finished();	
_SequenceL__Arg_newTokens.finished();	
_SequenceL_tmp652.finished();	
_SequenceL_tmp651.finished();	
_SequenceL__Arg_Line.delete_data(true);	
}
void SequenceL_multipleIndexes_1(Sequence< char > &_SequenceL__Arg_list, Sequence< Sequence< int > > &_SequenceL__Arg_indexes, Sequence< Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_indexes.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL_indexesOf_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Index_i;	
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_ParseMFunction_0(Sequence< _sl_TOKEN_0 > &_SequenceL__Arg_Tokens, int _SequenceL__Arg_Position, _sl_PARSERETURN_0 &_SequenceL__resultConv)
{
_sl_TOKEN_0 _SequenceL__Arg_currentToken(cspace);
bool _SequenceL_tmp757;
Sequence< char > _SequenceL_tmp756(cspace);
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp759(cspace);
Sequence< char > _SequenceL__Arg_id(cspace);
_sl_PARSERETURN_0 _SequenceL__Arg_args(cspace);
int _SequenceL_tmp761;
Sequence< _sl_MFUNCTION_0 > _SequenceL_tmp765(cspace);
Sequence< char > _SequenceL_tmp767(cspace);
Sequence< Empty > _SequenceL_tmp768(cspace);

_SequenceL__Arg_currentToken = (*(_SequenceL__Arg_Tokens.get_ptr(_SequenceL__Arg_Position)));	/*TuringMachineInterpreter.sl:140: Tokens[Position]*/
_SequenceL_tmp756 = "ID";	/*TuringMachineInterpreter.sl:144: "ID"*/
_SequenceL_tmp757 = eq_list(_SequenceL__Arg_currentToken.Type, _SequenceL_tmp756);	/*TuringMachineInterpreter.sl:145: equalList(currentToken.Type, "ID")*/
_SequenceL__Arg_currentToken.Type.delete_data(true);	
_SequenceL__Arg_currentToken.Type.finished();	
_SequenceL_tmp756.delete_data(true);	
_SequenceL_tmp756.finished();	
if (_SequenceL_tmp757)	/*TuringMachineInterpreter.sl:146: (ReturnList: [(ID: id, Arguments: args.ReturnList)], TokenPosition: args.TokenPosition) when equalList(currentToken.Type, "ID")		else			(ReturnList: [(ID: "", Arguments: [])], TokenPosition: Position)*/
{
_SequenceL_tmp759.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_id = _SequenceL__Arg_currentToken.Value;	/*TuringMachineInterpreter.sl:141: currentToken.Value*/
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL__Arg_currentToken._finished();	
(*(_SequenceL_tmp759.get_ptr(1))).ID = _SequenceL__Arg_id;	/*TuringMachineInterpreter.sl:144: id*/
_SequenceL__Arg_id.delete_data(true);	
_SequenceL__Arg_id.finished();	
_SequenceL_tmp761 = (_SequenceL__Arg_Position + 1);	/*TuringMachineInterpreter.sl:142: Position + 1*/
SequenceL_ParseArgs_0(_SequenceL__Arg_Tokens, _SequenceL_tmp761, _SequenceL__Arg_args);	/*TuringMachineInterpreter.sl:142: ParseArgs(Tokens, Position + 1)*/
_SequenceL__Arg_Tokens.delete_data(true);	
(*(_SequenceL_tmp759.get_ptr(1))).Arguments = _SequenceL__Arg_args.ReturnList;	/*TuringMachineInterpreter.sl:144: args.ReturnList*/
_SequenceL__resultConv.ReturnList = _SequenceL_tmp759;	/*TuringMachineInterpreter.sl:144: [(ID: id, Arguments: args.ReturnList)]*/
_SequenceL_tmp759.delete_data(true);	
_SequenceL_tmp759.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_args.TokenPosition;	/*TuringMachineInterpreter.sl:144: args.TokenPosition*/
_SequenceL__Arg_args._delete_data(true);	
_SequenceL__Arg_args._finished();	
}
else
{
_SequenceL_tmp765.setSize(1 > 0 ? 1 : 0);	
_SequenceL_tmp767.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:146: ""*/
(*(_SequenceL_tmp765.get_ptr(1))).ID = _SequenceL_tmp767;	
_SequenceL_tmp767.delete_data(true);	
_SequenceL_tmp767.finished();	
_SequenceL_tmp768.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp768, (*(_SequenceL_tmp765.get_ptr(1))).Arguments);	
_SequenceL_tmp768.delete_data(true);	
_SequenceL_tmp768.finished();	
_SequenceL__resultConv.ReturnList = _SequenceL_tmp765;	/*TuringMachineInterpreter.sl:146: [(ID: "", Arguments: [])]*/
_SequenceL_tmp765.delete_data(true);	
_SequenceL_tmp765.finished();	
_SequenceL__resultConv.TokenPosition = _SequenceL__Arg_Position;	/*TuringMachineInterpreter.sl:146: Position*/
_SequenceL__Arg_currentToken._delete_data(true);	
_SequenceL__Arg_Tokens.delete_data(true);	
_SequenceL__Arg_currentToken._finished();	
}
}
void SequenceL_TokenizeLine_0(Sequence< char > &_SequenceL__Arg_Line, Sequence< _sl_TOKEN_0 > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__delete_opttmp1(cspace);
Sequence< char > _SequenceL_tmp770(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp772(cspace);
Sequence< Empty > _SequenceL_tmp771(cspace);

_SequenceL__Arg_Line.clone(_SequenceL__delete_opttmp1);	/*TuringMachineInterpreter.sl:96: TokenizeLineWorker(Line, 1, "", [])*/
_SequenceL_tmp770.setSize(0 > 0 ? 0 : 0);	/*TuringMachineInterpreter.sl:96: ""*/
_SequenceL_tmp771.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp771, _SequenceL_tmp772);	
_SequenceL_tmp771.delete_data(true);	
_SequenceL_tmp771.finished();	
SequenceL_TokenizeLineWorker_0(_SequenceL__delete_opttmp1, 1, _SequenceL_tmp770, _SequenceL_tmp772, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:96: TokenizeLineWorker(Line, 1, "", [])*/
_SequenceL_tmp772.finished();	
_SequenceL_tmp770.finished();	
_SequenceL__delete_opttmp1.finished();	
}
void SequenceL_ParseConfig_0(Sequence< char > &_SequenceL__Arg_Line, int _SequenceL__ex_iter, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv)
{
_sl_MFUNCTION_0 _SequenceL__Arg_label(cspace);
_sl_PARSERETURN_0 _SequenceL_tmp796(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp795(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_entries(cspace);
char _SequenceL_tmp794;
Sequence< Sequence< char > > _SequenceL__Arg_symbols(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_operations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_finalConfig(cspace);
_sl_PARSERETURN_0 _SequenceL_tmp799(cspace);
Sequence< _sl_TOKEN_0 > _SequenceL_tmp798(cspace);

if ((_SequenceL__Arg_Line.size() > 0))	/*TuringMachineInterpreter.sl:188: ((Label: label, Symbols: symbols, Operations: operations, FinalConfig: finalConfig) 				when not((Line[1] = '/') and (Line[2] = '/'))) 			when size(Line) > 0*/
{
if (!(((*(_SequenceL__Arg_Line.get_ptr(1))) == '/') && ((*(_SequenceL__Arg_Line.get_ptr(2))) == '/')))	/*TuringMachineInterpreter.sl:187: (Label: label, Symbols: symbols, Operations: operations, FinalConfig: finalConfig) 				when not((Line[1] = '/') and (Line[2] = '/'))*/
{
_SequenceL_tmp794 = _SequenceL_DELIMITER_0;	/*TuringMachineInterpreter.sl:180: DELIMITER*/
SequenceL_split_1(_SequenceL__Arg_Line, _SequenceL_tmp794, _SequenceL__Arg_entries);	/*TuringMachineInterpreter.sl:180: split(Line, DELIMITER)*/
SequenceL_TokenizeLine_0((*(_SequenceL__Arg_entries.get_ptr(1))), _SequenceL_tmp795);	/*TuringMachineInterpreter.sl:181: TokenizeLine(entries[1])*/
SequenceL_ParseMFunction_0(_SequenceL_tmp795, 1, _SequenceL_tmp796);	/*TuringMachineInterpreter.sl:181: ParseMFunction(TokenizeLine(entries[1]), 1)*/
_SequenceL_tmp795.finished();	
_SequenceL_tmp796.ReturnList.head(_SequenceL__Arg_label);	/*TuringMachineInterpreter.sl:181: head(ParseMFunction(TokenizeLine(entries[1]), 1).ReturnList)*/
_SequenceL_tmp796._delete_data(true);	
_SequenceL_tmp796._finished();	
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Label.val_assign() = _SequenceL__Arg_label;	/*TuringMachineInterpreter.sl:186: label*/
_SequenceL__Arg_label._delete_data(true);	
_SequenceL__Arg_label._finished();	
SequenceL_split_1((*(_SequenceL__Arg_entries.get_ptr(2))), ',', _SequenceL__Arg_symbols);	/*TuringMachineInterpreter.sl:182: split(entries[2], ',')*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Symbols = _SequenceL__Arg_symbols;	/*TuringMachineInterpreter.sl:186: symbols*/
_SequenceL__Arg_symbols.delete_data(true);	
_SequenceL__Arg_symbols.finished();	
SequenceL_split_1((*(_SequenceL__Arg_entries.get_ptr(3))), ',', _SequenceL__Arg_operations);	/*TuringMachineInterpreter.sl:183: split(entries[3], ',')*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).Operations = _SequenceL__Arg_operations;	/*TuringMachineInterpreter.sl:186: operations*/
_SequenceL__Arg_operations.delete_data(true);	
_SequenceL__Arg_operations.finished();	
SequenceL_TokenizeLine_0((*(_SequenceL__Arg_entries.get_ptr(4))), _SequenceL_tmp798);	/*TuringMachineInterpreter.sl:184: TokenizeLine(entries[4])*/
_SequenceL__Arg_entries.delete_data(true);	
_SequenceL__Arg_entries.finished();	
SequenceL_ParseMFunction_0(_SequenceL_tmp798, 1, _SequenceL_tmp799);	/*TuringMachineInterpreter.sl:184: ParseMFunction(TokenizeLine(entries[4]), 1)*/
_SequenceL_tmp798.finished();	
_SequenceL_tmp799.ReturnList.head(_SequenceL__Arg_finalConfig);	/*TuringMachineInterpreter.sl:184: head(ParseMFunction(TokenizeLine(entries[4]), 1).ReturnList)*/
_SequenceL_tmp799._delete_data(true);	
_SequenceL_tmp799._finished();	
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).FinalConfig.val_assign() = _SequenceL__Arg_finalConfig;	/*TuringMachineInterpreter.sl:186: finalConfig*/
_SequenceL__Arg_finalConfig._delete_data(true);	
_SequenceL__Arg_finalConfig._finished();	
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
void SequenceL_SINGLETON_FUNCTION_0(Sequence< char > &_SequenceL__Arg_id, _sl_MFUNCTION_0 &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp803(cspace);

_SequenceL__resultConv.ID = _SequenceL__Arg_id;	/*TuringMachineInterpreter.sl:33: id*/
_SequenceL_tmp803.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp803, _SequenceL__resultConv.Arguments);	
_SequenceL_tmp803.delete_data(true);	
_SequenceL_tmp803.finished();	
}
void SequenceL_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp835;
int _SequenceL_tmp836;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp835 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp836 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp835;	
_SequenceL___Arg_val_tco = _SequenceL_tmp836;	
goto integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL_integerPowerHelper_4(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_char == '0'))	/*Conversion.sl:120: 0 when char = '0'	else		1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:100: 0*/
}
else
{
if ((_SequenceL__Arg_char == '1'))	/*Conversion.sl:120: 1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 1;	/*Conversion.sl:102: 1*/
}
else
{
if ((_SequenceL__Arg_char == '2'))	/*Conversion.sl:120: 2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 2;	/*Conversion.sl:104: 2*/
}
else
{
if ((_SequenceL__Arg_char == '3'))	/*Conversion.sl:120: 3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 3;	/*Conversion.sl:106: 3*/
}
else
{
if ((_SequenceL__Arg_char == '4'))	/*Conversion.sl:120: 4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 4;	/*Conversion.sl:108: 4*/
}
else
{
if ((_SequenceL__Arg_char == '5'))	/*Conversion.sl:120: 5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 5;	/*Conversion.sl:110: 5*/
}
else
{
if ((_SequenceL__Arg_char == '6'))	/*Conversion.sl:120: 6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 6;	/*Conversion.sl:112: 6*/
}
else
{
if ((_SequenceL__Arg_char == '7'))	/*Conversion.sl:120: 7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 7;	/*Conversion.sl:114: 7*/
}
else
{
if ((_SequenceL__Arg_char == '8'))	/*Conversion.sl:120: 8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 8;	/*Conversion.sl:116: 8*/
}
else
{
if ((_SequenceL__Arg_char == '9'))	/*Conversion.sl:120: 9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 9;	/*Conversion.sl:118: 9*/
}
else
{
_SequenceL__resultConv = 0;	/*Conversion.sl:120: 0*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL_atoIWorker_2(Sequence< char > &_SequenceL__Arg_numString, Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL_tmp897;
int _SequenceL__Arg_place;
int _SequenceL_tmp898;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp897);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp898 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_4(10, _SequenceL_tmp898, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp897 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL_take_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:165: list[1 ... n]*/
}
void SequenceL_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL_trimNonNumeric_2(Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp974;
int _SequenceL_tmp977;
int _SequenceL_tmp979;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp974);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp974)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp977 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_1(_SequenceL__Arg_numString, _SequenceL_tmp977, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp979 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp979;	
goto trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL_trimStart_3(Sequence< char > &_SequenceL__Arg_input, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp1056;
char _SequenceL_tmp1055;
Sequence< char > _SequenceL_tmp1058(cspace);

_SequenceL___Arg_input_tco.hard_copy(_SequenceL__Arg_input,__LINE__);	
trimStart_String_label_tco:	
if ((_SequenceL___Arg_input_tco.size() == 0))	/*String.sl:12: input when size(input) = 0	else		trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:8: input*/
}
else
{
_SequenceL_tmp1055 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_3(_SequenceL_tmp1055, _SequenceL_tmp1056);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp1056)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp1058);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp1058);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp1058.delete_data(true);	
_SequenceL_tmp1058.finished();	
}
void SequenceL_stringToInt_2(Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp1078;
int _SequenceL_tmp1082;
Sequence< char > _SequenceL_tmp1081(cspace);
char _SequenceL_tmp1084;
Sequence< char > _SequenceL_tmp1087(cspace);
Sequence< int > _SequenceL_tmp1089(cspace);
Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL_trimStart_3(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp1078 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp1078 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp1081);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_2(_SequenceL_tmp1081, _SequenceL_tmp1082);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp1081.delete_data(true);	
_SequenceL_tmp1081.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp1082);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp1084 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp1084 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp1087);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_2(_SequenceL_tmp1087, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp1087.delete_data(true);	
_SequenceL_tmp1087.finished();	
}
else
{
SequenceL_trimNonNumeric_2(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_2(_SequenceL__Arg_justNumber, _SequenceL_tmp1089);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp1089);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp1089.delete_data(true);	
_SequenceL_tmp1089.finished();	
}
}
}
}
void SequenceL_split_1(Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
Sequence< Empty > _SequenceL_tmp1091(cspace);
Sequence< int > _SequenceL_tmp1097(cspace);
Sequence< int > _SequenceL_tmp1093(cspace);
Sequence< int > _SequenceL__Arg_indexes(cspace);
Sequence< int > _SequenceL_tmp1095(cspace);
Sequence< int > _SequenceL_tmp1102(cspace);
Sequence< int > _SequenceL_tmp1098(cspace);
Sequence< int > _SequenceL_tmp1100(cspace);
Sequence< Sequence< int > > _SequenceL_tmp1103(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp1091.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp1091, _SequenceL__resultConv);	
_SequenceL_tmp1091.delete_data(true);	
_SequenceL_tmp1091.finished();	
}
else
{
_SequenceL_tmp1093.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1093.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp1095.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i1096=1,_stop_val__SequenceL__i1096=_SequenceL_tmp1095.size(); _SequenceL__i1096<=_stop_val__SequenceL__i1096; _SequenceL__i1096+=1)
{
(*(_SequenceL_tmp1095.get_ptr(_SequenceL__i1096))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i1096))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp1093, _SequenceL_tmp1095, _SequenceL_tmp1097);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp1093.delete_data(true);	
_SequenceL_tmp1095.delete_data(true);	
_SequenceL_tmp1095.finished();	
_SequenceL_tmp1093.finished();	
_SequenceL_tmp1098.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i1099=1,_stop_val__SequenceL__i1099=_SequenceL_tmp1098.size(); _SequenceL__i1099<=_stop_val__SequenceL__i1099; _SequenceL__i1099+=1)
{
(*(_SequenceL_tmp1098.get_ptr(_SequenceL__i1099))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i1099))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp1100.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1100.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp1098, _SequenceL_tmp1100, _SequenceL_tmp1102);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp1098.delete_data(true);	
_SequenceL_tmp1100.delete_data(true);	
_SequenceL_tmp1100.finished();	
_SequenceL_tmp1098.finished();	
_SequenceL_tmp1103.setSize(_SequenceL_tmp1097.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i1104=1,_stop_val__SequenceL__i1104=_SequenceL_tmp1103.size(); _SequenceL__i1104<=_stop_val__SequenceL__i1104; _SequenceL__i1104+=1)
{
ellipsis((*(_SequenceL_tmp1097.get_ptr(_SequenceL__i1104))), (*(_SequenceL_tmp1102.get_ptr(_SequenceL__i1104))), (*(_SequenceL_tmp1103.get_ptr(_SequenceL__i1104))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp1097.delete_data(true);	
_SequenceL_tmp1102.delete_data(true);	
_SequenceL_tmp1102.finished();	
_SequenceL_tmp1097.finished();	
SequenceL_multipleIndexes_1(_SequenceL__Arg_list, _SequenceL_tmp1103, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp1103.delete_data(true);	
_SequenceL_tmp1103.finished();	
}
}
void SequenceL_RemoveCharacter_0(char _SequenceL__Arg_character, Sequence< char > &_SequenceL__Arg_string, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_string.size());	/*TuringMachineInterpreter.sl:65: string[i] when not(string[i] = character)*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_string.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!((*(_SequenceL__Arg_string.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_character))	/*TuringMachineInterpreter.sl:65: string[i] when not(string[i] = character)*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_string.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:65: string[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_intToChar_2(int _SequenceL__Arg_int, char &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_int == 0))	/*Conversion.sl:96: '0' when int = 0	else		'1' when int = 1	else		'2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '0';	/*Conversion.sl:76: '0'*/
}
else
{
if ((_SequenceL__Arg_int == 1))	/*Conversion.sl:96: '1' when int = 1	else		'2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '1';	/*Conversion.sl:78: '1'*/
}
else
{
if ((_SequenceL__Arg_int == 2))	/*Conversion.sl:96: '2' when int = 2	else		'3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '2';	/*Conversion.sl:80: '2'*/
}
else
{
if ((_SequenceL__Arg_int == 3))	/*Conversion.sl:96: '3' when int = 3	else		'4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '3';	/*Conversion.sl:82: '3'*/
}
else
{
if ((_SequenceL__Arg_int == 4))	/*Conversion.sl:96: '4' when int = 4	else		'5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '4';	/*Conversion.sl:84: '4'*/
}
else
{
if ((_SequenceL__Arg_int == 5))	/*Conversion.sl:96: '5' when int = 5	else		'6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '5';	/*Conversion.sl:86: '5'*/
}
else
{
if ((_SequenceL__Arg_int == 6))	/*Conversion.sl:96: '6' when int = 6	else		'7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '6';	/*Conversion.sl:88: '6'*/
}
else
{
if ((_SequenceL__Arg_int == 7))	/*Conversion.sl:96: '7' when int = 7	else		'8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '7';	/*Conversion.sl:90: '7'*/
}
else
{
if ((_SequenceL__Arg_int == 8))	/*Conversion.sl:96: '8' when int = 8	else		'9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '8';	/*Conversion.sl:92: '8'*/
}
else
{
if ((_SequenceL__Arg_int == 9))	/*Conversion.sl:96: '9' when int = 9	else		'0'*/
{
_SequenceL__resultConv = '9';	/*Conversion.sl:94: '9'*/
}
else
{
_SequenceL__resultConv = '0';	/*Conversion.sl:96: '0'*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL_intToString_2(int _SequenceL__Arg_number, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp1256(cspace);
Sequence< char > _SequenceL_tmp1258(cspace);
int _SequenceL_tmp1257;
Sequence< char > _SequenceL__Arg_lowestDigitChar(cspace);
int _SequenceL__Arg_lowestDigit;
Sequence< char > _SequenceL_tmp1265(cspace);
int _SequenceL_tmp1264;

if ((_SequenceL__Arg_number < 0))	/*Conversion.sl:72: "-" ++ intToString(-number) when number < 0		else 			lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL_tmp1256 = "-";	/*Conversion.sl:68: "-"*/
_SequenceL_tmp1257 = (-_SequenceL__Arg_number);	/*Conversion.sl:68: -number*/
SequenceL_intToString_2(_SequenceL_tmp1257, _SequenceL_tmp1258);	/*Conversion.sl:68: intToString(-number)*/
_appendF(_SequenceL_tmp1256, _SequenceL_tmp1258, _SequenceL__resultConv);	/*Conversion.sl:68: "-" ++ intToString(-number)*/
_SequenceL_tmp1256.delete_data(true);	
_SequenceL_tmp1258.delete_data(true);	
_SequenceL_tmp1258.finished();	
_SequenceL_tmp1256.finished();	
}
else
{
_SequenceL__Arg_lowestDigitChar.setSize(1 > 0 ? 1 : 0);	
_SequenceL__Arg_lowestDigit = (_SequenceL__Arg_number % 10);	/*Conversion.sl:65: number mod 10*/
SequenceL_intToChar_2(_SequenceL__Arg_lowestDigit, (*(_SequenceL__Arg_lowestDigitChar.get_ptr(1))));	/*Conversion.sl:66: intToChar(lowestDigit)*/
if ((_SequenceL__Arg_number < 10))	/*Conversion.sl:72: lowestDigitChar when number < 10		else			intToString(number / 10) ++ lowestDigitChar*/
{
_SequenceL__resultConv = _SequenceL__Arg_lowestDigitChar;	/*Conversion.sl:70: lowestDigitChar*/
_SequenceL__Arg_lowestDigitChar.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.finished();	
}
else
{
_SequenceL_tmp1264 = (_SequenceL__Arg_number / 10);	/*Conversion.sl:72: number / 10*/
SequenceL_intToString_2(_SequenceL_tmp1264, _SequenceL_tmp1265);	/*Conversion.sl:72: intToString(number / 10)*/
_appendF(_SequenceL_tmp1265, _SequenceL__Arg_lowestDigitChar, _SequenceL__resultConv);	/*Conversion.sl:72: intToString(number / 10) ++ lowestDigitChar*/
_SequenceL_tmp1265.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.delete_data(true);	
_SequenceL__Arg_lowestDigitChar.finished();	
_SequenceL_tmp1265.finished();	
}
}
}
void SequenceL_allButLast_1(Sequence< char > &_SequenceL__Arg_list, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:157: list[1 ... (size(list) - 1)]*/
}
void SequenceL_delimitWorker_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp1282(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_strings.size());	/*Sequence.sl:65: strings[i] ++ [delimiter]*/
if ((_SequenceL__Arg_strings.size() >= 1))	
{
_SequenceL_tmp1282.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1282.get_ptr(1))) = _SequenceL__Arg_delimiter;	/*Sequence.sl:65: delimiter*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_strings.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
append((*(_SequenceL__Arg_strings.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1282, (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*Sequence.sl:65: strings[i] ++ [delimiter]*/
}
_SequenceL_tmp1282.delete_data(true);	
_SequenceL_tmp1282.finished();	
}
void SequenceL_MFunctionToString_0(_sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, Sequence< char > &_SequenceL__resultConv)
{
Sequence< Sequence< char > > _SequenceL__Arg_args(cspace);
Sequence< char > _SequenceL_tmp1304(cspace);
Sequence< char > _SequenceL_tmp1302(cspace);
Sequence< char > _SequenceL_tmp1301(cspace);
Sequence< char > _SequenceL_tmp1303(cspace);
Sequence< char > _SequenceL_tmp1305(cspace);

_SequenceL__Arg_args.setSize(_SequenceL__Arg_MFunction.Arguments.size());	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1297=1,_stop_val__SequenceL__i1297=_SequenceL__Arg_args.size(); _SequenceL__i1297<=_stop_val__SequenceL__i1297; _SequenceL__i1297+=1)
{
(*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297)))._Reference();	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
SequenceL_MFunctionToString_0((*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1297))), (*(_SequenceL__Arg_args.get_ptr(_SequenceL__i1297))));	/*TuringMachineInterpreter.sl:45: MFunctionToString(MFunction.Arguments)*/
}
if ((_SequenceL__Arg_args.size() > 0))	/*TuringMachineInterpreter.sl:49: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")" when size(args) > 0		else			MFunction.ID*/
{
_SequenceL_tmp1301 = "(";	/*TuringMachineInterpreter.sl:47: "("*/
append(_SequenceL__Arg_MFunction.ID, _SequenceL_tmp1301, _SequenceL_tmp1302);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "("*/
_SequenceL_tmp1301.delete_data(true);	
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL_tmp1301.finished();	
SequenceL_delimit_1(_SequenceL__Arg_args, ',', _SequenceL_tmp1303);	/*TuringMachineInterpreter.sl:47: delimit(args, ',')*/
_SequenceL__Arg_args.delete_data(true);	
_SequenceL__Arg_args.finished();	
append(_SequenceL_tmp1302, _SequenceL_tmp1303, _SequenceL_tmp1304);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',')*/
_SequenceL_tmp1302.delete_data(true);	
_SequenceL_tmp1303.delete_data(true);	
_SequenceL_tmp1303.finished();	
_SequenceL_tmp1302.finished();	
_SequenceL_tmp1305 = ")";	/*TuringMachineInterpreter.sl:47: ")"*/
append(_SequenceL_tmp1304, _SequenceL_tmp1305, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:47: MFunction.ID ++ "(" ++ delimit(args, ',') ++ ")"*/
_SequenceL_tmp1304.delete_data(true);	
_SequenceL_tmp1305.delete_data(true);	
_SequenceL_tmp1305.finished();	
_SequenceL_tmp1304.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_MFunction.ID;	/*TuringMachineInterpreter.sl:49: MFunction.ID*/
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL__Arg_args.delete_data(true);	
_SequenceL__Arg_args.finished();	
}
}
void SequenceL_duplicate_1(char _SequenceL__Arg_element, int _SequenceL__Arg_times, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_times > 0 ? _SequenceL__Arg_times : 0);	/*Sequence.sl:82: element*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_times; _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_element;	/*Sequence.sl:82: element*/
}
}
void SequenceL_GetUtmOut_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1360;
Sequence< char > _SequenceL_tmp1363(cspace);
bool _SequenceL__invariant_opttmp4;
bool _SequenceL_tmp1364;
Sequence< Sequence< char > > _SequenceL__Arg_splitTape(cspace);
Sequence< char > _SequenceL_tmp1359(cspace);

SequenceL_split_1(_SequenceL__Arg_State.Tape, ':', _SequenceL__Arg_splitTape);	/*TuringMachineInterpreter.sl:409: split(State.Tape, ':')*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_splitTape.size());	/*TuringMachineInterpreter.sl:413: '0' when equalList(splitTape[i], "_0_")	 	else	 		'1' when equalList(splitTape[i], "_1_")*/
_SequenceL__resultConv.create_map();	
if ((_SequenceL__Arg_splitTape.size() >= 1))	
{
_SequenceL_tmp1359 = "_0_";	/*TuringMachineInterpreter.sl:411: "_0_"*/
}
if ((_SequenceL__Arg_splitTape.size() >= 1))	
{
_SequenceL__invariant_opttmp4 = true;	
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_splitTape.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp1360 = eq_list((*(_SequenceL__Arg_splitTape.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1359);	/*TuringMachineInterpreter.sl:412: equalList(splitTape[i], "_0_")*/
if (_SequenceL_tmp1360)	/*TuringMachineInterpreter.sl:413: '0' when equalList(splitTape[i], "_0_")	 	else	 		'1' when equalList(splitTape[i], "_1_")*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = '0';	/*TuringMachineInterpreter.sl:411: '0'*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
if (_SequenceL__invariant_opttmp4)	
{
_SequenceL_tmp1363 = "_1_";	/*TuringMachineInterpreter.sl:413: "_1_"*/
_SequenceL__invariant_opttmp4 = false;	
}
_SequenceL_tmp1364 = eq_list((*(_SequenceL__Arg_splitTape.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp1363);	/*TuringMachineInterpreter.sl:413: equalList(splitTape[i], "_1_")*/
if (_SequenceL_tmp1364)	/*TuringMachineInterpreter.sl:413: '1' when equalList(splitTape[i], "_1_")*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = '1';	/*TuringMachineInterpreter.sl:413: '1'*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__Arg_splitTape.delete_data(true);	
_SequenceL_tmp1359.delete_data(true);	
_SequenceL_tmp1359.finished();	
_SequenceL__Arg_splitTape.finished();	
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_TrimTapeBegin_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, _sl_STATE_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_tape_tco(cspace);
int _SequenceL___Arg_position_tco;
char _SequenceL_tmp1489;
Sequence< char > _SequenceL_tmp1495(cspace);
int _SequenceL_tmp1496;

_SequenceL___Arg_tape_tco.hard_copy(_SequenceL__Arg_tape,__LINE__);	
_SequenceL___Arg_position_tco = _SequenceL__Arg_position;	
TrimTapeBegin_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_position_tco == 1))	/*TuringMachineInterpreter.sl:308: (CurrentPosition: position, Tape: tape) when position = 1	else		(CurrentPosition: position, Tape: tape) when not(head(tape) = SPACE_CHAR)	else		TrimTapeBegin(tail(tape), position - 1)*/
{
_SequenceL__resultConv.CurrentPosition = _SequenceL___Arg_position_tco;	/*TuringMachineInterpreter.sl:304: position*/
_SequenceL__resultConv.Tape = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:304: tape*/
}
else
{
_SequenceL_tmp1489 = _SequenceL___Arg_tape_tco.head();	/*TuringMachineInterpreter.sl:306: head(tape)*/
if (!(_SequenceL_tmp1489 == _SequenceL_SPACE_CHAR_0))	/*TuringMachineInterpreter.sl:308: (CurrentPosition: position, Tape: tape) when not(head(tape) = SPACE_CHAR)	else		TrimTapeBegin(tail(tape), position - 1)*/
{
_SequenceL__resultConv.CurrentPosition = _SequenceL___Arg_position_tco;	/*TuringMachineInterpreter.sl:306: position*/
_SequenceL__resultConv.Tape = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:306: tape*/
}
else
{
_SequenceL___Arg_tape_tco.tail(_SequenceL_tmp1495);	/*TuringMachineInterpreter.sl:308: tail(tape)*/
_SequenceL_tmp1496 = (_SequenceL___Arg_position_tco - 1);	/*TuringMachineInterpreter.sl:308: position - 1*/
_swap(_SequenceL___Arg_tape_tco, _SequenceL_tmp1495);	
_SequenceL___Arg_position_tco = _SequenceL_tmp1496;	
goto TrimTapeBegin_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:308: TrimTapeBegin(tail(tape), position - 1)*/
}
}
_SequenceL_tmp1495.delete_data(true);	
_SequenceL_tmp1495.finished();	
}
void SequenceL_last_1(Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:153: list[size(list)]*/
}
void SequenceL_setElementAt_1(Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_location, char _SequenceL__Arg_newElement, Sequence< char > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_list.onlyInstance())	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
_SequenceL__resultConv = _SequenceL__Arg_list;	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, _SequenceL__Arg_location),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_list.size(), _SequenceL__Arg_location); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!(_SequenceL__Index_i == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL_EraseOperation_0(int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{
char _SequenceL_tmp1546;

_SequenceL_tmp1546 = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:355: SPACE_CHAR*/
SequenceL_PrintOperation_0(_SequenceL_tmp1546, _SequenceL__Arg_Position, _SequenceL__Arg_Tape, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:355: PrintOperation(SPACE_CHAR, Position, Tape)*/
}
void SequenceL_PrintOperation_0(char _SequenceL__Arg_Symbol, int _SequenceL__Arg_Position, Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_finalTape(cspace);
Sequence< char > _SequenceL__Arg_expandedTape(cspace);
Sequence< char > _SequenceL_tmp1551(cspace);
char _SequenceL_tmp1547;
int _SequenceL__Arg_diff;

_SequenceL_tmp1547 = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:349: SPACE_CHAR*/
if ((_SequenceL__Arg_Position > _SequenceL__Arg_Tape.size()))	/*TuringMachineInterpreter.sl:348: Position - size(Tape) when Position > size(Tape) else 0*/
{
_SequenceL__Arg_diff = (_SequenceL__Arg_Position - _SequenceL__Arg_Tape.size());	/*TuringMachineInterpreter.sl:348: Position - size(Tape)*/
}
else
{
_SequenceL__Arg_diff = 0;	/*TuringMachineInterpreter.sl:348: 0*/
}
SequenceL_duplicate_1(_SequenceL_tmp1547, _SequenceL__Arg_diff, _SequenceL_tmp1551);	/*TuringMachineInterpreter.sl:349: duplicate(SPACE_CHAR, diff)*/
append(_SequenceL__Arg_Tape, _SequenceL_tmp1551, _SequenceL__Arg_expandedTape);	/*TuringMachineInterpreter.sl:349: Tape ++ duplicate(SPACE_CHAR, diff)*/
_SequenceL_tmp1551.delete_data(true);	
_SequenceL_tmp1551.finished();	
SequenceL_setElementAt_1(_SequenceL__Arg_expandedTape, _SequenceL__Arg_Position, _SequenceL__Arg_Symbol, _SequenceL__Arg_finalTape);	/*TuringMachineInterpreter.sl:350: setElementAt(expandedTape, Position, Symbol)*/
_SequenceL__Arg_expandedTape.delete_data(true);	
_SequenceL__Arg_expandedTape.finished();	
_SequenceL__resultConv = _SequenceL__Arg_finalTape;	/*TuringMachineInterpreter.sl:352: finalTape*/
_SequenceL__Arg_finalTape.delete_data(true);	
_SequenceL__Arg_finalTape.finished();	
}
void SequenceL_ApplyOperation_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< char > &_SequenceL__Arg_Operation, _sl_STATE_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_trimmedTape(cspace);
Sequence< char > _SequenceL__Arg_newTape(cspace);
char _SequenceL_tmp1610;
char _SequenceL_tmp1614;
Sequence< char > _SequenceL_tmp1613(cspace);
char _SequenceL_tmp1618;
char _SequenceL_tmp1624;
Sequence< char > _SequenceL_tmp1630(cspace);
char _SequenceL_tmp1634;
Sequence< char > _SequenceL_tmp1642(cspace);
int _SequenceL__Arg_newPosition;
char _SequenceL_tmp1645;
char _SequenceL_tmp1652;
char _SequenceL_tmp1657;

if ((_SequenceL__Arg_Operation.size() == 0))	/*TuringMachineInterpreter.sl:344: State when size(Operation) = 0		else			TrimTapeBegin(trimmedTape, newPosition)*/
{
_SequenceL__resultConv = _SequenceL__Arg_State;	/*TuringMachineInterpreter.sl:342: State*/
}
else
{
_SequenceL_tmp1610 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:321: head(Operation)*/
if ((_SequenceL_tmp1610 == 'P'))	/*TuringMachineInterpreter.sl:329: PrintOperation(head(tail(Operation)), State.CurrentPosition, State.Tape) when head(Operation) = 'P'			else				EraseOperation(State.CurrentPosition, State.Tape) when head(Operation) = 'E'			else				[SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL__Arg_Operation.tail(_SequenceL_tmp1613);	/*TuringMachineInterpreter.sl:321: tail(Operation)*/
_SequenceL_tmp1614 = _SequenceL_tmp1613.head();	/*TuringMachineInterpreter.sl:321: head(tail(Operation))*/
_SequenceL_tmp1613.delete_data(true);	
_SequenceL_tmp1613.finished();	
SequenceL_PrintOperation_0(_SequenceL_tmp1614, _SequenceL__Arg_State.CurrentPosition, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:321: PrintOperation(head(tail(Operation)), State.CurrentPosition, State.Tape)*/
}
else
{
_SequenceL_tmp1618 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:323: head(Operation)*/
if ((_SequenceL_tmp1618 == 'E'))	/*TuringMachineInterpreter.sl:329: EraseOperation(State.CurrentPosition, State.Tape) when head(Operation) = 'E'			else				[SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
SequenceL_EraseOperation_0(_SequenceL__Arg_State.CurrentPosition, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:323: EraseOperation(State.CurrentPosition, State.Tape)*/
}
else
{
_SequenceL_tmp1624 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:325: head(Operation)*/
if (((_SequenceL_tmp1624 == 'L') && (_SequenceL__Arg_State.CurrentPosition == 1)))	/*TuringMachineInterpreter.sl:329: [SPACE_CHAR] ++ State.Tape when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL_tmp1630.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1630.get_ptr(1))) = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:325: SPACE_CHAR*/
append(_SequenceL_tmp1630, _SequenceL__Arg_State.Tape, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:325: [SPACE_CHAR] ++ State.Tape*/
_SequenceL_tmp1630.delete_data(true);	
_SequenceL_tmp1630.finished();	
}
else
{
_SequenceL_tmp1634 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:327: head(Operation)*/
if (((_SequenceL_tmp1634 == 'R') && (_SequenceL__Arg_State.CurrentPosition == _SequenceL__Arg_State.Tape.size())))	/*TuringMachineInterpreter.sl:329: State.Tape ++ [SPACE_CHAR] when head(Operation) = 'R' and State.CurrentPosition = size(State.Tape)			else				State.Tape*/
{
_SequenceL_tmp1642.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1642.get_ptr(1))) = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:327: SPACE_CHAR*/
append(_SequenceL__Arg_State.Tape, _SequenceL_tmp1642, _SequenceL__Arg_newTape);	/*TuringMachineInterpreter.sl:327: State.Tape ++ [SPACE_CHAR]*/
_SequenceL_tmp1642.delete_data(true);	
_SequenceL_tmp1642.finished();	
}
else
{
_SequenceL__Arg_newTape = _SequenceL__Arg_State.Tape;	/*TuringMachineInterpreter.sl:329: State.Tape*/
}
}
}
}
_SequenceL_tmp1645 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:332: head(Operation)*/
if (((_SequenceL_tmp1645 == 'L') && (_SequenceL__Arg_State.CurrentPosition == 1)))	/*TuringMachineInterpreter.sl:338: 1 when head(Operation) = 'L' and State.CurrentPosition = 1			else				State.CurrentPosition + 1 when head(Operation) = 'R'			else				State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = 1;	/*TuringMachineInterpreter.sl:332: 1*/
}
else
{
_SequenceL_tmp1652 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:334: head(Operation)*/
if ((_SequenceL_tmp1652 == 'R'))	/*TuringMachineInterpreter.sl:338: State.CurrentPosition + 1 when head(Operation) = 'R'			else				State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = (_SequenceL__Arg_State.CurrentPosition + 1);	/*TuringMachineInterpreter.sl:334: State.CurrentPosition + 1*/
}
else
{
_SequenceL_tmp1657 = _SequenceL__Arg_Operation.head();	/*TuringMachineInterpreter.sl:336: head(Operation)*/
if ((_SequenceL_tmp1657 == 'L'))	/*TuringMachineInterpreter.sl:338: State.CurrentPosition - 1 when head(Operation) = 'L'			else				State.CurrentPosition*/
{
_SequenceL__Arg_newPosition = (_SequenceL__Arg_State.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:336: State.CurrentPosition - 1*/
}
else
{
_SequenceL__Arg_newPosition = _SequenceL__Arg_State.CurrentPosition;	/*TuringMachineInterpreter.sl:338: State.CurrentPosition*/
}
}
}
SequenceL_TrimTapeEnd_0(_SequenceL__Arg_newTape, _SequenceL__Arg_newPosition, _SequenceL__Arg_trimmedTape);	/*TuringMachineInterpreter.sl:340: TrimTapeEnd(newTape, newPosition)*/
_SequenceL__Arg_newTape.delete_data(true);	
_SequenceL__Arg_newTape.finished();	
SequenceL_TrimTapeBegin_0(_SequenceL__Arg_trimmedTape, _SequenceL__Arg_newPosition, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:344: TrimTapeBegin(trimmedTape, newPosition)*/
_SequenceL__Arg_trimmedTape.delete_data(true);	
_SequenceL__Arg_trimmedTape.finished();	
}
}
void SequenceL_ApplyOperations_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL___Arg_State_tco(cspace);
Sequence< Sequence< char > > _SequenceL___Arg_Operations_tco(cspace);
_sl_STATE_0 _SequenceL__Arg_newState(cspace);
Sequence< char > _SequenceL_tmp1665(cspace);
Sequence< Sequence< char > > _SequenceL_tmp1666(cspace);
_sl_STATE_0 _SequenceL__tmp__Arg_State_tco(cspace);

_SequenceL___Arg_State_tco._hard_copy(_SequenceL__Arg_State,__LINE__);	
_SequenceL___Arg_Operations_tco.hard_copy(_SequenceL__Arg_Operations,__LINE__);	
ApplyOperations_TuringMachineInterpreter_label_tco:	
if ((_SequenceL___Arg_Operations_tco.size() == 0))	/*TuringMachineInterpreter.sl:316: State when size(Operations) = 0		else			ApplyOperations(newState, tail(Operations))*/
{
_SequenceL__resultConv = _SequenceL___Arg_State_tco;	/*TuringMachineInterpreter.sl:314: State*/
}
else
{
_SequenceL___Arg_Operations_tco.head(_SequenceL_tmp1665);	/*TuringMachineInterpreter.sl:312: head(Operations)*/
SequenceL_ApplyOperation_0(_SequenceL___Arg_State_tco, _SequenceL_tmp1665, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:312: ApplyOperation(State, head(Operations))*/
_SequenceL___Arg_Operations_tco.tail(_SequenceL_tmp1666);	/*TuringMachineInterpreter.sl:316: tail(Operations)*/
_SequenceL__tmp__Arg_State_tco = _SequenceL__Arg_newState;	
_SequenceL___Arg_State_tco = _SequenceL__tmp__Arg_State_tco;	
_swap(_SequenceL___Arg_Operations_tco, _SequenceL_tmp1666);	
goto ApplyOperations_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:316: ApplyOperations(newState, tail(Operations))*/
}
_SequenceL__Arg_newState._delete_data(true);	
_SequenceL_tmp1665.delete_data(true);	
_SequenceL_tmp1666.delete_data(true);	
_SequenceL__tmp__Arg_State_tco._delete_data(true);	
_SequenceL___Arg_State_tco._delete_data(true);	
_SequenceL___Arg_State_tco._finished();	
_SequenceL__tmp__Arg_State_tco._finished();	
_SequenceL_tmp1666.finished();	
_SequenceL_tmp1665.finished();	
_SequenceL__Arg_newState._finished();	
}
void SequenceL_Execute_0(_sl_STATE_0 &_SequenceL__Arg_State, _sl_MCONFIG_0 &_SequenceL__Arg_mConfig, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_newState(cspace);

_SequenceL__resultConv.CurrentConfig.val_assign() = _SequenceL__Arg_mConfig.FinalConfig.val("TuringMachineInterpreter.sl:446: mConfig.FinalConfig");	/*TuringMachineInterpreter.sl:446: mConfig.FinalConfig*/
SequenceL_ApplyOperations_0(_SequenceL__Arg_State, _SequenceL__Arg_mConfig.Operations, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:444: ApplyOperations(State, mConfig.Operations)*/
_SequenceL__resultConv.CurrentPosition = _SequenceL__Arg_newState.CurrentPosition;	/*TuringMachineInterpreter.sl:446: newState.CurrentPosition*/
_SequenceL__resultConv.Tape = _SequenceL__Arg_newState.Tape;	/*TuringMachineInterpreter.sl:446: newState.Tape*/
_SequenceL__Arg_newState._delete_data(true);	
_SequenceL__Arg_newState._finished();	
}
void SequenceL_HeadOfEach_0(Sequence< Sequence< char > > &_SequenceL__Arg_strings, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_strings.size());	/*TuringMachineInterpreter.sl:62: head(strings[i])*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_strings.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_strings.get_ptr(_SequenceL__Index_i))).head();	/*TuringMachineInterpreter.sl:62: head(strings[i])*/
}
}
void SequenceL_equalListNT_1(Sequence< char > &_SequenceL__Arg_list1, Sequence< char > &_SequenceL__Arg_list2, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = eq_list(_SequenceL__Arg_list1, _SequenceL__Arg_list2);	/*Sequence.sl:8: equalList(list1, list2)*/
}
void SequenceL_Matches_0(char _SequenceL__Arg_currentSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_symbols, bool &_SequenceL__resultConv)
{
bool _SequenceL_tmp1747;
Sequence< char > _SequenceL_tmp1744(cspace);
Sequence< bool > _SequenceL_tmp1745(cspace);
bool _SequenceL_tmp1757;
Sequence< char > _SequenceL_tmp1754(cspace);
Sequence< bool > _SequenceL_tmp1755(cspace);
bool _SequenceL_tmp1764;
Sequence< char > _SequenceL_tmp1761(cspace);
Sequence< bool > _SequenceL_tmp1762(cspace);

if ((_SequenceL__Arg_symbols.size() == 0))	/*TuringMachineInterpreter.sl:216: true when size(symbols) = 0	else		true when currentSymbol = SPACE_CHAR and some(equalListNT("none", symbols))	else		true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:208: true*/
}
else
{
_SequenceL_tmp1744 = "none";	/*TuringMachineInterpreter.sl:210: "none"*/
_SequenceL_tmp1745.setSize(_SequenceL__Arg_symbols.size());	/*TuringMachineInterpreter.sl:210: equalListNT("none", symbols)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1746=1,_stop_val__SequenceL__i1746=_SequenceL_tmp1745.size(); _SequenceL__i1746<=_stop_val__SequenceL__i1746; _SequenceL__i1746+=1)
{
SequenceL_equalListNT_1(_SequenceL_tmp1744, (*(_SequenceL__Arg_symbols.get_ptr(_SequenceL__i1746))), (*(_SequenceL_tmp1745.get_ptr(_SequenceL__i1746))));	/*TuringMachineInterpreter.sl:210: equalListNT("none", symbols)*/
}
_SequenceL_tmp1744.delete_data(true);	
_SequenceL_tmp1744.finished();	
_SequenceL_tmp1747 = some(_SequenceL_tmp1745);	/*TuringMachineInterpreter.sl:211: some(equalListNT("none", symbols))*/
_SequenceL_tmp1745.delete_data(true);	
_SequenceL_tmp1745.finished();	
if (((_SequenceL__Arg_currentSymbol == _SequenceL_SPACE_CHAR_0) && _SequenceL_tmp1747))	/*TuringMachineInterpreter.sl:216: true when currentSymbol = SPACE_CHAR and some(equalListNT("none", symbols))	else		true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:210: true*/
}
else
{
_SequenceL_tmp1754 = "any";	/*TuringMachineInterpreter.sl:212: "any"*/
_SequenceL_tmp1755.setSize(_SequenceL__Arg_symbols.size());	/*TuringMachineInterpreter.sl:212: equalListNT("any", symbols)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1756=1,_stop_val__SequenceL__i1756=_SequenceL_tmp1755.size(); _SequenceL__i1756<=_stop_val__SequenceL__i1756; _SequenceL__i1756+=1)
{
SequenceL_equalListNT_1(_SequenceL_tmp1754, (*(_SequenceL__Arg_symbols.get_ptr(_SequenceL__i1756))), (*(_SequenceL_tmp1755.get_ptr(_SequenceL__i1756))));	/*TuringMachineInterpreter.sl:212: equalListNT("any", symbols)*/
}
_SequenceL_tmp1754.delete_data(true);	
_SequenceL_tmp1754.finished();	
_SequenceL_tmp1757 = some(_SequenceL_tmp1755);	/*TuringMachineInterpreter.sl:213: some(equalListNT("any", symbols))*/
_SequenceL_tmp1755.delete_data(true);	
_SequenceL_tmp1755.finished();	
if ((!(_SequenceL__Arg_currentSymbol == _SequenceL_SPACE_CHAR_0) && _SequenceL_tmp1757))	/*TuringMachineInterpreter.sl:216: true when not(currentSymbol = SPACE_CHAR) and some(equalListNT("any", symbols))	else		true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:212: true*/
}
else
{
SequenceL_HeadOfEach_0(_SequenceL__Arg_symbols, _SequenceL_tmp1761);	/*TuringMachineInterpreter.sl:214: HeadOfEach(symbols)*/
_SequenceL_tmp1762.setSize(_SequenceL_tmp1761.size());	/*TuringMachineInterpreter.sl:214: currentSymbol = HeadOfEach(symbols)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1763=1,_stop_val__SequenceL__i1763=_SequenceL_tmp1762.size(); _SequenceL__i1763<=_stop_val__SequenceL__i1763; _SequenceL__i1763+=1)
{
(*(_SequenceL_tmp1762.get_ptr(_SequenceL__i1763))) = (_SequenceL__Arg_currentSymbol == (*(_SequenceL_tmp1761.get_ptr(_SequenceL__i1763))));	/*TuringMachineInterpreter.sl:214: currentSymbol = HeadOfEach(symbols)*/
}
_SequenceL_tmp1761.delete_data(true);	
_SequenceL_tmp1761.finished();	
_SequenceL_tmp1764 = some(_SequenceL_tmp1762);	/*TuringMachineInterpreter.sl:215: some(currentSymbol = HeadOfEach(symbols))*/
_SequenceL_tmp1762.delete_data(true);	
_SequenceL_tmp1762.finished();	
if (_SequenceL_tmp1764)	/*TuringMachineInterpreter.sl:216: true when some(currentSymbol = HeadOfEach(symbols))	else		false*/
{
_SequenceL__resultConv = true;	/*TuringMachineInterpreter.sl:214: true*/
}
else
{
_SequenceL__resultConv = false;	/*TuringMachineInterpreter.sl:216: false*/
}
}
}
}
}
void SequenceL_ReplaceInMFunction_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_MFunction, _sl_MFUNCTION_0 &_SequenceL__resultConv)
{
_sl_MFUNCTION_0 _SequenceL__Arg_newMFunction(cspace);
Sequence< _sl_MFUNCTION_0 > _SequenceL__Arg_args(cspace);
bool _SequenceL_tmp1816;

if ((_SequenceL__Arg_MFunction.Arguments.size() > 0))	/*TuringMachineInterpreter.sl:275: (ID: MFunction.ID, Arguments: args) when size(MFunction.Arguments) > 0			else				NewSymbol when size(MFunction.Arguments) = 0 and equalList(MFunction.ID, OldSymbol.ID)			else				MFunction*/
{
_SequenceL__Arg_newMFunction.ID = _SequenceL__Arg_MFunction.ID;	/*TuringMachineInterpreter.sl:271: MFunction.ID*/
_SequenceL__Arg_args.setSize(_SequenceL__Arg_MFunction.Arguments.size());	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1810=1,_stop_val__SequenceL__i1810=_SequenceL__Arg_args.size(); _SequenceL__i1810<=_stop_val__SequenceL__i1810; _SequenceL__i1810+=1)
{
_SequenceL__Arg_NewSymbol._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
_SequenceL__Arg_OldSymbol._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
(*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1810)))._Reference();	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
SequenceL_ReplaceInMFunction_0(_SequenceL__Arg_NewSymbol, _SequenceL__Arg_OldSymbol, (*(_SequenceL__Arg_MFunction.Arguments.get_ptr(_SequenceL__i1810))), (*(_SequenceL__Arg_args.get_ptr(_SequenceL__i1810))));	/*TuringMachineInterpreter.sl:269: ReplaceInMFunction(NewSymbol, OldSymbol, MFunction.Arguments)*/
}
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL__Arg_NewSymbol._delete_data(true);	
_SequenceL__Arg_OldSymbol._delete_data(true);	
_SequenceL__Arg_newMFunction.Arguments = _SequenceL__Arg_args;	/*TuringMachineInterpreter.sl:271: args*/
_SequenceL__Arg_args.delete_data(true);	
_SequenceL__Arg_args.finished();	
}
else
{
_SequenceL_tmp1816 = eq_list(_SequenceL__Arg_MFunction.ID, _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:274: equalList(MFunction.ID, OldSymbol.ID)*/
_SequenceL__Arg_OldSymbol._delete_data(true);	
if (((_SequenceL__Arg_MFunction.Arguments.size() == 0) && _SequenceL_tmp1816))	/*TuringMachineInterpreter.sl:275: NewSymbol when size(MFunction.Arguments) = 0 and equalList(MFunction.ID, OldSymbol.ID)			else				MFunction*/
{
_SequenceL__Arg_newMFunction = _SequenceL__Arg_NewSymbol;	/*TuringMachineInterpreter.sl:273: NewSymbol*/
_SequenceL__Arg_NewSymbol._delete_data(true);	
_SequenceL__Arg_MFunction._delete_data(true);	
}
else
{
_SequenceL__Arg_newMFunction = _SequenceL__Arg_MFunction;	/*TuringMachineInterpreter.sl:275: MFunction*/
_SequenceL__Arg_MFunction._delete_data(true);	
_SequenceL__Arg_NewSymbol._delete_data(true);	
}
}
_SequenceL__resultConv = _SequenceL__Arg_newMFunction;	/*TuringMachineInterpreter.sl:277: newMFunction*/
_SequenceL__Arg_newMFunction._delete_data(true);	
_SequenceL__Arg_newMFunction._finished();	
}
void SequenceL_ReplaceInOperations_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Operations, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1843;
Sequence< char > _SequenceL_tmp1841(cspace);
Sequence< char > _SequenceL_tmp1846(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_Operations.size());	/*TuringMachineInterpreter.sl:289: Operations[i] when size(Operations[i]) <= 1	else 		[head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_Operations.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).size() <= 1))	/*TuringMachineInterpreter.sl:289: Operations[i] when size(Operations[i]) <= 1	else 		[head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:285: Operations[i]*/
}
else
{
(*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).tail(_SequenceL_tmp1841);	/*TuringMachineInterpreter.sl:287: tail(Operations[i])*/
_SequenceL_tmp1843 = eq_list(_SequenceL_tmp1841, _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:288: equalList(tail(Operations[i]), OldSymbol.ID)*/
if (((_SequenceL__Arg_NewSymbol.Arguments.size() == 0) && _SequenceL_tmp1843))	/*TuringMachineInterpreter.sl:289: [head(Operations[i])] ++ NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(tail(Operations[i]), OldSymbol.ID)	else		Operations[i]*/
{
_SequenceL_tmp1846.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1846.get_ptr(1))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i))).head();	/*TuringMachineInterpreter.sl:287: head(Operations[i])*/
append(_SequenceL_tmp1846, _SequenceL__Arg_NewSymbol.ID, (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*TuringMachineInterpreter.sl:287: [head(Operations[i])] ++ NewSymbol.ID*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Operations.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:289: Operations[i]*/
}
}
}
}
void SequenceL_ReplaceScanned_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, char _SequenceL__Arg_symbol, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
Sequence< Sequence< char > > _SequenceL__Arg_newOperations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_symbolArgument(cspace);
Sequence< char > _SequenceL_tmp1853(cspace);
_sl_MFUNCTION_0 _SequenceL_tmp1855(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_newFinalConfig(cspace);
_sl_MFUNCTION_0 _SequenceL_tmp1857(cspace);

_SequenceL__resultConv.Label.val_assign() = _SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:250: TargetMConfig.Label");	/*TuringMachineInterpreter.sl:250: TargetMConfig.Label*/
_SequenceL__resultConv.Symbols = _SequenceL__Arg_TargetMConfig.Symbols;	/*TuringMachineInterpreter.sl:250: TargetMConfig.Symbols*/
_SequenceL_tmp1853.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp1853.get_ptr(1))) = _SequenceL__Arg_symbol;	/*TuringMachineInterpreter.sl:246: symbol*/
SequenceL_SINGLETON_FUNCTION_0(_SequenceL_tmp1853, _SequenceL__Arg_symbolArgument);	/*TuringMachineInterpreter.sl:246: SINGLETON_FUNCTION([symbol])*/
_SequenceL_tmp1853.delete_data(true);	
_SequenceL_tmp1853.finished();	
_SequenceL_tmp1855 = _SequenceL_SCANNED_FUNCTION_0;	/*TuringMachineInterpreter.sl:247: SCANNED_FUNCTION*/
SequenceL_ReplaceInOperations_0(_SequenceL__Arg_symbolArgument, _SequenceL_tmp1855, _SequenceL__Arg_TargetMConfig.Operations, _SequenceL__Arg_newOperations);	/*TuringMachineInterpreter.sl:247: ReplaceInOperations(symbolArgument, SCANNED_FUNCTION, TargetMConfig.Operations)*/
_SequenceL_tmp1855._delete_data(true);	
_SequenceL_tmp1855._finished();	
_SequenceL__resultConv.Operations = _SequenceL__Arg_newOperations;	/*TuringMachineInterpreter.sl:250: newOperations*/
_SequenceL__Arg_newOperations.delete_data(true);	
_SequenceL__Arg_newOperations.finished();	
_SequenceL_tmp1857 = _SequenceL_SCANNED_FUNCTION_0;	/*TuringMachineInterpreter.sl:248: SCANNED_FUNCTION*/
_SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)")._Reference();	/*TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)*/
SequenceL_ReplaceInMFunction_0(_SequenceL__Arg_symbolArgument, _SequenceL_tmp1857, _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)"), _SequenceL__Arg_newFinalConfig);	/*TuringMachineInterpreter.sl:248: ReplaceInMFunction(symbolArgument, SCANNED_FUNCTION, TargetMConfig.FinalConfig)*/
_SequenceL_tmp1857._finished();	
_SequenceL__Arg_symbolArgument._finished();	
_SequenceL__resultConv.FinalConfig.val_assign() = _SequenceL__Arg_newFinalConfig;	/*TuringMachineInterpreter.sl:250: newFinalConfig*/
_SequenceL__Arg_newFinalConfig._delete_data(true);	
_SequenceL__Arg_newFinalConfig._finished();	
}
void SequenceL_ReplaceInSymbols_0(_sl_MFUNCTION_0 &_SequenceL__Arg_NewSymbol, _sl_MFUNCTION_0 &_SequenceL__Arg_OldSymbol, Sequence< Sequence< char > > &_SequenceL__Arg_Symbols, Sequence< Sequence< char > > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1918;
bool _SequenceL_tmp1916;

_SequenceL__resultConv.setSize(_SequenceL__Arg_Symbols.size());	/*TuringMachineInterpreter.sl:282: NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(Symbols[i], OldSymbol.ID)	else		Symbols[i]*/
if ((_SequenceL__Arg_Symbols.size() >= 1))	
{
_SequenceL_tmp1916 = (_SequenceL__Arg_NewSymbol.Arguments.size() == 0);	/*TuringMachineInterpreter.sl:280: size(NewSymbol.Arguments) = 0*/
}
else
{
_SequenceL_tmp1916 = 0;	
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_Symbols.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp1918 = eq_list((*(_SequenceL__Arg_Symbols.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_OldSymbol.ID);	/*TuringMachineInterpreter.sl:281: equalList(Symbols[i], OldSymbol.ID)*/
if ((_SequenceL_tmp1916 && _SequenceL_tmp1918))	/*TuringMachineInterpreter.sl:282: NewSymbol.ID when size(NewSymbol.Arguments) = 0 and equalList(Symbols[i], OldSymbol.ID)	else		Symbols[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_NewSymbol.ID;	/*TuringMachineInterpreter.sl:280: NewSymbol.ID*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Symbols.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:282: Symbols[i]*/
}
}
}
void SequenceL_ReplaceWorker_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, int _SequenceL__Arg_Argument, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
_sl_MCONFIG_0 _SequenceL__Arg_newTargetConfig(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_newSymbols(cspace);
Sequence< Sequence< char > > _SequenceL__Arg_newOperations(cspace);
_sl_MFUNCTION_0 _SequenceL__Arg_newFinalConfig(cspace);
int _SequenceL_tmp1942;

if ((_SequenceL__Arg_Argument > _SequenceL__Arg_CurrentMFunction.Arguments.size()))	/*TuringMachineInterpreter.sl:265: (Label: CurrentMFunction, Symbols: TargetMConfig.Symbols, Operations: TargetMConfig.Operations, FinalConfig: TargetMConfig.FinalConfig)				when Argument > size(CurrentMFunction.Arguments)		else			ReplaceWorker(newTargetConfig, CurrentMFunction, Argument + 1)*/
{
_SequenceL__resultConv.Label.val_assign() = _SequenceL__Arg_CurrentMFunction;	/*TuringMachineInterpreter.sl:262: CurrentMFunction*/
_SequenceL__Arg_CurrentMFunction._delete_data(true);	
_SequenceL__resultConv.Symbols = _SequenceL__Arg_TargetMConfig.Symbols;	/*TuringMachineInterpreter.sl:262: TargetMConfig.Symbols*/
_SequenceL__resultConv.Operations = _SequenceL__Arg_TargetMConfig.Operations;	/*TuringMachineInterpreter.sl:262: TargetMConfig.Operations*/
_SequenceL__resultConv.FinalConfig.val_assign() = _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:262: TargetMConfig.FinalConfig");	/*TuringMachineInterpreter.sl:262: TargetMConfig.FinalConfig*/
_SequenceL__Arg_TargetMConfig._delete_data(true);	
}
else
{
_SequenceL__Arg_newTargetConfig.Label.val_assign() = _SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:260: TargetMConfig.Label");	/*TuringMachineInterpreter.sl:260: TargetMConfig.Label*/
SequenceL_ReplaceInSymbols_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:257: ReplaceInSymbols(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Symbols)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.Symbols, _SequenceL__Arg_newSymbols);	/*TuringMachineInterpreter.sl:257: ReplaceInSymbols(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Symbols)*/
_SequenceL__Arg_newTargetConfig.Symbols = _SequenceL__Arg_newSymbols;	/*TuringMachineInterpreter.sl:260: newSymbols*/
_SequenceL__Arg_newSymbols.delete_data(true);	
_SequenceL__Arg_newSymbols.finished();	
SequenceL_ReplaceInOperations_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:258: ReplaceInOperations(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Operations)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.Operations, _SequenceL__Arg_newOperations);	/*TuringMachineInterpreter.sl:258: ReplaceInOperations(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.Operations)*/
_SequenceL__Arg_newTargetConfig.Operations = _SequenceL__Arg_newOperations;	/*TuringMachineInterpreter.sl:260: newOperations*/
_SequenceL__Arg_newOperations.delete_data(true);	
_SequenceL__Arg_newOperations.finished();	
(*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument)))._Reference();	/*TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)*/
(*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)").Arguments.get_ptr(_SequenceL__Arg_Argument)))._Reference();	/*TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)*/
_SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)")._Reference();	/*TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)*/
SequenceL_ReplaceInMFunction_0((*(_SequenceL__Arg_CurrentMFunction.Arguments.get_ptr(_SequenceL__Arg_Argument))), (*(_SequenceL__Arg_TargetMConfig.Label.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)").Arguments.get_ptr(_SequenceL__Arg_Argument))), _SequenceL__Arg_TargetMConfig.FinalConfig.val("TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)"), _SequenceL__Arg_newFinalConfig);	/*TuringMachineInterpreter.sl:259: ReplaceInMFunction(CurrentMFunction.Arguments[Argument], TargetMConfig.Label.Arguments[Argument], TargetMConfig.FinalConfig)*/
_SequenceL__Arg_TargetMConfig._delete_data(true);	
_SequenceL__Arg_newTargetConfig.FinalConfig.val_assign() = _SequenceL__Arg_newFinalConfig;	/*TuringMachineInterpreter.sl:260: newFinalConfig*/
_SequenceL__Arg_newFinalConfig._delete_data(true);	
_SequenceL__Arg_newFinalConfig._finished();	
_SequenceL_tmp1942 = (_SequenceL__Arg_Argument + 1);	/*TuringMachineInterpreter.sl:265: Argument + 1*/
SequenceL_ReplaceWorker_0(_SequenceL__Arg_newTargetConfig, _SequenceL__Arg_CurrentMFunction, _SequenceL_tmp1942, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:265: ReplaceWorker(newTargetConfig, CurrentMFunction, Argument + 1)*/
_SequenceL__Arg_newTargetConfig._finished();	
}
}
void SequenceL_Replace_0(_sl_MCONFIG_0 &_SequenceL__Arg_TargetMConfig, _sl_MFUNCTION_0 &_SequenceL__Arg_CurrentMFunction, _sl_MCONFIG_0 &_SequenceL__resultConv)
{

_SequenceL__Arg_TargetMConfig._Reference();	/*TuringMachineInterpreter.sl:253: ReplaceWorker(TargetMConfig, CurrentMFunction, 1)*/
_SequenceL__Arg_CurrentMFunction._Reference();	/*TuringMachineInterpreter.sl:253: ReplaceWorker(TargetMConfig, CurrentMFunction, 1)*/
SequenceL_ReplaceWorker_0(_SequenceL__Arg_TargetMConfig, _SequenceL__Arg_CurrentMFunction, 1, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:253: ReplaceWorker(TargetMConfig, CurrentMFunction, 1)*/
}
void SequenceL_GetConfigHelper_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, Sequence< _sl_MCONFIG_0 > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1946;
bool _SequenceL_tmp1954;
_sl_MCONFIG_0 _SequenceL__Arg_replaced(cspace);
_sl_MCONFIG_0 _SequenceL_tmp1952(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_mConfigs.size());	/*TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_mConfigs.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp1946 = eq_list((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))).Label.val("TuringMachineInterpreter.sl:228: equalList(mConfigs[i].Label.ID, mfunction.ID)").ID, _SequenceL__Arg_mfunction.ID);	/*TuringMachineInterpreter.sl:228: equalList(mConfigs[i].Label.ID, mfunction.ID)*/
if ((_SequenceL_tmp1946 && ((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))).Label.val("TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)").Arguments.size() == _SequenceL__Arg_mfunction.Arguments.size())))	/*TuringMachineInterpreter.sl:228: (replaced when Matches(symbol, replaced.Symbols)) 					when equalList(mConfigs[i].Label.ID, mfunction.ID) and size(mConfigs[i].Label.Arguments) = size(mfunction.Arguments)*/
{
SequenceL_Replace_0((*(_SequenceL__Arg_mConfigs.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_mfunction, _SequenceL_tmp1952);	/*TuringMachineInterpreter.sl:225: Replace(mConfigs[i], mfunction)*/
SequenceL_ReplaceScanned_0(_SequenceL_tmp1952, _SequenceL__Arg_symbol, _SequenceL__Arg_replaced);	/*TuringMachineInterpreter.sl:225: ReplaceScanned(Replace(mConfigs[i], mfunction), symbol)*/
SequenceL_Matches_0(_SequenceL__Arg_symbol, _SequenceL__Arg_replaced.Symbols, _SequenceL_tmp1954);	/*TuringMachineInterpreter.sl:227: Matches(symbol, replaced.Symbols)*/
if (_SequenceL_tmp1954)	/*TuringMachineInterpreter.sl:227: replaced when Matches(symbol, replaced.Symbols)*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_replaced;	/*TuringMachineInterpreter.sl:227: replaced*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_GetConfig_0(_sl_MFUNCTION_0 &_SequenceL__Arg_mfunction, char _SequenceL__Arg_symbol, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_MCONFIG_0 &_SequenceL__resultConv)
{
Sequence< _sl_MCONFIG_0 > _SequenceL__Arg_searchResults(cspace);

if ((_SequenceL__Arg_mfunction.ID.size() == 0))	/*TuringMachineInterpreter.sl:238: NULL_CONFIG when size(mfunction.ID) = 0		else			NULL_CONFIG when size(searchResults) = 0		else			searchResults[1]*/
{
_SequenceL__resultConv = _SequenceL_NULL_CONFIG_0;	/*TuringMachineInterpreter.sl:234: NULL_CONFIG*/
}
else
{
SequenceL_GetConfigHelper_0(_SequenceL__Arg_mfunction, _SequenceL__Arg_symbol, _SequenceL__Arg_mConfigs, _SequenceL__Arg_searchResults);	/*TuringMachineInterpreter.sl:232: GetConfigHelper(mfunction, symbol, mConfigs)*/
if ((_SequenceL__Arg_searchResults.size() == 0))	/*TuringMachineInterpreter.sl:238: NULL_CONFIG when size(searchResults) = 0		else			searchResults[1]*/
{
_SequenceL__resultConv = _SequenceL_NULL_CONFIG_0;	/*TuringMachineInterpreter.sl:236: NULL_CONFIG*/
_SequenceL__Arg_searchResults.delete_data(true);	
_SequenceL__Arg_searchResults.finished();	
}
else
{
_SequenceL__resultConv = (*(_SequenceL__Arg_searchResults.get_ptr(1)));	/*TuringMachineInterpreter.sl:238: searchResults[1]*/
_SequenceL__Arg_searchResults.delete_data(true);	
_SequenceL__Arg_searchResults.finished();	
}
}
}
void SequenceL_GetCurrentSymbol_0(_sl_STATE_0 &_SequenceL__Arg_State, char &_SequenceL__resultConv)
{

if (((_SequenceL__Arg_State.Tape.size() >= _SequenceL__Arg_State.CurrentPosition) && (_SequenceL__Arg_State.CurrentPosition > 0)))	/*TuringMachineInterpreter.sl:221: State.Tape[State.CurrentPosition] when size(State.Tape) >= State.CurrentPosition and State.CurrentPosition > 0	else 		SPACE_CHAR*/
{
_SequenceL__resultConv = (*(_SequenceL__Arg_State.Tape.get_ptr(_SequenceL__Arg_State.CurrentPosition)));	/*TuringMachineInterpreter.sl:219: State.Tape[State.CurrentPosition]*/
}
else
{
_SequenceL__resultConv = _SequenceL_SPACE_CHAR_0;	/*TuringMachineInterpreter.sl:221: SPACE_CHAR*/
}
}
void SequenceL_Iterate_0(_sl_STATE_0 &_SequenceL__Arg_State, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_newState(cspace);
_sl_MCONFIG_0 _SequenceL__Arg_currentConfig(cspace);
char _SequenceL_tmp1993;

SequenceL_GetCurrentSymbol_0(_SequenceL__Arg_State, _SequenceL_tmp1993);	/*TuringMachineInterpreter.sl:437: GetCurrentSymbol(State)*/
SequenceL_GetConfig_0(_SequenceL__Arg_State.CurrentConfig.val("TuringMachineInterpreter.sl:437: GetConfig(State.CurrentConfig, GetCurrentSymbol(State), mConfigs)"), _SequenceL_tmp1993, _SequenceL__Arg_mConfigs, _SequenceL__Arg_currentConfig);	/*TuringMachineInterpreter.sl:437: GetConfig(State.CurrentConfig, GetCurrentSymbol(State), mConfigs)*/
SequenceL_Execute_0(_SequenceL__Arg_State, _SequenceL__Arg_currentConfig, _SequenceL__Arg_newState);	/*TuringMachineInterpreter.sl:438: Execute(State, currentConfig)*/
_SequenceL__Arg_currentConfig._delete_data(true);	
_SequenceL__Arg_currentConfig._finished();	
_SequenceL__resultConv = _SequenceL__Arg_newState;	/*TuringMachineInterpreter.sl:440: newState*/
_SequenceL__Arg_newState._delete_data(true);	
_SequenceL__Arg_newState._finished();	
}
void SequenceL_boolToString_2(bool _SequenceL__Arg_bool, Sequence< char > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_bool)	/*Conversion.sl:208: "true" when bool else "false"*/
{
_SequenceL__resultConv = "true";	/*Conversion.sl:208: "true"*/
}
else
{
_SequenceL__resultConv = "false";	/*Conversion.sl:208: "false"*/
}
}
void SequenceL_DoesMachineHalt_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, bool &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_resultState(cspace);
Sequence< char > _SequenceL_tmp2021(cspace);

SequenceL_Process_0(_SequenceL__Arg_InitialState, _SequenceL__Arg_mConfigs, _SequenceL__Arg_Iterations, _SequenceL__Arg_resultState);	/*TuringMachineInterpreter.sl:417: Process(InitialState, mConfigs, Iterations)*/
_SequenceL_tmp2021 = "halt";	/*TuringMachineInterpreter.sl:419: "halt"*/
_SequenceL__resultConv = eq_list(_SequenceL__Arg_resultState.CurrentConfig.val("TuringMachineInterpreter.sl:419: equalList(resultState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2021);	/*TuringMachineInterpreter.sl:419: equalList(resultState.CurrentConfig.ID, "halt")*/
_SequenceL__Arg_resultState.CurrentConfig.val("").ID.delete_data(true);	
_SequenceL__Arg_resultState.CurrentConfig.val("").ID.finished();	
_SequenceL_tmp2021.delete_data(true);	
_SequenceL__Arg_resultState._delete_data(true);	
_SequenceL_tmp2021.finished();	
_SequenceL__Arg_resultState._finished();	
}
void SequenceL_TrimTapeEnd_0(Sequence< char > &_SequenceL__Arg_tape, int _SequenceL__Arg_position, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL___Arg_tape_tco(cspace);
char _SequenceL_tmp2029;
Sequence< char > _SequenceL_tmp2035(cspace);

_SequenceL___Arg_tape_tco.hard_copy(_SequenceL__Arg_tape,__LINE__);	
TrimTapeEnd_TuringMachineInterpreter_label_tco:	
if ((_SequenceL__Arg_position == _SequenceL___Arg_tape_tco.size()))	/*TuringMachineInterpreter.sl:301: tape when position = size(tape)	else		tape when not(last(tape) = SPACE_CHAR)	else		TrimTapeEnd(allButLast(tape), position)*/
{
_SequenceL__resultConv = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:297: tape*/
}
else
{
SequenceL_last_1(_SequenceL___Arg_tape_tco, _SequenceL_tmp2029);	/*TuringMachineInterpreter.sl:299: last(tape)*/
if (!(_SequenceL_tmp2029 == _SequenceL_SPACE_CHAR_0))	/*TuringMachineInterpreter.sl:301: tape when not(last(tape) = SPACE_CHAR)	else		TrimTapeEnd(allButLast(tape), position)*/
{
_SequenceL__resultConv = _SequenceL___Arg_tape_tco;	/*TuringMachineInterpreter.sl:299: tape*/
}
else
{
SequenceL_allButLast_1(_SequenceL___Arg_tape_tco, _SequenceL_tmp2035);	/*TuringMachineInterpreter.sl:301: allButLast(tape)*/
_swap(_SequenceL___Arg_tape_tco, _SequenceL_tmp2035);	
goto TrimTapeEnd_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:301: TrimTapeEnd(allButLast(tape), position)*/
}
}
_SequenceL_tmp2035.delete_data(true);	
_SequenceL_tmp2035.finished();	
}
void SequenceL_GetFSquares_0(Sequence< char > &_SequenceL__Arg_Tape, Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_Tape.size());	/*TuringMachineInterpreter.sl:68: Tape[i] when (i mod 2) = 1*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_Tape.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i % 2) == 1))	/*TuringMachineInterpreter.sl:68: Tape[i] when (i mod 2) = 1*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_Tape.get_ptr(_SequenceL__Index_i)));	/*TuringMachineInterpreter.sl:68: Tape[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_StateToArrowString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp2092(cspace);
Sequence< char > _SequenceL_tmp2089(cspace);
Sequence< char > _SequenceL_tmp2085(cspace);
Sequence< char > _SequenceL_tmp2083(cspace);
Sequence< char > _SequenceL_tmp2079(cspace);
Sequence< char > _SequenceL_tmp2078(cspace);
Sequence< char > _SequenceL_tmp2082(cspace);
int _SequenceL_tmp2081;
Sequence< char > _SequenceL_tmp2084(cspace);
Sequence< char > _SequenceL_tmp2088(cspace);
int _SequenceL_tmp2087;
Sequence< char > _SequenceL_tmp2091(cspace);
Sequence< char > _SequenceL_tmp2093(cspace);

_SequenceL_tmp2078 = "\n";	/*TuringMachineInterpreter.sl:57: "\n"*/
append(_SequenceL__Arg_state.Tape, _SequenceL_tmp2078, _SequenceL_tmp2079);	/*TuringMachineInterpreter.sl:57: state.Tape ++ "\n"*/
_SequenceL_tmp2078.delete_data(true);	
_SequenceL_tmp2078.finished();	
_SequenceL_tmp2081 = (_SequenceL__Arg_state.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:58: state.CurrentPosition - 1*/
SequenceL_duplicate_1(' ', _SequenceL_tmp2081, _SequenceL_tmp2082);	/*TuringMachineInterpreter.sl:58: duplicate(' ', state.CurrentPosition - 1)*/
append(_SequenceL_tmp2079, _SequenceL_tmp2082, _SequenceL_tmp2083);	/*TuringMachineInterpreter.sl:58: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1)*/
_SequenceL_tmp2079.delete_data(true);	
_SequenceL_tmp2082.delete_data(true);	
_SequenceL_tmp2082.finished();	
_SequenceL_tmp2079.finished();	
_SequenceL_tmp2084 = "|\n";	/*TuringMachineInterpreter.sl:58: "|\n"*/
append(_SequenceL_tmp2083, _SequenceL_tmp2084, _SequenceL_tmp2085);	/*TuringMachineInterpreter.sl:58: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n"*/
_SequenceL_tmp2083.delete_data(true);	
_SequenceL_tmp2084.delete_data(true);	
_SequenceL_tmp2084.finished();	
_SequenceL_tmp2083.finished();	
_SequenceL_tmp2087 = (_SequenceL__Arg_state.CurrentPosition - 1);	/*TuringMachineInterpreter.sl:59: state.CurrentPosition - 1*/
SequenceL_duplicate_1(' ', _SequenceL_tmp2087, _SequenceL_tmp2088);	/*TuringMachineInterpreter.sl:59: duplicate(' ', state.CurrentPosition - 1)*/
append(_SequenceL_tmp2085, _SequenceL_tmp2088, _SequenceL_tmp2089);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1)*/
_SequenceL_tmp2085.delete_data(true);	
_SequenceL_tmp2088.delete_data(true);	
_SequenceL_tmp2088.finished();	
_SequenceL_tmp2085.finished();	
_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)")._Reference();	/*TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)*/
SequenceL_MFunctionToString_0(_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)"), _SequenceL_tmp2091);	/*TuringMachineInterpreter.sl:59: MFunctionToString(state.CurrentConfig)*/
append(_SequenceL_tmp2089, _SequenceL_tmp2091, _SequenceL_tmp2092);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ MFunctionToString(state.CurrentConfig)*/
_SequenceL_tmp2089.delete_data(true);	
_SequenceL_tmp2091.delete_data(true);	
_SequenceL_tmp2091.finished();	
_SequenceL_tmp2089.finished();	
_SequenceL_tmp2093 = "\n";	/*TuringMachineInterpreter.sl:59: "\n"*/
append(_SequenceL_tmp2092, _SequenceL_tmp2093, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:59: state.Tape ++ "\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ "|\n" ++	duplicate(' ', state.CurrentPosition - 1) ++ MFunctionToString(state.CurrentConfig) ++ "\n"*/
_SequenceL_tmp2092.delete_data(true);	
_SequenceL_tmp2093.delete_data(true);	
_SequenceL_tmp2093.finished();	
_SequenceL_tmp2092.finished();	
}
void SequenceL_delimit_1(Sequence< Sequence< char > > &_SequenceL__Arg_strings, char _SequenceL__Arg_delimiter, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__Arg_result(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2152(cspace);

SequenceL_delimitWorker_1(_SequenceL__Arg_strings, _SequenceL__Arg_delimiter, _SequenceL_tmp2152);	/*Sequence.sl:59: delimitWorker(strings, delimiter)*/
appends(_SequenceL_tmp2152, _SequenceL__Arg_result);	/*Sequence.sl:59: join(delimitWorker(strings, delimiter))*/
_SequenceL_tmp2152.delete_data(true);	
_SequenceL_tmp2152.finished();	
SequenceL_allButLast_1(_SequenceL__Arg_result, _SequenceL__resultConv);	/*Sequence.sl:61: allButLast(result)*/
_SequenceL__Arg_result.delete_data(true);	
_SequenceL__Arg_result.finished();	
}
void SequenceL_StateToString_0(_sl_STATE_0 &_SequenceL__Arg_state, Sequence< char > &_SequenceL__resultConv)
{
Sequence< char > _SequenceL_tmp2161(cspace);
Sequence< char > _SequenceL_tmp2159(cspace);
Sequence< char > _SequenceL_tmp2156(cspace);
Sequence< char > _SequenceL_tmp2154(cspace);
Sequence< char > _SequenceL_tmp2155(cspace);
Sequence< char > _SequenceL_tmp2158(cspace);
Sequence< char > _SequenceL_tmp2160(cspace);

_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)")._Reference();	/*TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)*/
SequenceL_MFunctionToString_0(_SequenceL__Arg_state.CurrentConfig.val("TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)"), _SequenceL_tmp2154);	/*TuringMachineInterpreter.sl:52: MFunctionToString(state.CurrentConfig)*/
_SequenceL_tmp2155 = "  \t\t| ";	/*TuringMachineInterpreter.sl:53: "  \t\t| "*/
append(_SequenceL_tmp2154, _SequenceL_tmp2155, _SequenceL_tmp2156);	/*TuringMachineInterpreter.sl:53: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| "*/
_SequenceL_tmp2154.delete_data(true);	
_SequenceL_tmp2155.delete_data(true);	
_SequenceL_tmp2155.finished();	
_SequenceL_tmp2154.finished();	
SequenceL_intToString_2(_SequenceL__Arg_state.CurrentPosition, _SequenceL_tmp2158);	/*TuringMachineInterpreter.sl:53: intToString(state.CurrentPosition)*/
_SequenceL_tmp2158.deFrag();	
append(_SequenceL_tmp2156, _SequenceL_tmp2158, _SequenceL_tmp2159);	/*TuringMachineInterpreter.sl:53: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition)*/
_SequenceL_tmp2156.delete_data(true);	
_SequenceL_tmp2158.delete_data(true);	
_SequenceL_tmp2158.finished();	
_SequenceL_tmp2156.finished();	
_SequenceL_tmp2160 = "  \t| ";	/*TuringMachineInterpreter.sl:54: "  \t| "*/
append(_SequenceL_tmp2159, _SequenceL_tmp2160, _SequenceL_tmp2161);	/*TuringMachineInterpreter.sl:54: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition) ++ 	"  \t| "*/
_SequenceL_tmp2159.delete_data(true);	
_SequenceL_tmp2160.delete_data(true);	
_SequenceL_tmp2160.finished();	
_SequenceL_tmp2159.finished();	
append(_SequenceL_tmp2161, _SequenceL__Arg_state.Tape, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:54: MFunctionToString(state.CurrentConfig) ++ 	"  \t\t| " ++ intToString(state.CurrentPosition) ++ 	"  \t| " ++ state.Tape*/
_SequenceL_tmp2161.delete_data(true);	
_SequenceL_tmp2161.finished();	
}
void SequenceL_Process_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, _sl_STATE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL___Arg_InitialState_tco(cspace);
int _SequenceL___Arg_Iterations_tco;
Sequence< char > _SequenceL_tmp2194(cspace);
bool _SequenceL_tmp2195;
_sl_STATE_0 _SequenceL_tmp2199(cspace);
int _SequenceL_tmp2200;
_sl_STATE_0 _SequenceL__tmp__Arg_InitialState_tco(cspace);

_SequenceL___Arg_InitialState_tco._hard_copy(_SequenceL__Arg_InitialState,__LINE__);	
_SequenceL___Arg_Iterations_tco = _SequenceL__Arg_Iterations;	
_SequenceL_tmp2194 = "halt";	/*TuringMachineInterpreter.sl:431: "halt"*/
Process_TuringMachineInterpreter_label_tco:	
_SequenceL_tmp2195 = eq_list(_SequenceL___Arg_InitialState_tco.CurrentConfig.val("TuringMachineInterpreter.sl:432: equalList(InitialState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2194);	/*TuringMachineInterpreter.sl:432: equalList(InitialState.CurrentConfig.ID, "halt")*/
if ((((_SequenceL___Arg_Iterations_tco == 0) || (_SequenceL___Arg_InitialState_tco.CurrentConfig.val("TuringMachineInterpreter.sl:433: InitialState when Iterations = 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, \"halt\")	else		Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)").ID.size() == 0)) || _SequenceL_tmp2195))	/*TuringMachineInterpreter.sl:433: InitialState when Iterations = 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, "halt")	else		Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_InitialState_tco;	/*TuringMachineInterpreter.sl:429: InitialState*/
}
else
{
SequenceL_Iterate_0(_SequenceL___Arg_InitialState_tco, _SequenceL__Arg_mConfigs, _SequenceL_tmp2199);	/*TuringMachineInterpreter.sl:433: Iterate(InitialState, mConfigs)*/
_SequenceL_tmp2200 = (_SequenceL___Arg_Iterations_tco - 1);	/*TuringMachineInterpreter.sl:433: Iterations - 1*/
_SequenceL__tmp__Arg_InitialState_tco = _SequenceL_tmp2199;	
_SequenceL___Arg_InitialState_tco = _SequenceL__tmp__Arg_InitialState_tco;	
_SequenceL___Arg_Iterations_tco = _SequenceL_tmp2200;	
goto Process_TuringMachineInterpreter_label_tco;	/*TuringMachineInterpreter.sl:433: Process(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
}
_SequenceL_tmp2199._delete_data(true);	
_SequenceL__tmp__Arg_InitialState_tco._delete_data(true);	
_SequenceL___Arg_InitialState_tco._delete_data(true);	
_SequenceL___Arg_InitialState_tco._finished();	
_SequenceL__tmp__Arg_InitialState_tco._finished();	
_SequenceL_tmp2199._finished();	
}
void SequenceL_last_1(Sequence< _sl_STATE_0 > &_SequenceL__Arg_list, _sl_STATE_0 &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:153: list[size(list)]*/
}
void SequenceL_ProcessWithTrace_0(_sl_STATE_0 &_SequenceL__Arg_InitialState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_mConfigs, int _SequenceL__Arg_Iterations, Sequence< _sl_STATE_0 > &_SequenceL__resultConv)
{
bool _SequenceL_tmp2213;
Sequence< char > _SequenceL_tmp2212(cspace);
Sequence< _sl_STATE_0 > _SequenceL_tmp2218(cspace);
Sequence< _sl_STATE_0 > _SequenceL_tmp2222(cspace);
_sl_STATE_0 _SequenceL_tmp2220(cspace);
int _SequenceL_tmp2221;

_SequenceL_tmp2212 = "halt";	/*TuringMachineInterpreter.sl:424: "halt"*/
_SequenceL_tmp2213 = eq_list(_SequenceL__Arg_InitialState.CurrentConfig.val("TuringMachineInterpreter.sl:425: equalList(InitialState.CurrentConfig.ID, \"halt\")").ID, _SequenceL_tmp2212);	/*TuringMachineInterpreter.sl:425: equalList(InitialState.CurrentConfig.ID, "halt")*/
_SequenceL_tmp2212.delete_data(true);	
_SequenceL_tmp2212.finished();	
if ((((_SequenceL__Arg_Iterations <= 0) || (_SequenceL__Arg_InitialState.CurrentConfig.val("TuringMachineInterpreter.sl:426: [InitialState] when Iterations <= 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, \"halt\")	else		[InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)").ID.size() == 0)) || _SequenceL_tmp2213))	/*TuringMachineInterpreter.sl:426: [InitialState] when Iterations <= 0 							or size(InitialState.CurrentConfig.ID) = 0 							or equalList(InitialState.CurrentConfig.ID, "halt")	else		[InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_InitialState;	/*TuringMachineInterpreter.sl:422: InitialState*/
}
else
{
_SequenceL_tmp2218.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp2218.get_ptr(1))) = _SequenceL__Arg_InitialState;	/*TuringMachineInterpreter.sl:426: InitialState*/
SequenceL_Iterate_0(_SequenceL__Arg_InitialState, _SequenceL__Arg_mConfigs, _SequenceL_tmp2220);	/*TuringMachineInterpreter.sl:426: Iterate(InitialState, mConfigs)*/
_SequenceL_tmp2221 = (_SequenceL__Arg_Iterations - 1);	/*TuringMachineInterpreter.sl:426: Iterations - 1*/
SequenceL_ProcessWithTrace_0(_SequenceL_tmp2220, _SequenceL__Arg_mConfigs, _SequenceL_tmp2221, _SequenceL_tmp2222);	/*TuringMachineInterpreter.sl:426: ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
_SequenceL_tmp2220._delete_data(true);	
_SequenceL_tmp2220._finished();	
_appendF(_SequenceL_tmp2218, _SequenceL_tmp2222, _SequenceL__resultConv);	/*TuringMachineInterpreter.sl:426: [InitialState] ++ ProcessWithTrace(Iterate(InitialState, mConfigs), mConfigs, Iterations - 1)*/
_SequenceL_tmp2218.delete_data(true);	
_SequenceL_tmp2222.delete_data(true);	
_SequenceL_tmp2222.finished();	
_SequenceL_tmp2218.finished();	
}
}
void SequenceL_ParseTextFile_0(Sequence< char > &_SequenceL__Arg_Text, _sl_INPUT_DATA_0 &_SequenceL__resultConv)
{
int _SequenceL__Arg_iterations;
Sequence< Sequence< char > > _SequenceL__Arg_lines(cspace);
Sequence< char > _SequenceL__Arg_noSpaces(cspace);
Sequence< char > _SequenceL_tmp2224(cspace);
Sequence< char > _SequenceL_tmp2223(cspace);
Sequence< char > _SequenceL__Arg_initialTape(cspace);
int _SequenceL__Arg_initialPosition;
_sl_MFUNCTION_0 _SequenceL__Arg_initialConfig(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2225(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__Arg_mConfigs(cspace);

SequenceL_RemoveCharacter_0(' ', _SequenceL__Arg_Text, _SequenceL_tmp2223);	/*TuringMachineInterpreter.sl:192: RemoveCharacter(' ', Text)*/
SequenceL_RemoveCharacter_0('\r', _SequenceL_tmp2223, _SequenceL_tmp2224);	/*TuringMachineInterpreter.sl:192: RemoveCharacter('\r', RemoveCharacter(' ', Text))*/
_SequenceL_tmp2223.delete_data(true);	
_SequenceL_tmp2223.finished();	
SequenceL_RemoveCharacter_0('\t', _SequenceL_tmp2224, _SequenceL__Arg_noSpaces);	/*TuringMachineInterpreter.sl:192: RemoveCharacter('\t', RemoveCharacter('\r', RemoveCharacter(' ', Text)))*/
_SequenceL_tmp2224.delete_data(true);	
_SequenceL_tmp2224.finished();	
SequenceL_split_1(_SequenceL__Arg_noSpaces, '\n', _SequenceL__Arg_lines);	/*TuringMachineInterpreter.sl:193: split(noSpaces, '\n')*/
_SequenceL__Arg_noSpaces.delete_data(true);	
_SequenceL__Arg_noSpaces.finished();	
SequenceL_stringToInt_2((*(_SequenceL__Arg_lines.get_ptr(1))), _SequenceL__Arg_iterations);	/*TuringMachineInterpreter.sl:194: stringToInt(lines[1])*/
_SequenceL__resultConv.Iterations = _SequenceL__Arg_iterations;	/*TuringMachineInterpreter.sl:200: iterations*/
_SequenceL__Arg_initialTape = (*(_SequenceL__Arg_lines.get_ptr(2)));	/*TuringMachineInterpreter.sl:195: lines[2]*/
_SequenceL__resultConv.InitialTape = _SequenceL__Arg_initialTape;	/*TuringMachineInterpreter.sl:200: initialTape*/
_SequenceL__Arg_initialTape.delete_data(true);	
_SequenceL__Arg_initialTape.finished();	
SequenceL_stringToInt_2((*(_SequenceL__Arg_lines.get_ptr(3))), _SequenceL__Arg_initialPosition);	/*TuringMachineInterpreter.sl:196: stringToInt(lines[3])*/
_SequenceL__resultConv.StartingPosition = _SequenceL__Arg_initialPosition;	/*TuringMachineInterpreter.sl:201: initialPosition*/
SequenceL_SINGLETON_FUNCTION_0((*(_SequenceL__Arg_lines.get_ptr(4))), _SequenceL__Arg_initialConfig);	/*TuringMachineInterpreter.sl:197: SINGLETON_FUNCTION(lines[4])*/
_SequenceL__resultConv.InitialConfig.val_assign() = _SequenceL__Arg_initialConfig;	/*TuringMachineInterpreter.sl:201: initialConfig*/
_SequenceL__Arg_initialConfig._delete_data(true);	
_SequenceL__Arg_initialConfig._finished();	
_SequenceL__Arg_lines.sub_seq(5, _SequenceL__Arg_lines.size(), _SequenceL_tmp2225);	/*TuringMachineInterpreter.sl:198: lines[5 ... size(lines)]*/
_SequenceL__Arg_lines.delete_data(true);	
_SequenceL__Arg_lines.finished();	
_SequenceL__Arg_mConfigs.setSize(_SequenceL_tmp2225.size());	/*TuringMachineInterpreter.sl:198: ParseConfig(lines[5 ... size(lines)])*/
_SequenceL__Arg_mConfigs.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__i2226=1,_stop_val__SequenceL__i2226=_SequenceL__Arg_mConfigs.size(); _SequenceL__i2226<=_stop_val__SequenceL__i2226; _SequenceL__i2226+=1)
{
SequenceL_ParseConfig_0((*(_SequenceL_tmp2225.get_ptr(_SequenceL__i2226))), _SequenceL__i2226, _SequenceL__Arg_mConfigs);	/*TuringMachineInterpreter.sl:198: ParseConfig(lines[5 ... size(lines)])*/
}
_SequenceL_tmp2225.delete_data(true);	
_SequenceL_tmp2225.finished();	
_SequenceL__Arg_mConfigs.cleanup(true);	
_SequenceL__resultConv.MConfigs = _SequenceL__Arg_mConfigs;	/*TuringMachineInterpreter.sl:201: mConfigs*/
_SequenceL__Arg_mConfigs.delete_data(true);	
_SequenceL__Arg_mConfigs.finished();	
}
void SequenceL_RunMachine_0(Sequence< char > &_SequenceL__Arg_Text, Sequence< char > &_SequenceL__Arg_Flag, _sl_STATE_0 &_SequenceL__Arg_NewState, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_InputMConfigs, int _SequenceL__Arg_Iterations, _sl_RETURNVALUE_0 &_SequenceL__resultConv)
{
_sl_STATE_0 _SequenceL__Arg_finalState(cspace);
bool _SequenceL_tmp2228;
Sequence< char > _SequenceL_tmp2227(cspace);
bool _SequenceL_tmp2230;
Sequence< char > _SequenceL_tmp2229(cspace);
Sequence< _sl_STATE_0 > _SequenceL__Arg_processedWithTrace(cspace);
_sl_STATE_0 _SequenceL__Arg_initialState(cspace);
_sl_INPUT_DATA_0 _SequenceL__Arg_input(cspace);
_sl_STATE_0 _SequenceL__Arg_processed(cspace);
Sequence< char > _SequenceL__Arg_outString(cspace);
bool _SequenceL_tmp2257;
Sequence< char > _SequenceL_tmp2256(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2273(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2259(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2271(cspace);
bool _SequenceL_tmp2276;
Sequence< char > _SequenceL_tmp2275(cspace);
Sequence< Sequence< char > > _SequenceL_tmp2289(cspace);
bool _SequenceL_tmp2293;
Sequence< char > _SequenceL_tmp2292(cspace);
bool _SequenceL_tmp2308;
Sequence< char > _SequenceL_tmp2307(cspace);
Sequence< char > _SequenceL_tmp2322(cspace);
bool _SequenceL_tmp2325;
Sequence< char > _SequenceL_tmp2324(cspace);
bool _SequenceL__Arg_doesHalt;
bool _SequenceL_tmp2351;
Sequence< char > _SequenceL_tmp2350(cspace);
bool _SequenceL_tmp2355;
Sequence< char > _SequenceL_tmp2354(cspace);

_SequenceL_tmp2227 = "trace";	/*TuringMachineInterpreter.sl:383: "trace"*/
_SequenceL_tmp2228 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2227);	/*TuringMachineInterpreter.sl:383: equalList(Flag, "trace")*/
_SequenceL_tmp2227.delete_data(true);	
_SequenceL_tmp2227.finished();	
_SequenceL_tmp2229 = "arrow-trace";	/*TuringMachineInterpreter.sl:383: "arrow-trace"*/
_SequenceL_tmp2230 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2229);	/*TuringMachineInterpreter.sl:384: equalList(Flag, "arrow-trace")*/
_SequenceL_tmp2229.delete_data(true);	
_SequenceL_tmp2229.finished();	
if ((_SequenceL_tmp2228 || _SequenceL_tmp2230))	/*TuringMachineInterpreter.sl:385: last(processedWithTrace) when equalList(Flag, "trace") or equalList(Flag, "arrow-trace")				else					processed*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_processedWithTrace.deFrag();	
SequenceL_last_1(_SequenceL__Arg_processedWithTrace, _SequenceL__Arg_finalState);	/*TuringMachineInterpreter.sl:383: last(processedWithTrace)*/
}
else
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_Process_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_finalState = _SequenceL__Arg_processed;	/*TuringMachineInterpreter.sl:385: processed*/
}
_SequenceL__resultConv.FinalState.val_assign() = _SequenceL__Arg_finalState;	/*TuringMachineInterpreter.sl:405: finalState*/
_SequenceL__Arg_finalState._delete_data(true);	
_SequenceL__Arg_finalState._finished();	
_SequenceL_tmp2256 = "trace";	/*TuringMachineInterpreter.sl:388: "trace"*/
_SequenceL_tmp2257 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2256);	/*TuringMachineInterpreter.sl:389: equalList(Flag, "trace")*/
_SequenceL_tmp2256.delete_data(true);	
_SequenceL_tmp2256.finished();	
if (_SequenceL_tmp2257)	/*TuringMachineInterpreter.sl:402: delimit(TRACE_HEADER ++ StateToString(processedWithTrace), '\n') when equalList(Flag, "trace")				else					delimit(StateToArrowString(processedWithTrace), '\n') when equalList(Flag, "arrow-trace")				else					processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
_SequenceL_tmp2259 = _SequenceL_TRACE_HEADER_0;	/*TuringMachineInterpreter.sl:388: TRACE_HEADER*/
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_processedWithTrace.deFrag();	
_SequenceL_tmp2271.setSize(_SequenceL__Arg_processedWithTrace.size());	/*TuringMachineInterpreter.sl:388: StateToString(processedWithTrace)*/
SIMD_DIRECTIVE
for (int _SequenceL__i2272=1,_stop_val__SequenceL__i2272=_SequenceL_tmp2271.size(); _SequenceL__i2272<=_stop_val__SequenceL__i2272; _SequenceL__i2272+=1)
{
SequenceL_StateToString_0((*(_SequenceL__Arg_processedWithTrace.get_ptr(_SequenceL__i2272))), (*(_SequenceL_tmp2271.get_ptr(_SequenceL__i2272))));	/*TuringMachineInterpreter.sl:388: StateToString(processedWithTrace)*/
}
_SequenceL__Arg_processedWithTrace.delete_data(true);	
_SequenceL__Arg_processedWithTrace.finished();	
append(_SequenceL_tmp2259, _SequenceL_tmp2271, _SequenceL_tmp2273);	/*TuringMachineInterpreter.sl:388: TRACE_HEADER ++ StateToString(processedWithTrace)*/
_SequenceL_tmp2259.delete_data(true);	
_SequenceL_tmp2271.delete_data(true);	
_SequenceL_tmp2271.finished();	
_SequenceL_tmp2259.finished();	
SequenceL_delimit_1(_SequenceL_tmp2273, '\n', _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:388: delimit(TRACE_HEADER ++ StateToString(processedWithTrace), '\n')*/
_SequenceL_tmp2273.delete_data(true);	
_SequenceL_tmp2273.finished();	
}
else
{
_SequenceL_tmp2275 = "arrow-trace";	/*TuringMachineInterpreter.sl:390: "arrow-trace"*/
_SequenceL_tmp2276 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2275);	/*TuringMachineInterpreter.sl:391: equalList(Flag, "arrow-trace")*/
_SequenceL_tmp2275.delete_data(true);	
_SequenceL_tmp2275.finished();	
if (_SequenceL_tmp2276)	/*TuringMachineInterpreter.sl:402: delimit(StateToArrowString(processedWithTrace), '\n') when equalList(Flag, "arrow-trace")				else					processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_ProcessWithTrace_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processedWithTrace);	/*TuringMachineInterpreter.sl:375: ProcessWithTrace(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_processedWithTrace.deFrag();	
_SequenceL_tmp2289.setSize(_SequenceL__Arg_processedWithTrace.size());	/*TuringMachineInterpreter.sl:390: StateToArrowString(processedWithTrace)*/
SIMD_DIRECTIVE
for (int _SequenceL__i2290=1,_stop_val__SequenceL__i2290=_SequenceL_tmp2289.size(); _SequenceL__i2290<=_stop_val__SequenceL__i2290; _SequenceL__i2290+=1)
{
SequenceL_StateToArrowString_0((*(_SequenceL__Arg_processedWithTrace.get_ptr(_SequenceL__i2290))), (*(_SequenceL_tmp2289.get_ptr(_SequenceL__i2290))));	/*TuringMachineInterpreter.sl:390: StateToArrowString(processedWithTrace)*/
}
_SequenceL__Arg_processedWithTrace.delete_data(true);	
_SequenceL__Arg_processedWithTrace.finished();	
SequenceL_delimit_1(_SequenceL_tmp2289, '\n', _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:390: delimit(StateToArrowString(processedWithTrace), '\n')*/
_SequenceL_tmp2289.delete_data(true);	
_SequenceL_tmp2289.finished();	
}
else
{
_SequenceL_tmp2292 = "tape";	/*TuringMachineInterpreter.sl:392: "tape"*/
_SequenceL_tmp2293 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2292);	/*TuringMachineInterpreter.sl:393: equalList(Flag, "tape")*/
_SequenceL_tmp2292.delete_data(true);	
_SequenceL_tmp2292.finished();	
if (_SequenceL_tmp2293)	/*TuringMachineInterpreter.sl:402: processed.Tape when equalList(Flag, "tape")				else					TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_Process_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
_SequenceL__Arg_outString = _SequenceL__Arg_processed.Tape;	/*TuringMachineInterpreter.sl:392: processed.Tape*/
_SequenceL__Arg_processed._delete_data(true);	
_SequenceL__Arg_processed._finished();	
}
else
{
_SequenceL_tmp2307 = "f-squares";	/*TuringMachineInterpreter.sl:394: "f-squares"*/
_SequenceL_tmp2308 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2307);	/*TuringMachineInterpreter.sl:395: equalList(Flag, "f-squares")*/
_SequenceL_tmp2307.delete_data(true);	
_SequenceL_tmp2307.finished();	
if (_SequenceL_tmp2308)	/*TuringMachineInterpreter.sl:402: TrimTapeEnd(GetFSquares(processed.Tape), 1) when equalList(Flag, "f-squares")				else					boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_Process_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
SequenceL_GetFSquares_0(_SequenceL__Arg_processed.Tape, _SequenceL_tmp2322);	/*TuringMachineInterpreter.sl:394: GetFSquares(processed.Tape)*/
_SequenceL__Arg_processed.Tape.delete_data(true);	
_SequenceL__Arg_processed.Tape.finished();	
_SequenceL__Arg_processed._delete_data(true);	
_SequenceL__Arg_processed._finished();	
SequenceL_TrimTapeEnd_0(_SequenceL_tmp2322, 1, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:394: TrimTapeEnd(GetFSquares(processed.Tape), 1)*/
_SequenceL_tmp2322.delete_data(true);	
_SequenceL_tmp2322.finished();	
}
else
{
_SequenceL_tmp2324 = "halts";	/*TuringMachineInterpreter.sl:396: "halts"*/
_SequenceL_tmp2325 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2324);	/*TuringMachineInterpreter.sl:397: equalList(Flag, "halts")*/
_SequenceL_tmp2324.delete_data(true);	
_SequenceL_tmp2324.finished();	
if (_SequenceL_tmp2325)	/*TuringMachineInterpreter.sl:402: boolToString(doesHalt) when equalList(Flag, "halts")				else					GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_DoesMachineHalt_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_doesHalt);	/*TuringMachineInterpreter.sl:378: DoesMachineHalt(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
SequenceL_boolToString_2(_SequenceL__Arg_doesHalt, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:396: boolToString(doesHalt)*/
}
else
{
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__Arg_initialState.CurrentConfig.val_assign() = _SequenceL__Arg_input.InitialConfig.val("TuringMachineInterpreter.sl:369: input.InitialConfig");	/*TuringMachineInterpreter.sl:369: input.InitialConfig*/
_SequenceL__Arg_initialState.CurrentPosition = _SequenceL__Arg_input.StartingPosition;	/*TuringMachineInterpreter.sl:369: input.StartingPosition*/
_SequenceL__Arg_initialState.Tape = _SequenceL__Arg_input.InitialTape;	/*TuringMachineInterpreter.sl:369: input.InitialTape*/
SequenceL_Process_0(_SequenceL__Arg_initialState, _SequenceL__Arg_input.MConfigs, _SequenceL__Arg_input.Iterations, _SequenceL__Arg_processed);	/*TuringMachineInterpreter.sl:372: Process(initialState, input.MConfigs, input.Iterations)*/
_SequenceL__Arg_initialState._delete_data(true);	
_SequenceL__Arg_initialState._finished();	
_SequenceL_tmp2350 = "utm-out";	/*TuringMachineInterpreter.sl:398: "utm-out"*/
_SequenceL_tmp2351 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2350);	/*TuringMachineInterpreter.sl:399: equalList(Flag, "utm-out")*/
_SequenceL_tmp2350.delete_data(true);	
_SequenceL_tmp2350.finished();	
if (_SequenceL_tmp2351)	/*TuringMachineInterpreter.sl:402: GetUtmOut(processed) when equalList(Flag, "utm-out")				else					StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
SequenceL_GetUtmOut_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:398: GetUtmOut(processed)*/
_SequenceL__Arg_processed._delete_data(true);	
_SequenceL__Arg_processed._finished();	
}
else
{
_SequenceL_tmp2354 = "arrow-state";	/*TuringMachineInterpreter.sl:400: "arrow-state"*/
_SequenceL_tmp2355 = eq_list(_SequenceL__Arg_Flag, _SequenceL_tmp2354);	/*TuringMachineInterpreter.sl:401: equalList(Flag, "arrow-state")*/
_SequenceL_tmp2354.delete_data(true);	
_SequenceL_tmp2354.finished();	
if (_SequenceL_tmp2355)	/*TuringMachineInterpreter.sl:402: StateToArrowString(processed) when equalList(Flag, "arrow-state")				else					StateToString(processed)*/
{
SequenceL_StateToArrowString_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:400: StateToArrowString(processed)*/
_SequenceL__Arg_processed._delete_data(true);	
_SequenceL__Arg_processed._finished();	
}
else
{
SequenceL_StateToString_0(_SequenceL__Arg_processed, _SequenceL__Arg_outString);	/*TuringMachineInterpreter.sl:402: StateToString(processed)*/
_SequenceL__Arg_processed._delete_data(true);	
_SequenceL__Arg_processed._finished();	
}
}
}
}
}
}
}
_SequenceL__resultConv.Output = _SequenceL__Arg_outString;	/*TuringMachineInterpreter.sl:405: outString*/
_SequenceL__Arg_outString.delete_data(true);	
_SequenceL__Arg_outString.finished();	
if ((_SequenceL__Arg_Text.size() > 0))	/*TuringMachineInterpreter.sl:366: ParseTextFile(Text) when size(Text) > 0 			else				(Iterations: Iterations, InitialTape: NewState.Tape, StartingPosition: NewState.CurrentPosition, InitialConfig: NewState.CurrentConfig, MConfigs: InputMConfigs)*/
{
SequenceL_ParseTextFile_0(_SequenceL__Arg_Text, _SequenceL__Arg_input);	/*TuringMachineInterpreter.sl:364: ParseTextFile(Text)*/
}
else
{
_SequenceL__Arg_input.Iterations = _SequenceL__Arg_Iterations;	/*TuringMachineInterpreter.sl:366: Iterations*/
_SequenceL__Arg_input.InitialTape = _SequenceL__Arg_NewState.Tape;	/*TuringMachineInterpreter.sl:366: NewState.Tape*/
_SequenceL__Arg_input.StartingPosition = _SequenceL__Arg_NewState.CurrentPosition;	/*TuringMachineInterpreter.sl:366: NewState.CurrentPosition*/
_SequenceL__Arg_input.InitialConfig.val_assign() = _SequenceL__Arg_NewState.CurrentConfig.val("TuringMachineInterpreter.sl:366: NewState.CurrentConfig");	/*TuringMachineInterpreter.sl:366: NewState.CurrentConfig*/
_SequenceL__Arg_input.MConfigs = _SequenceL__Arg_InputMConfigs;	/*TuringMachineInterpreter.sl:366: InputMConfigs*/
}
_SequenceL__resultConv.ConfigTable = _SequenceL__Arg_input.MConfigs;	/*TuringMachineInterpreter.sl:405: input.MConfigs*/
_SequenceL__resultConv.RetIterations = _SequenceL__Arg_input.Iterations;	/*TuringMachineInterpreter.sl:405: input.Iterations*/
_SequenceL__Arg_input._delete_data(true);	
_SequenceL__Arg_input._finished();	
}

}
void sl_RunMachine(Sequence< char > &_SequenceL__Arg_arg1, Sequence< char > &_SequenceL__Arg_arg2, _sl_STATE_0 &_SequenceL__Arg_arg3, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_arg4, int _SequenceL__Arg_arg5, int _n, _sl_RETURNVALUE_0 &_SequenceL__resultConv)
{
Sequence< char > _SequenceL__delete_opttmp1(cspace);
Sequence< char > _SequenceL__delete_opttmp2(cspace);
Sequence< _sl_MCONFIG_0 > _SequenceL__delete_opttmp3(cspace);

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_RunMachine_globals();
_SequenceL__Arg_arg1.clone(_SequenceL__delete_opttmp1);	
_SequenceL__Arg_arg2.clone(_SequenceL__delete_opttmp2);	
_SequenceL__Arg_arg3._Reference();	
_SequenceL__Arg_arg4.clone(_SequenceL__delete_opttmp3);	
SequenceL__parallel_RunMachine_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, _SequenceL__Arg_arg3, _SequenceL__delete_opttmp3, _SequenceL__Arg_arg5, _SequenceL__resultConv);	
_SequenceL__Arg_arg3._dereference();	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp3.delete_data(true);	
_SequenceL__delete_opttmp3.finished();	
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_delete_sl_RunMachine_globals();

if (tag)
{
sl_done();
}
}
#if (defined(__GNUC__) && (__GNUC__) >= 4 && (__GNU_MINOR__) >= 6) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
