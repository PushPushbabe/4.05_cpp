//어느것이 기반이고 어느것이 파생클래스인가?

namespace ex8_1 {
	class seoul {
	protected:
		int a;
	public:
		void print_a();

	};

	class pusan : public seoul
	{
	protected:
		int b;
	public:
		void print_b();

	};

}
//기반 : seoul, 파생 : pusan