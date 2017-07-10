// class.cpp by Gabor
// Defining a class

#include <cstdio>
using namespace std;

// a very simple class
class Class1 {
private:
	int i;
public:
	void setValue(const int value);
	int getValue() const;
};

void Class1::setValue(const int value) {
	i = value;
}

int Class1::getValue() const {
	return i;
}

int main(int argc, char **argv) {
	int i = 47;
	Class1 object1;

	object1.setValue(i);
	printf("value is %d\n", object1.getValue());

	return 0;
}