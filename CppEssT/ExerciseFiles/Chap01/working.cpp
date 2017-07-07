// working.cpp by Gabor
// Using the range based for loop
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	/*int a[] = { 1, 2, 3, 4, 5 };
	for (int i : a) {
		printf("element %d\n", i);
	}*/

	/*char s[] = "string";
	for (int c : s) {
		if (c != 0) printf("element %c\n", c);
	}*/

	string s = "string";
	for (int c : s) {
		printf("element %c\n", c);
	}

	return 0;
}
