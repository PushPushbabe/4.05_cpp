#include <iostream>

namespace ex11_2 {
	class Base {

	public:
		Base();
		~Base();
	};

	Base::Base()
	{
		std::cout << "기반클래스의 생성자 " << std::endl;
	}

	Base::~Base()
	{
		std::cout << "기반클래스의 소멸자 " << std::endl;
	}

	class Derived : public Base {
	public:
		Derived();
		~Derived();

	};

	Derived::Derived()
	{
		std::cout << "파생클래스의 생성자 " << std::endl;
	}


	Derived::~Derived()
	{
		std::cout << "파생클래스의 소멸자 " << std::endl;
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