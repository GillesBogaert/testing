#include "settings.h"

/*
    If you want your main()-function to be run, go to settings.h.
*/

#ifndef TEST_BUILD

#include <iostream>


int main(int argn, char** argv)
{
    std::cout << "Hello world!" << "/n" << std::endl;


	char test;

	char *testaddress = &test;
	char testvalue = &testadress;
	int * const ptr = &x;

	cout << *ptr;
}

#endif
