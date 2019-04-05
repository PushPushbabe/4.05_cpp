#include <iostream>

namespace exer3 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		void AddPrefixOne(Complex);		
		Complex SubOnePrefix();
		void ShowComplex();
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	void Complex::AddPrefixOne(Complex comObj)
	{
		this->real++;
		this->image++;

	}

	Complex Complex::SubOnePrefix()
	{
		 --(this->real);
		 --(this->image);
		return *this;
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

using namespace exer3;

//int main()
//{
//	Complex x(1, 2), z;
//	std::cout << "-- �Լ� ȣ�� �� --\n";
//	x.ShowComplex();
//	z.ShowComplex();
//	std::cout << "-- Complex ��ü�� 1 �����ϴ� ����Լ� --\n";
//	z = x.SubOnePrefix();
//	x.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}