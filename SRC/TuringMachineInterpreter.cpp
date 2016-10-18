#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>
#include "SL_Generated.h"

int cores = 0;
string fileName = "../../INPUT/irrational.tm";
string flag = "tape";
string fileContents = "";
bool interactive = false;

using namespace std;

void OutputStringSequence(const Sequence< char >& outputMessage);
string GetStringSequence(const Sequence< char >& outputMessage);
std::string get_file_contents(const char *filename);
void ShowHelp();

int main( int argc, char** argv )
{
	sl_init(cores);

	if(argc >= 2)
	{
		fileName = argv[1];
		if(fileName[0] == '-' && (fileName[1] == 'h' || fileName[1] == 'H'))
		{
			ShowHelp();
			return 0;
		}
	}

	if(argc >= 3)
	{
		flag = argv[2];
	}

	if(argc >= 4)
	{
		if(argv[3][0] == '-' && (argv[3][1] == 'i' || argv[3][1] == 'I'))
		{
			interactive = true;
		}
	}

	int flagDims[] = { flag.length()};
	Sequence<char> flagSeq((void*)(flag.c_str()), flagDims);

	fileContents = get_file_contents(fileName.c_str());
	int inputDims[] = { fileContents.length()};
	Sequence<char> input((void*)(fileContents.c_str()), inputDims);

	_sl_STATE inputState;
	Sequence<_sl_MCONFIG> inputMconfigs;
	int inputIterations = 0;
	int proceed;

	_sl_RETURNVALUE result;
	bool repeat = true;

	while(repeat)
	{
		sl_RunMachine(input, flagSeq, inputState, inputMconfigs, inputIterations, cores, result);
		cout << endl;
		OutputStringSequence(result.Output);
		if(result.FinalState.val().CurrentConfig.val().ID.size() > 0 && GetStringSequence(result.FinalState.val().CurrentConfig.val().ID) != "halt" && interactive)
		{
			cout << "Continue Running? Enter # of additional runs(0 to stop):";
			cin >> proceed;
			repeat = proceed  > 0;
			if(repeat)
			{
				input.setSize(0);
				inputState = result.FinalState.val();
				inputMconfigs = result.ConfigTable;
				inputIterations = proceed;
			}
		}
		else
		{
			repeat = false;
		}
	}

	sl_done();

	return 0;
}

std::string get_file_contents(const char *filename)
{
  std::ifstream in(filename, std::ios::in | std::ios::binary);
  if (in)
  {
    std::string contents;
    in.seekg(0, std::ios::end);
    contents.resize(in.tellg());
    in.seekg(0, std::ios::beg);
    in.read(&contents[0], contents.size());
    in.close();
    return(contents);
  }
  throw(errno);
}

string GetStringSequence(const Sequence< char >& outputMessage)
{
	string hold;
	std::ostringstream stream;
	stream << outputMessage;
	hold =  stream.str();
	return hold.substr(1, hold.length() - 2);
}

void OutputStringSequence(const Sequence< char >& outputMessage)
{
	cout<<GetStringSequence(outputMessage)<< endl;
}

void ShowHelp()
{
	string helpString =
			"Usage:\n"
			"TuringInterpreter.exe <fileName=input.txt> <flag=arrow-state>\n"
			"\n"
			"File Contents:--------------------------------------------------------\n"
			"<number of iterations>\n"
			"<initial tape>\n"
			"<starting head position>\n"
			"<starting m-config>\n"
			"<m-config label> | <symbol>,... | <action>,... | <target m-config>\n"
			"<m-config label> | <symbol>,... | <action>,... | <target m-config>\n"
			"...\n"
			"----------------------------------------------------------------------\n"
			"\n"
			"Flag Options:---------------------------------------------------------\n"
			"'tape'\n"
			"Outputs the final tape.\n"
			"\n"
			"'f-squares'\n"
			"Outputs only the f-squares of the final tape.\n"
			"\n"
			"'state'\n"
			"Outputs the final state as Turing defined.\n"
			"\n"
			"'arrow-state'\n"
			"Outputs the final state in an easier to read format.\n"
			"\n"
			"'halts'\n"
			"Outputs whether the machine halts in the specified number of iterations.\n"
			"\n"
			"'trace'\n"
			"Outputs a trace similar to what is presented in Turing's paper. \n"
			"\n"
			"'arrow-trace'\n"
			"Outputs an easier to read trace.\n"
			"\n"
			"'utm-out'\n"
			"Outputs the symbols on the tape that would be the output from a UTM execution.\n"
			"\n"
			"----------------------------------------------------------------------\n";

	cout << helpString;
}
