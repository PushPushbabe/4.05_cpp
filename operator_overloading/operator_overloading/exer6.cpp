
#include <iostream>
#include <string>

namespace exer5 {

	class string {
		char data[256];
	public : 
		string(char const  *str = '\0')
		{
			strcpy_s(data, str);
		}

		friend std::ostream& operator<<(std::ostream& os, string const string);
		friend std::istream& operator>>(std::istream& in, string& string);
	};

	std::ostream& operator<<(std::ostream& os, string const string)
	{
		os << string.data << std::endl;
		return os;
	}

	std::istream& operator>>(std::istream& in, string& string)
	{
		in >> string.data;
		return in;

	}


}

using namespace exer5;
//
//int main()
//{
//
//	string Astr = "Apple";
//	string Bstr = "Banana";
//	std::cout << Astr;
//	std::cout << Bstr;
//
//	std::cin >> Astr;
//
//	std::cout << Astr;
//
//
//
//	return 0;
//}