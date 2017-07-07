// working.cpp by Gabor
// Conditionals
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	int x = 42;
	int y = 73;

	printf("the greater is: %d\n\n", x > y ? x : y);

	if (x < y) {
		puts("x < y");
	}
	else  if (x > y) {
		puts("x > y");
	}
	else {
		puts("they must be equal");
	}


	return 0;
}
