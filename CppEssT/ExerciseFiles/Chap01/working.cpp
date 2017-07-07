// working.cpp by Gabor
// Pointers and References exercises
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	int x = 7;
	int *ip = &x;
	int &y = x;
	printf("The value of x is %d\n", x);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of y is %d\n\n", y);

	x = 42;
	printf("The value of x is %d\n", x);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of y is %d\n\n", y);

	y = 73;
	printf("The value of x is %d\n", x);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of y is %d\n\n", y);

	int z = 149;
	ip = &z;
	printf("The value of x is %d\n", x);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of y is %d\n\n", y);

	y = z;
	printf("The value of x is %d\n", x);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of y is %d\n\n", y);

	return 0;
}
