// variables.cpp by Gabor
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	// declaring variables
	int a, b;
	int result;

	// process
	a = 5;
	b = 2;
	a += 1;
	result = a - b;

	// print out the result
	cout << --a << " + 1 - " << b << " = " << result << endl;

	// terminate the program
	return 0;
}
