#include <iostream>

namespace ex10_6 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		friend std::ostream& operator<<(std::ostream& os, const Complex &comObj);

	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}


	std::ostream& operator<<(std::ostream& os, const Complex& comObj)
	{
		std::cout << "( " << comObj.real << " + " << comObj.image << "i )"; //namespace외부에 있을땐 매개변수에 접근이 안된다고 나오네?
		return os;
	}


	
};

using namespace ex10_6;



//
//int main()
//{
//
//	Complex x(10, 20);
//	std::cout << x;
//
//	return 0;
//
//}