// working.cpp by Gabor
// Iterating with for
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	char *s = "string";

	for (char *cp = s; *cp; ++cp) {
		printf("element %c\n",*cp);
	}

	return 0;
}
