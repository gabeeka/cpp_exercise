// working.cpp by Gabor
// Line continuation with backslash

#include <cstdio>
using namespace std;

#define SWAP(a, b)  	do {		\
						a = a ^ b; \
						b = b ^ a; \
						a = a ^ b; \
						} while (0)

int main(int argc, char **argv)
{
	int x = 5;
	int y = 10;
	printf("x is %d, y is %d\n", x, y);
	SWAP(x, y);
	printf("x is %d, y is %d\n", x, y);
	return 0;
}