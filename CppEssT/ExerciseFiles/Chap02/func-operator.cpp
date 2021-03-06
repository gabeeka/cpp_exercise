// func-operator.cpp by Gabor
// Overloading operators with functions
#include <cstdio>
using namespace std;

class A {
	int a;
public:
	A(const int &a) : a(a) {};
	const int & value() const { return a; }
};

int operator + (const A & lhs, const A & rhs) {
	puts("operator + for class A");
	return lhs.value() + rhs.value();
}

int main(int argc, char ** argv) {
	A a(7);
	A b(42);
	printf("add em up! %d\n", a + b);
	return 0;
}
