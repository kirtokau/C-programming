//#include<iostream>
//using namespace std;
//class AbstractDrinking {
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//class Coffee :public AbstractDrinking {
//public:
//	virtual void Boil() {
//		cout << "��ũ��ɽȪ��" << endl;
//	}
//	virtual void Brew() {
//		cout << "���ݿ���" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "�����ȵ��뱭��" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "����ţ��" << endl;
//	}
//};
//class Tea :public AbstractDrinking {
//public:
//	virtual void Boil() {
//		cout << "������ˮ��" << endl;
//	}
//	virtual void Brew() {
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "����ˮ���뱭��" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "�������" << endl;
//	}
//};
//void Dowork(AbstractDrinking* drink) {
//	drink->MakeDrink();
//	delete drink;
//}
//void test01() {
//	Dowork(new Coffee);
//	cout << "---------------------" << endl;
//	Dowork(new Tea);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
