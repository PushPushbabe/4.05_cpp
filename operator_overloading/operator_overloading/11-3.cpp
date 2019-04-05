#include <iostream>

namespace ex11_3 {
	class Calc
	{
	protected:
		int a;
		int b;
		int c;
	public:
		void Init(int new_A, int new_B);
		void prn();
		Calc(int new_A, int new_B);
	};

	void Calc::Init(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	Calc::Calc(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	void Calc::prn()
	{
		std::cout << a << "\t" << b << "\t" << c << std::endl;

	}

}

using namespace ex11_3;

//
//int main()
//{
//	Calc x(3, 5);
//	x.prn();
//
//	return 0;
//}