#ifndef _SEQUENCEL_GENERATED_SL_Generated_H
#define _SEQUENCEL_GENERATED_SL_Generated_H

#define SL_FLOAT_SIZE 8
#if SL_FLOAT_SIZE == 4
#define SL_FLOAT float
#else
#define SL_FLOAT double
#endif

#include <SequenceL/SequenceL.h>

typedef void (*_sl_fun_pointer)(void);

struct _sl_MFUNCTION_0;
struct _sl_MCONFIG_0;
struct _sl_STATE_0;
struct _sl_INPUT_DATA_0;
struct _sl_TOKEN_0;
struct _sl_PARSERETURN_0;
struct _sl_RETURNVALUE_0;
//-----------------------------------------
// _sl_MFUNCTION_0 struct definition
//------------------------------------------
struct _sl_MFUNCTION_0
{
Sequence< char > ID;
Sequence< _sl_MFUNCTION_0 > Arguments;


_sl_MFUNCTION_0():ID(), Arguments()
{
}

_sl_MFUNCTION_0(Memflags _m):ID(_m), Arguments(_m)
{
}

_sl_MFUNCTION_0(Sequence< char > _SequenceL_ID, Sequence< _sl_MFUNCTION_0 > _SequenceL_Arguments):ID(_SequenceL_ID), Arguments(_SequenceL_Arguments)
{
}

void _initialize(Memflags _mfp)
{
ID.initialize(_mfp);
Arguments.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
ID.delete_data(_parallel);
Arguments.delete_data(_parallel);

}

void _finished()
{
ID.finished();
Arguments.finished();

}

~_sl_MFUNCTION_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
ID.Reference();
Arguments.Reference();

}

void _dereference()
{
ID.dereference();
Arguments.dereference();

}

void _deFrag()
{
ID.deFrag();
Arguments.deFrag();

}

void _parallel_deFrag(int _ln)
{
ID.parallel_deFrag(_ln);
Arguments.parallel_deFrag(_ln);

}

void _fix_padding(_sl_MFUNCTION_0& _old)
{
ID.fix_padding(_old.ID);
Arguments.fix_padding(_old.Arguments);

}

_sl_MFUNCTION_0& operator=(const _sl_MFUNCTION_0& _rhs)
{
ID = _rhs.ID;
Arguments = _rhs.Arguments;

return *this;
}

