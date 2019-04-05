
#include <iostream>

namespace exer4 {

	class Complex
	{
	private:
		int real;
		int image;

	public:
		Complex(int r = 0, int i = 0);
		void AddPrefixOne(Complex);
		Complex SubOnePrefix();
		friend Complex SubOnePostfix(Complex&);
		void ShowComplex();
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	 Complex SubOnePostfix(Complex& comObj)
	{
		 Complex res = comObj;
		 comObj.real--;
		 comObj.image--;
		 return res;
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

using namespace exer4;
//
//int main()
//{
//	Complex x(1, 2), z;
//	std::cout << "-- �Լ� ȣ�� �� --\n";
//	x.ShowComplex();
//	z.ShowComplex();
//	std::cout << "-- Complex ��ü�� 1 �����ϴ� ����Լ� --\n";
//	z = SubOnePostfix(x);
//	x.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}