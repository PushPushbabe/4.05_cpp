#include <iostream>

namespace ex11_6 {
	class Calc
	{
	protected:
		int a;
		int b;
		
	public:
	
		void prn();
		Calc(int new_A, int new_B);
		Calc();
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

	void Calc::prn()
	{
		std::cout << a << "\t" << b << "\t" << std::endl;

	}

	class Add : public Calc {
	protected:
		int c;
	public:
		void Sum();
		void prn();//오버라이딩
		Add(int new_A, int new_B);
		Add();
	};

	Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
	{
		c = 0;
	}

	Add::Add() : Calc()
	{

	}

	void Add::Sum()
	{
		c = a + b;
	}

	void Add::prn() //오버라이딩 함수
	{
		std::cout << a << " + " << b << " = " << c << std::endl;
	}
	
	class Mul : public Calc {
	protected : 
		int c;
	public :
		Mul();
		Mul(int new_A, int new_B);
		void Gob();
		void prn();
	};

	Mul::Mul() : Calc()
	{
	}
	Mul::Mul(int new_A, int new_B) : Calc(new_A, new_B)
	{
		c = 0;
	}

	void Mul::Gob()
	{
		c = a * b;
	}

	void Mul::prn()
	{
		Calc::prn(); //은폐된 기반 클래스 함수 호출 가능
		std::cout <<  c << std::endl;
	}
	

}

using namespace ex11_6;
//
//int main()
//{
//	Calc x(3, 5);
//	x.prn();
//	Add y(3, 5);
//	y.Sum();
//	y.prn();
//	Mul z(3, 5);
//	z.Gob();
//	z.prn();
//
//
//	return 0;
//}