#include<iostream>
using namespace std;
class Base {
public:
	virtual void func() = 0;
};
class Son :public Base {
public:
	virtual void func() {
		cout << "func()µ÷ÓÃ" << endl;
	}
};
void test01() {
	Base* base = NULL;
	base = new Son();
	base->func();
	delete base;
}
int main() {
	test01();
	system("pause");
	return 0;
}