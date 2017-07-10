// working.cpp by Gabor
// Defining macros

#include <cstdio>
using namespace std;

#define MACRO(a, b) ( a * b )
#define MAX(a, b) ( a > b ? a : b )

int main(int argc, char **argv)
{
	int ia = 5;
	int ib = 7;
	printf("value is %d\n", MAX(ia, ib));
	return 0;
}