void _hard_copy(_sl_MFUNCTION_0& _rhs, int _ln)
{
ID.hard_copy(_rhs.ID, _ln);
Arguments.hard_copy(_rhs.Arguments, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Arguments:";
_SequenceL_toString(Arguments, _stream);
_stream<<","<<"ID:";
_SequenceL_toString(ID, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_MCONFIG_0 struct definition
//------------------------------------------
struct _sl_MCONFIG_0
{
Sequence< Sequence< char > > Symbols;
Sequence< Sequence< char > > Operations;
SLStruct< _sl_MFUNCTION_0 > Label;
SLStruct< _sl_MFUNCTION_0 > FinalConfig;


_sl_MCONFIG_0():Symbols(), Operations(), Label(false), FinalConfig(false)
{
}

_sl_MCONFIG_0(Memflags _m):Symbols(_m), Operations(_m), Label(false,_m), FinalConfig(false,_m)
{
}

_sl_MCONFIG_0(Sequence< Sequence< char > > _SequenceL_Symbols, Sequence< Sequence< char > > _SequenceL_Operations, SLStruct< _sl_MFUNCTION_0 > _SequenceL_Label, SLStruct< _sl_MFUNCTION_0 > _SequenceL_FinalConfig):Symbols(_SequenceL_Symbols), Operations(_SequenceL_Operations), Label(_SequenceL_Label), FinalConfig(_SequenceL_FinalConfig)
{
}

void _initialize(Memflags _mfp)
{
Symbols.initialize(_mfp);
Operations.initialize(_mfp);
Label.initialize_empty(_mfp);
FinalConfig.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
Symbols.delete_data(_parallel);
Operations.delete_data(_parallel);
Label.delete_data(_parallel);
FinalConfig.delete_data(_parallel);

}

void _finished()
{
Symbols.finished();
Operations.finished();
Label.finished();
FinalConfig.finished();

}

~_sl_MCONFIG_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Symbols.Reference();
Operations.Reference();
Label.Reference();
FinalConfig.Reference();

}

void _dereference()
{
Symbols.dereference();
Operations.dereference();
Label.dereference();
FinalConfig.dereference();

}

void _deFrag()
{
Symbols.deFrag();
Operations.deFrag();
Label.deFrag();
FinalConfig.deFrag();

}

void _parallel_deFrag(int _ln)
{
Symbols.parallel_deFrag(_ln);
Operations.parallel_deFrag(_ln);
Label.parallel_deFrag(_ln);
FinalConfig.parallel_deFrag(_ln);

}

void _fix_padding(_sl_MCONFIG_0& _old)
{
Symbols.fix_padding(_old.Symbols);
Operations.fix_padding(_old.Operations);

}

_sl_MCONFIG_0& operator=(const _sl_MCONFIG_0& _rhs)
{
Label = _rhs.Label;
Symbols = _rhs.Symbols;
Operations = _rhs.Operations;
FinalConfig = _rhs.FinalConfig;

return *this;
}

void _hard_copy(_sl_MCONFIG_0& _rhs, int _ln)
{
Label.hard_copy(_rhs.Label, _ln);
Symbols.hard_copy(_rhs.Symbols, _ln);
Operations.hard_copy(_rhs.Operations, _ln);
FinalConfig.hard_copy(_rhs.FinalConfig, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"FinalConfig:";
_SequenceL_toString(FinalConfig, _stream);
_stream<<","<<"Label:";
_SequenceL_toString(Label, _stream);
_stream<<","<<"Operations:";
_SequenceL_toString(Operations, _stream);
_stream<<","<<"Symbols:";
_SequenceL_toString(Symbols, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_STATE_0 struct definition
//------------------------------------------
struct _sl_STATE_0
{
int CurrentPosition;
Sequence< char > Tape;
SLStruct< _sl_MFUNCTION_0 > CurrentConfig;


_sl_STATE_0():CurrentPosition(0), Tape(), CurrentConfig(false)
{
}

_sl_STATE_0(Memflags _m):CurrentPosition(0), Tape(_m), CurrentConfig(false,_m)
{
}

_sl_STATE_0(int _SequenceL_CurrentPosition, Sequence< char > _SequenceL_Tape, SLStruct< _sl_MFUNCTION_0 > _SequenceL_CurrentConfig):CurrentPosition(_SequenceL_CurrentPosition), Tape(_SequenceL_Tape), CurrentConfig(_SequenceL_CurrentConfig)
{
}

void _initialize(Memflags _mfp)
{
CurrentPosition=0;
Tape.initialize(_mfp);
CurrentConfig.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
Tape.delete_data(_parallel);
CurrentConfig.delete_data(_parallel);

}

void _finished()
{
Tape.finished();
CurrentConfig.finished();

}

~_sl_STATE_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Tape.Reference();
CurrentConfig.Reference();

}

void _dereference()
{
Tape.dereference();
CurrentConfig.dereference();

}

void _deFrag()
{
Tape.deFrag();
CurrentConfig.deFrag();

}

void _parallel_deFrag(int _ln)
{
Tape.parallel_deFrag(_ln);
CurrentConfig.parallel_deFrag(_ln);

}

void _fix_padding(_sl_STATE_0& _old)
{
Tape.fix_padding(_old.Tape);

}

_sl_STATE_0& operator=(const _sl_STATE_0& _rhs)
{
CurrentConfig = _rhs.CurrentConfig;
CurrentPosition = _rhs.CurrentPosition;
Tape = _rhs.Tape;

return *this;
}

void _hard_copy(_sl_STATE_0& _rhs, int _ln)
{
CurrentConfig.hard_copy(_rhs.CurrentConfig, _ln);
CurrentPosition = _rhs.CurrentPosition;
Tape.hard_copy(_rhs.Tape, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"CurrentConfig:";
_SequenceL_toString(CurrentConfig, _stream);
_stream<<","<<"CurrentPosition:";
_SequenceL_toString(CurrentPosition, _stream);
_stream<<","<<"Tape:";
_SequenceL_toString(Tape, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_INPUT_DATA_0 struct definition
//------------------------------------------
struct _sl_INPUT_DATA_0
{
int Iterations;
int StartingPosition;
Sequence< char > InitialTape;
Sequence< _sl_MCONFIG_0 > MConfigs;
SLStruct< _sl_MFUNCTION_0 > InitialConfig;


_sl_INPUT_DATA_0():Iterations(0), StartingPosition(0), InitialTape(), MConfigs(), InitialConfig(false)
{
}

_sl_INPUT_DATA_0(Memflags _m):Iterations(0), StartingPosition(0), InitialTape(_m), MConfigs(_m), InitialConfig(false,_m)
{
}

_sl_INPUT_DATA_0(int _SequenceL_Iterations, int _SequenceL_StartingPosition, Sequence< char > _SequenceL_InitialTape, Sequence< _sl_MCONFIG_0 > _SequenceL_MConfigs, SLStruct< _sl_MFUNCTION_0 > _SequenceL_InitialConfig):Iterations(_SequenceL_Iterations), StartingPosition(_SequenceL_StartingPosition), InitialTape(_SequenceL_InitialTape), MConfigs(_SequenceL_MConfigs), InitialConfig(_SequenceL_InitialConfig)
{
}

void _initialize(Memflags _mfp)
{
Iterations=0;
StartingPosition=0;
InitialTape.initialize(_mfp);
MConfigs.initialize(_mfp);
InitialConfig.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
InitialTape.delete_data(_parallel);
MConfigs.delete_data(_parallel);
InitialConfig.delete_data(_parallel);

}

void _finished()
{
InitialTape.finished();
MConfigs.finished();
InitialConfig.finished();

}

~_sl_INPUT_DATA_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
InitialTape.Reference();
MConfigs.Reference();
InitialConfig.Reference();

}

void _dereference()
{
InitialTape.dereference();
MConfigs.dereference();
InitialConfig.dereference();

}

void _deFrag()
{
InitialTape.deFrag();
MConfigs.deFrag();
InitialConfig.deFrag();

}

void _parallel_deFrag(int _ln)
{
InitialTape.parallel_deFrag(_ln);
MConfigs.parallel_deFrag(_ln);
InitialConfig.parallel_deFrag(_ln);

}

void _fix_padding(_sl_INPUT_DATA_0& _old)
{
InitialTape.fix_padding(_old.InitialTape);
MConfigs.fix_padding(_old.MConfigs);

}

_sl_INPUT_DATA_0& operator=(const _sl_INPUT_DATA_0& _rhs)
{
Iterations = _rhs.Iterations;
InitialTape = _rhs.InitialTape;
StartingPosition = _rhs.StartingPosition;
InitialConfig = _rhs.InitialConfig;
MConfigs = _rhs.MConfigs;

return *this;
}

void _hard_copy(_sl_INPUT_DATA_0& _rhs, int _ln)
{
Iterations = _rhs.Iterations;
InitialTape.hard_copy(_rhs.InitialTape, _ln);
StartingPosition = _rhs.StartingPosition;
InitialConfig.hard_copy(_rhs.InitialConfig, _ln);
MConfigs.hard_copy(_rhs.MConfigs, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"InitialConfig:";
_SequenceL_toString(InitialConfig, _stream);
_stream<<","<<"InitialTape:";
_SequenceL_toString(InitialTape, _stream);
_stream<<","<<"Iterations:";
_SequenceL_toString(Iterations, _stream);
_stream<<","<<"MConfigs:";
_SequenceL_toString(MConfigs, _stream);
_stream<<","<<"StartingPosition:";
_SequenceL_toString(StartingPosition, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_TOKEN_0 struct definition
//------------------------------------------
struct _sl_TOKEN_0
{
Sequence< char > Value;
Sequence< char > Type;


_sl_TOKEN_0():Value(), Type()
{
}

_sl_TOKEN_0(Memflags _m):Value(_m), Type(_m)
{
}

_sl_TOKEN_0(Sequence< char > _SequenceL_Value, Sequence< char > _SequenceL_Type):Value(_SequenceL_Value), Type(_SequenceL_Type)
{
}

void _initialize(Memflags _mfp)
{
Value.initialize(_mfp);
Type.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
Value.delete_data(_parallel);
Type.delete_data(_parallel);

}

void _finished()
{
Value.finished();
Type.finished();

}

~_sl_TOKEN_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Value.Reference();
Type.Reference();

}

void _dereference()
{
Value.dereference();
Type.dereference();

}

void _deFrag()
{
Value.deFrag();
Type.deFrag();

}

void _parallel_deFrag(int _ln)
{
Value.parallel_deFrag(_ln);
Type.parallel_deFrag(_ln);

}

void _fix_padding(_sl_TOKEN_0& _old)
{
Value.fix_padding(_old.Value);
Type.fix_padding(_old.Type);

}

_sl_TOKEN_0& operator=(const _sl_TOKEN_0& _rhs)
{
Value = _rhs.Value;
Type = _rhs.Type;

return *this;
}

void _hard_copy(_sl_TOKEN_0& _rhs, int _ln)
{
Value.hard_copy(_rhs.Value, _ln);
Type.hard_copy(_rhs.Type, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Type:";
_SequenceL_toString(Type, _stream);
_stream<<","<<"Value:";
_SequenceL_toString(Value, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_PARSERETURN_0 struct definition
//------------------------------------------
struct _sl_PARSERETURN_0
{
int TokenPosition;
Sequence< _sl_MFUNCTION_0 > ReturnList;


_sl_PARSERETURN_0():TokenPosition(0), ReturnList()
{
}

_sl_PARSERETURN_0(Memflags _m):TokenPosition(0), ReturnList(_m)
{
}

_sl_PARSERETURN_0(int _SequenceL_TokenPosition, Sequence< _sl_MFUNCTION_0 > _SequenceL_ReturnList):TokenPosition(_SequenceL_TokenPosition), ReturnList(_SequenceL_ReturnList)
{
}

void _initialize(Memflags _mfp)
{
TokenPosition=0;
ReturnList.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
ReturnList.delete_data(_parallel);

}

void _finished()
{
ReturnList.finished();

}

~_sl_PARSERETURN_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
ReturnList.Reference();

}

void _dereference()
{
ReturnList.dereference();

}

void _deFrag()
{
ReturnList.deFrag();

}

void _parallel_deFrag(int _ln)
{
ReturnList.parallel_deFrag(_ln);

}

void _fix_padding(_sl_PARSERETURN_0& _old)
{
ReturnList.fix_padding(_old.ReturnList);

}

_sl_PARSERETURN_0& operator=(const _sl_PARSERETURN_0& _rhs)
{
TokenPosition = _rhs.TokenPosition;
ReturnList = _rhs.ReturnList;

return *this;
}

void _hard_copy(_sl_PARSERETURN_0& _rhs, int _ln)
{
TokenPosition = _rhs.TokenPosition;
ReturnList.hard_copy(_rhs.ReturnList, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"ReturnList:";
_SequenceL_toString(ReturnList, _stream);
_stream<<","<<"TokenPosition:";
_SequenceL_toString(TokenPosition, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

//-----------------------------------------
// _sl_RETURNVALUE_0 struct definition
//------------------------------------------
struct _sl_RETURNVALUE_0
{
int RetIterations;
Sequence< char > Output;
Sequence< _sl_MCONFIG_0 > ConfigTable;
SLStruct< _sl_STATE_0 > FinalState;


_sl_RETURNVALUE_0():RetIterations(0), Output(), ConfigTable(), FinalState(false)
{
}

_sl_RETURNVALUE_0(Memflags _m):RetIterations(0), Output(_m), ConfigTable(_m), FinalState(false,_m)
{
}

_sl_RETURNVALUE_0(int _SequenceL_RetIterations, Sequence< char > _SequenceL_Output, Sequence< _sl_MCONFIG_0 > _SequenceL_ConfigTable, SLStruct< _sl_STATE_0 > _SequenceL_FinalState):RetIterations(_SequenceL_RetIterations), Output(_SequenceL_Output), ConfigTable(_SequenceL_ConfigTable), FinalState(_SequenceL_FinalState)
{
}

void _initialize(Memflags _mfp)
{
RetIterations=0;
Output.initialize(_mfp);
ConfigTable.initialize(_mfp);
FinalState.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
Output.delete_data(_parallel);
ConfigTable.delete_data(_parallel);
FinalState.delete_data(_parallel);

}

void _finished()
{
Output.finished();
ConfigTable.finished();
FinalState.finished();

}

~_sl_RETURNVALUE_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Output.Reference();
ConfigTable.Reference();
FinalState.Reference();

}

void _dereference()
{
Output.dereference();
ConfigTable.dereference();
FinalState.dereference();

}

void _deFrag()
{
Output.deFrag();
ConfigTable.deFrag();
FinalState.deFrag();

}

void _parallel_deFrag(int _ln)
{
Output.parallel_deFrag(_ln);
ConfigTable.parallel_deFrag(_ln);
FinalState.parallel_deFrag(_ln);

}

void _fix_padding(_sl_RETURNVALUE_0& _old)
{
Output.fix_padding(_old.Output);
ConfigTable.fix_padding(_old.ConfigTable);

}

_sl_RETURNVALUE_0& operator=(const _sl_RETURNVALUE_0& _rhs)
{
FinalState = _rhs.FinalState;
Output = _rhs.Output;
ConfigTable = _rhs.ConfigTable;
RetIterations = _rhs.RetIterations;

return *this;
}

void _hard_copy(_sl_RETURNVALUE_0& _rhs, int _ln)
{
FinalState.hard_copy(_rhs.FinalState, _ln);
Output.hard_copy(_rhs.Output, _ln);
ConfigTable.hard_copy(_rhs.ConfigTable, _ln);
RetIterations = _rhs.RetIterations;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"ConfigTable:";
_SequenceL_toString(ConfigTable, _stream);
_stream<<","<<"FinalState:";
_SequenceL_toString(FinalState, _stream);
_stream<<","<<"Output:";
_SequenceL_toString(Output, _stream);
_stream<<","<<"RetIterations:";
_SequenceL_toString(RetIterations, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

ostream &operator<<(ostream &stream, const _sl_MFUNCTION_0& s);
bool operator==(const _sl_MFUNCTION_0&_lhs, const _sl_MFUNCTION_0&_rhs);
bool operator!=(const _sl_MFUNCTION_0&_lhs, const _sl_MFUNCTION_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_MCONFIG_0& s);
bool operator==(const _sl_MCONFIG_0&_lhs, const _sl_MCONFIG_0&_rhs);
bool operator!=(const _sl_MCONFIG_0&_lhs, const _sl_MCONFIG_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_STATE_0& s);
bool operator==(const _sl_STATE_0&_lhs, const _sl_STATE_0&_rhs);
bool operator!=(const _sl_STATE_0&_lhs, const _sl_STATE_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_INPUT_DATA_0& s);
bool operator==(const _sl_INPUT_DATA_0&_lhs, const _sl_INPUT_DATA_0&_rhs);
bool operator!=(const _sl_INPUT_DATA_0&_lhs, const _sl_INPUT_DATA_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_TOKEN_0& s);
bool operator==(const _sl_TOKEN_0&_lhs, const _sl_TOKEN_0&_rhs);
bool operator!=(const _sl_TOKEN_0&_lhs, const _sl_TOKEN_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_PARSERETURN_0& s);
bool operator==(const _sl_PARSERETURN_0&_lhs, const _sl_PARSERETURN_0&_rhs);
bool operator!=(const _sl_PARSERETURN_0&_lhs, const _sl_PARSERETURN_0&_rhs);
ostream &operator<<(ostream &stream, const _sl_RETURNVALUE_0& s);
bool operator==(const _sl_RETURNVALUE_0&_lhs, const _sl_RETURNVALUE_0&_rhs);
bool operator!=(const _sl_RETURNVALUE_0&_lhs, const _sl_RETURNVALUE_0&_rhs);

#ifdef _WIN32
#endif


#define _sl_MFUNCTION _sl_MFUNCTION_0
#define _sl_MCONFIG _sl_MCONFIG_0
#define _sl_STATE _sl_STATE_0
#define _sl_INPUT_DATA _sl_INPUT_DATA_0
#define _sl_TOKEN _sl_TOKEN_0
#define _sl_PARSERETURN _sl_PARSERETURN_0
#define _sl_RETURNVALUE _sl_RETURNVALUE_0

void sl_RunMachine(Sequence< char > &_SequenceL__Arg_arg1, Sequence< char > &_SequenceL__Arg_arg2, _sl_STATE_0 &_SequenceL__Arg_arg3, Sequence< _sl_MCONFIG_0 > &_SequenceL__Arg_arg4, int _SequenceL__Arg_arg5, int _n, _sl_RETURNVALUE_0 &_SequenceL_);

#endif
