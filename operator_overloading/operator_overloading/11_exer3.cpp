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
		std::cout << "Parent Ŭ������ ����Ʈ ������ ȣ��" << std::endl;
	}

	Base::Base(int a, int b, int c)
	{
		std::cout << "Parent Ŭ������ �Ű����� 3 ������ ȣ��" << std::endl;
		this->a = a;
		this->b = b;
		this->c = c;
	}

	Base::~Base()
	{
		std::cout << "Parent Ŭ������ �Ҹ��� ȣ��" << std::endl;
	}

	class Derived : public Base {
	public:
		Derived();
		Derived(int a, int b, int c);
		~Derived();
	};

	Derived::Derived()
	{
		std::cout << "Derive Ŭ������ ����Ʈ ������ ȣ��" << std::endl;
	}

	Derived::Derived(int a, int b, int c) : Base(a,b,c)
	{
		std::cout << "Derive Ŭ������ �Ű����� 3 ������ ȣ��" << std::endl;
		this->a = a;
		this->b = b;
		this->c = c;
	}

	Derived::~Derived()
	{
		std::cout << "Derive Ŭ������ �Ҹ��� ȣ��" << std::endl;
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