#include <iostream>

namespace ex11_2 {
	class Base {

	public:
		Base();
		~Base();
	};

	Base::Base()
	{
		std::cout << "���Ŭ������ ������ " << std::endl;
	}

	Base::~Base()
	{
		std::cout << "���Ŭ������ �Ҹ��� " << std::endl;
	}

	class Derived : public Base {
	public:
		Derived();
		~Derived();

	};

	Derived::Derived()
	{
		std::cout << "�Ļ�Ŭ������ ������ " << std::endl;
	}


	Derived::~Derived()
	{
		std::cout << "�Ļ�Ŭ������ �Ҹ��� " << std::endl;
	}

}

using namespace ex11_2;
//int main()
//{
//	Derived obj;
//
//	return 0;
//
//}