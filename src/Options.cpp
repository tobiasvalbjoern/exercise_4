/*
 * Options.cpp
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#include "Options.h"
#include <string>
#include <cstring>

Options::Options(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
	optstring = "\n";
	count = 1;
}

void Options::setOptstring(string validopt)
{
	optstring = validopt;
}

int Options::getopt(void)
{

	for (size_t i = 0; i < optstring.size(); i++)
	{
		if (count>argC)
			return 0;

		if (strstr(argV[count], "-" + optstring[i]))
		{
			count++;
			return optstring[i];
		}
	}

	return 0;
}

int Options::numopt(void)
{
	int number = 0;

	for (int i = 1; i <= argC; i++)
	{
		for (size_t j = 0; j < optstring.size(); j++)
		{
			if (strstr(argV[i], "-" + optstring[i]))
			{
				number++;
			}
		}
	}

	return number;
}
