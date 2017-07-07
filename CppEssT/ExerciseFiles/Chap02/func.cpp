// func.cpp by Gabor
// Returning values from a function
#include <cstdio>
#include <string>
using namespace std;

const string & func()
{
	static string s = "This is a static string";
	puts("this is func()");
	return s;
}

int main(int argc, char **argv)
{
	puts("this is main()");
	printf("returned value is %s\n", func().c_str());
	return 0;
}