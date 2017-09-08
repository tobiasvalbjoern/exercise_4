/*
 * Options.h
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_
#include <string>
//always remember to use this.
using namespace std;
class Options
{
private:
	int argC,count;
	char **argV;
	string optstring;
public:
	Options(int argc, const char **argv);
	void setOptstring(string validopt);
	int getopt(void);
	int numopt(void);
};

#endif /* OPTIONS_H_ */
