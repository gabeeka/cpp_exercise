// working.cpp by Gabor
// Including files

#include <cstdio>
#include "preproc.h"
using namespace std;

int main(int argc, char **argv)
{
	printf("preprocessor macro: %d\n", ONE);
	printf("integer constatnt: %d\n", _iOne);
	printf("character string constant: %s\n", _sOne);
	return 0;
}