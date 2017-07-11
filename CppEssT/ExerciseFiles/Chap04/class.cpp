// class.cpp
// Pointing to current object with *this

#include <cstdio>
using namespace std;

// a very simple class
class Class1 {
	int i = 0;
public:
	void setvalue(const int value) { i = value; }
	int getvalue() const;
};

int Class1::getvalue() const {
	printf("getvalue(): this is %p\n", this);
	return i;
}

int main(int argc, char **argv)
{
	int i = 47;
	Class1 object1;
	Class1 object2;

	object1.setvalue(i);
	object2.setvalue(i);
	printf("values is %d\n", object1.getvalue());
	printf("address of object1 is %p\n", &object1);
	printf("values is %d\n", object2.getvalue());
	printf("address of object1 is %p\n", &object2);
	return 0;
}