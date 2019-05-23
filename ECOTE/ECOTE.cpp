

#include "pch.h"
#include <iostream>
#include <fstream>
#include <algorithm>   
#include <vector>   
#include <string>
#include "float.h"
#include "../antlr4-runtime/CPP14Lexer.h"
#include "../antlr4-runtime/CPP14Parser.h"
#include "../antlr4-runtime/CPP14BaseListener.h"

using namespace antlr4;
using namespace std;


int mainx()
{
	std::ifstream stream;
	stream.open("input.c");

	ANTLRInputStream input(stream);
	CPP14Lexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	tokens.fill();
	

	for (auto curr : tokens.getTokens())
	{
		cout << curr->toString() << "\n";

	}


	
	return 0;
}

