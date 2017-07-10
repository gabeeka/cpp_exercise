// working.cpp by Gabor
// Function members

#include <cstdio>
using namespace std;

class A {
	int ia;
public:
	void setvalue(const int a);
	int getvalue() const;
	int getvalue();
};

void A::setvalue(const int a) {
	ia = a;
}

int A::getvalue() const {
	puts("constant getter");
	return ia;
}

int A::getvalue() {
	puts("mutable getter");
	return ia;
}

int main(int argc, char **argv)
{
	A a;
	a.setvalue(42);
	const A b = a;
	printf("values is %d\n", a.getvalue());
	printf("values is %d\n", b.getvalue());
	return 0;
}