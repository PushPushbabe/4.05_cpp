//������� ����̰� ������� �Ļ�Ŭ�����ΰ�?

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
//��� : seoul, �Ļ� : pusan