#include "hello_lib.h"
#include <iostream>

int main(int argc, char* argv[])
{
    if(argc < 2)
        print_hello(NULL);
    else
        print_hello(argv[1]);
	return 0;
}
