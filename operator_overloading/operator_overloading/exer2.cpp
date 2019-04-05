#include <iostream>

namespace exer2 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		friend Complex operator- (Complex const,Complex const);
		friend Complex operator- (const Complex);
		void ShowComplex();
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex operator-(Complex const des,Complex const src)
	{
		Complex res;
		res.real = des.real -  src.real;
		res.image = des.image - src.image;
		return res;

	}
	
	Complex operator-(const Complex comObj)
	{
		Complex res;
		res.real = -(comObj.real);
		res.image = -(comObj.image);
		return res;

	}

	void Complex::ShowComplex()
	{
		if (this->image > 0)
			std::cout << " ( " << this->real << " + " << this->image << "i ) " << std::endl;
		else if (this->image < 0)
			std::cout << " ( " << this->real << "  " << this->image << "i ) " << std::endl;
		else
			std::cout << " ( " << this->real << "  " << std::endl;
	}


}

using namespace exer2;

//
//
//
//int main()
//{
//	Complex x = { 10,20 }, y = { 30,40 };
//	Complex z,a;
//
//	z = x - y;
//	a = -x;
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//	a.ShowComplex();
//
//	return 0;	
//}

