#include <iostream>


namespace ex11_3
{
	class Base {
	protected:
		int a, b, c;
	public:
		Base();
		Base(int a, int b, int c);
		~Base();
	};

	Base::Base()
	{
		std::cout << "Parent 클래스의 디폴트 생성자 호출" << std::endl;
	}

	Base::Base(int a, int b, int c)
	{
		std::cout << "Parent 클래스의 매개변수 3 생성자 호출" << std::endl;
		this->a = a;
		this->b = b;
		this->c = c;
	}

	Base::~Base()
	{
		std::cout << "Parent 클래스의 소멸자 호출" << std::endl;
	}

	class Derived : public Base {
	public:
		Derived();
		Derived(int a, int b, int c);
		~Derived();
	};

	Derived::Derived()
	{
		std::cout << "Derive 클래스의 디폴트 생성자 호출" << std::endl;
	}

	Derived::Derived(int a, int b, int c) : Base(a,b,c)
	{
		std::cout << "Derive 클래스의 매개변수 3 생성자 호출" << std::endl;
		this->a = a;
		this->b = b;
		this->c = c;
	}

	Derived::~Derived()
	{
		std::cout << "Derive 클래스의 소멸자 호출" << std::endl;
	}
}
using namespace ex11_3;


//int main()
//{
//	Derived one;
//
//	Derived two(10, 20, 30);
//
//	return 0;
//}