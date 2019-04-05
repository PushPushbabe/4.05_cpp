#include <iostream>

namespace ex11_2 {
	class Base {
	private: int m_Pri;
	protected: int m_Pro;
	public: int m_Pub;
	};

	class Derived : public Base {
	public:
		Derived(int m_Pri = 1, int m_Pro = 2, int m_Pub = 3);
		void func();
	};

	Derived::Derived(int m_Pri, int m_Pro, int m_Pub)
	{
		//this->m_Pri�� ���ٺҰ�, ���Ŭ������ private 
		//this->m_Pri = m_Pri; //�� �Ļ�Ŭ������ �������� this�����ʹ� ���Ŭ������ ��ü�� ����Ű�� �ִ�?
		this->m_Pro = m_Pro;   //��ӹ��� ������� private�ΰ� ����
		this->m_Pub = m_Pub;

	}

	void Derived::func()
	{
		//std::cout << m_Pri�� ���ٺҰ�
		std::cout << m_Pro << std::endl;
		std::cout << m_Pub << std::endl;
	}
}

using namespace ex11_2;
//
//int main()
//{
//	Derived obj;
//	obj.func();
//
//	//std::cout << obj.m_Pri�� ���ٺҰ�
//	//std::cout << obj.m_Pro�� ���ٺҰ�
//	std::cout << obj.m_Pub << std::endl;
//
//	return 0;
//}
