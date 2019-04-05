#include <iostream>

namespace ex_12_4 {
	class Calc
	{
	protected:
		int a;
		int b;
	public:
		Calc();
		Calc(int new_A, int new_B);
		virtual void Prn();  //오버라이딩 될 함수, 가상함수 선언
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

	void Calc::Prn()
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
		void Prn();  //기반클래스 멤버함수 오버라이딩
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

	void Add::Prn()
	{
		std::cout << "--- Add::AddPrn ---" << std::endl;
		std::cout << a << " + " << b << " = " << c << std::endl;
	}




}

using namespace ex_12_4;

//int main()
//{
//	Calc * CalcPtr;
//	CalcPtr = new Add(3, 5);
//	CalcPtr->Prn();
//
//
//	return 0;
//}