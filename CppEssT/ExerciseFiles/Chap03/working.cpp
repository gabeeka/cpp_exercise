// working.cpp by Gabor
// Using macros as constants

#include <cstdio>
using namespace std;

#define ONE 1
#define HELLO_STRING "Hello, World"

int main(int argc, char **argv)
{
	const int one = 1;
	printf("value is %d\n", one);
	printf("the string is %s\n", HELLO_STRING);
	return 0;
}