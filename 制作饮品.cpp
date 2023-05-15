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
//		cout << "煮农夫山泉！" << endl;
//	}
//	virtual void Brew() {
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "加入牛奶" << endl;
//	}
//};
//class Tea :public AbstractDrinking {
//public:
//	virtual void Boil() {
//		cout << "煮自来水！" << endl;
//	}
//	virtual void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "加入枸杞" << endl;
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
