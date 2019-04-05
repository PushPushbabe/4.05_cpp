#include <iostream>

namespace ex11_5 {
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
		Calc();
	};

	void Calc::Init(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	Calc::Calc()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	Calc::Calc(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	class Add : public Calc {
	public:
		void Sum();
		Add(int new_A, int new_B);
		Add();
	};

	Add::Add(int new_A, int new_B) : Calc (new_A , new_B)
	{
		//a = new_A;
		//b = new_B;
		//c = 0;
	}

	Add::Add() : Calc()
	{

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

using namespace ex11_5;

//
//int main()
//{
//	Calc x(3, 5);
//	x.prn();
//	Add y(3, 5);
//	y.prn();
//	Add z;
//	z.prn();
//
//	return 0;
//
//
//}