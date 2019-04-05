
#include <iostream>

namespace exer5 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		Complex operator-(Complex);
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex Complex::operator-(Complex subobj)
	{
		Complex res;
		res.real = this->real - subobj.real;
		res.image = this->image - subobj.image;
		return res;
	}


	void Complex::ShowComplex()
	{
		if (this->image > 0)
			std::cout << " ( " << this->real << " + " << this->image << "i ) " << std::endl;
		else if (this->image < 0)
			std::cout << " ( " << this->real << "  " << this->image << "i ) " << std::endl;
		else if (this->image == 0)
			std::cout << " ( " << this->real << " ) " << std::endl;
	}


}

using namespace exer5;
//
//int main()
//{
//	Complex x(1, 2), y(2, 4), z;
//	std::cout << "-- µÎ Complex °´Ã¼¿¡ ´ëÇÑ »¬¼À\n";
//	z = x - y;
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//
//	return 0;
//}