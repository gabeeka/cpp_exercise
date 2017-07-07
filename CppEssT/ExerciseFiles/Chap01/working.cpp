// working.cpp by Gabor
// Arrays and strings
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	//char s[] = { 's', 't', 'r', 'i', 'n', 'g', 0 };
	char s[] = "string";
	// method 1
	//for (char *cp = s; *cp; ++cp) {
	//	printf("char is %c\n", *cp);
	//}

	// method 2
	for (char c : s) {
		if (c == 0) break;
		printf("char is %c\n", c);
	}

	// method 3
	// printf("String is: %s\n", s);

	return 0;
}
