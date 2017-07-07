// func.cpp by Gabor
// Defining a function
#include <cstdio>
#include "func.h"
using namespace std;

int main(int argc, char **argv) 
{
	puts("this is main()");
	func();
	return 0;
}

void func()
{
	puts("this is funct()");
}