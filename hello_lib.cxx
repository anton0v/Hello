#include <iostream>

void print_hello(char* name)
{
    if(name != NULL)
        std::cout << "Hello, " << name << "!\n";
    else
        std::cout << "Hello!\n";
}
