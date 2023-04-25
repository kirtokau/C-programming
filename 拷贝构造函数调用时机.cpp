#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		cout << "无参构造函数" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "有参构造函数" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "拷贝构造函数！" << endl;
		mAge = p.mAge;
	}
	~Person() {
		cout << "析构函数！" << endl;
	}
public:
	int mAge;
};
void test01() {
	Person man(100);
	Person newman(man);
	Person newman2 = man;
}
void dowork(Person p1) {}
void test02() {
	Person p;
	dowork(p);
}
Person dowork02() {
	Person p1;
	cout << (int*)&p1<< endl;
	return p1;
}
void test03() {
	Person p = dowork02();
	cout << (int*)&p << endl;
}
int main() {
	//test01();
	/*test02();*/
	test03();
	system("pause");
	return 0;
}