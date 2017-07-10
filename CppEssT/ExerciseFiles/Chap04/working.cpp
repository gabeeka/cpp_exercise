// working.cpp by Gabor
// Data members

#include <cstdio>
using namespace std;

class A {
public:
	int ia;
	int ib;
	int ic;
};

int main(int argc, char **argv)
{
	A a = { 1, 2, 3 };
	A *pa = &a;
	printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic);
	return 0;
}