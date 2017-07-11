// namespace.cpp
// Namespaces
#include <cstdio>
#include <string>

namespace bwstring {

	const std::string prefix = "(bwstring)";

	class string {
		std::string _s = "";
		string();
	public:
		string(const std::string & s) : _s(prefix + s) {};
		const char * c_str() { return _s.c_str(); }
		operator const std::string & () { return _s; }
	};
};	// namespace bwstring

using bwstring::string;

std::string s1("This is a string");

int main(int argc, char **argv)
{
	string s(s1);
	std::puts(s.c_str());
	return 0;
}