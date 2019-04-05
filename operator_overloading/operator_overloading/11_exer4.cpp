#include <iostream>

namespace ex_11_4 {

	class Base {
	public:
		void Prn();

	};

	void Base::Prn()
	{
		std::cout << "Base Method" << std::endl;

	}

	class Derived : public Base
	{
	public:
		void Prn();

	};

	void Derived::Prn()
	{
		std::cout << "Derived Method" << std::endl;
	}
}

using namespace ex_11_4;
//int main()
//{
//	Derived cObj;
//	cObj.Prn();
//
//
//	return 0;
//}