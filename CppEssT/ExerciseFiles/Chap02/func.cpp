// func.cpp by Gabor
// Passing values to a function
#include <cstdio>
#include <string>
using namespace std;

void func(const string & fs)
{
	printf("value is %s\n", fs.c_str());
}

int main(int argc, char **argv)
{
	string s = "Hello I'm a string";
	puts("this is main()");
	func(s);
	printf("string is %s\n", s.c_str());

	return 0;
}