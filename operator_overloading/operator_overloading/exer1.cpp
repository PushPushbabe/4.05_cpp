#include <iostream>

namespace exer1 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		Complex operator* (Complex);
		void ShowComplex();
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex Complex::operator*(Complex comObj)
	{
		Complex res;
		res.real = this->real * comObj.real;
		res.image = this->image * comObj.image;
		return res;

	}

	void Complex::ShowComplex()
	{
		std::cout << " ( " << this->real << " + " << this->image << "i ) " << std::endl;
	}


}

using namespace exer1;
//
//
//int main()
//{
//	Complex x = { 10,20 }, y = {30,40} ;
//	Complex z;
//
//	z = x * y;
//
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}