#include <iostream>

namespace ex12_2 {
	class Calc {
	protected:
		int a;
		int b;
	public:
		Calc();
		Calc(int new_A, int new_B);
		void CalcPrn();
	};

	Calc::Calc()
	{
		a = 0;
		b = 0;
	}

	Calc::Calc(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
	}

	void Calc::CalcPrn()
	{
		std::cout << "--- Calc::CalcPrn ---" << std::endl;
		std::cout << a << "\t" << b << std::endl;
	}

	class Add : public Calc
	{
	protected:
		int c;
	public:
		Add();
		Add(int new_A, int new_B);
		void Sum();
		void AddPrn();
	};

	Add::Add() : Calc()
	{

	}

	Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	void Add::Sum()
	{
		c = a + b;

	}

	void Add::AddPrn()
	{
		std::cout << "--- Add::AddPrn ---" << std::endl;
		std::cout << a << " + " << b << " = " << c << std::endl;
	}
}
using namespace ex12_2;
//
//int main()
//{
//	Calc *CalcPtr;
//	CalcPtr = new Add(3, 5); //업캐스팅
//	CalcPtr->CalcPrn();
//
//	Add * AddPtr;
//	AddPtr = (Add*)CalcPtr; //다운캐스팅
//	AddPtr->CalcPrn();
//	AddPtr->Sum();
//	AddPtr->AddPrn();
//
//
//	return 0;
//}