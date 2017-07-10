// accessors.cpp by Gabor
// Data members

#include <cstdio>
#include <string>
using namespace std;

class A {
	int ia;
	string sb;
	int ic;
public:
	A(const int a, const string &b, const int ic) : ia(a), sb(b), ic(3) {};
	void seta(const int a) { ia = a; }
	void setb(const string &b) { sb = b; }
	void setc(const int c) { ic = c; }
	int geta() const { return ia; }
	const char * getb_cstr() const { return sb.c_str(); }
	int getc() const { return ic; }
};

int main(int argc, int argv)
{
	A a(1, "two", 3);
	printf("ia is %d, sb is %s, ic is %d\n", a.geta(), a.getb_cstr(), a.getc());
	return 0;
}