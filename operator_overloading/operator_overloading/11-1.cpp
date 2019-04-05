#include <iostream>

namespace ex11_1 {
	class Calc
	{
	protected :
		int a;
		int b;
		int c;
	public :
		void Init(int new_A, int new_B);
		void prn();

	};

	void Calc::Init(int new_A, int new_B)
	{
		a = new_A;
		b = new_B;
		c = 0;
	}

	void Calc::prn()
	{
		std::cout << a << "\t" << b << "\t" << c << std::endl;

	}


	class Add : public Calc {
	public :
		void Sum();
	};

	void Add::Sum()
	{
		c = a + b;
	}

	class Mul : public Calc {
	public :
		void Gob();
	};

	void Mul::Gob()
	{
		c = a * b;
	}

}

using namespace ex11_1;
//
//int main()
//{
//	Add x;
//	x.Init(3, 5);
//	Mul y;
//	y.Init(2, 7);
//	x.Sum();
//	x.prn();
//	y.Gob();
//	y.prn();
//
//
//
//	return 0;
//}