#include <iostream>

namespace ex11_4 {
	class Calc
	{
	protected:
		int a;
		int b;
		int c;
	public:
		void Init(int new_A, int new_B);
		void prn();
	//Calc(int new_A, int new_B);
	};

	void Calc::Init(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	/*Calc::Calc(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}*/

	class Add : public Calc {
	public:
		void Sum();
		Add(int new_A, int new_B);
	};

	Add::Add(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}


	void Add::Sum()
	{
		c = a + b;
	}

	

	void Calc::prn()
	{
		std::cout << a << "\t" << b << "\t" << c << std::endl;

	}

}

using namespace ex11_4;
//
//int main()
//{
//	Add y(3, 5);
//	y.prn();
//
//
//	return 0;
//
//
//}