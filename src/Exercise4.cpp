//============================================================================
// Name        : Exercise4.cpp
// Author      : Tobias Valbjørn
// Version     :
// Copyright   : Free for all
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Options.h"

using namespace std;

int main(int argc, char** argv) {
	string validOpt="abo";
	Options opt(argc, (const char**) argv);
	opt.setOptstring(validOpt);
	cout << "Number of valid options on command line: "<<opt.numopt()<< endl;

	return 0;
}
