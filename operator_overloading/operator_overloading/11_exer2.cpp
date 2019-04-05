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
		//this->m_Pri는 접근불가, 기반클래스의 private 
		//this->m_Pri = m_Pri; //왜 파생클래스의 생성자의 this포인터는 기반클래스의 객체를 가리키고 있니?
		this->m_Pro = m_Pro;   //상속받은 멤버들은 private인걸 못씀
		this->m_Pub = m_Pub;

	}

	void Derived::func()
	{
		//std::cout << m_Pri는 접근불가
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
//	//std::cout << obj.m_Pri는 접근불가
//	//std::cout << obj.m_Pro는 접근불가
//	std::cout << obj.m_Pub << std::endl;
//
//	return 0;
//}
