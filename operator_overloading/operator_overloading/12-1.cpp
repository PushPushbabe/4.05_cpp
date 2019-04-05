#include <iostream>

namespace ex12_1 {
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
using namespace ex12_1;



//int main()
//{
//	Add AddObj(3, 5);
//	Add * AddPtr;
//	AddPtr = &AddObj; //파생클래스의 포인터
//	AddPtr->Sum();
//	AddPtr->AddPrn();
//
//	Calc *CalcPtr;
//	CalcPtr = &AddObj; //기반클래스의 포인터가 파생클래스를 가르킴
//	//CalcPtr->Sum();은 할 수없다. 기반클래스로부터 상속받은 부분만 접근 가능	
//	CalcPtr->CalcPrn();
//
//
//
//	return 0;
//}