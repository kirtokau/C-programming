//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	Person(int age,int height) {
//		cout << "有参构造函数！" << endl;
//		m_age = age;
//		m_height =new int(height);
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数！" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person() {
//		cout << "析构函数！" << endl;
//		if (m_height != NULL) {
//			delete m_height;
//		}
//	}
//public:
//	int m_age;
//	int *m_height;
//};
//void test01() {
//	Person p1(18, 180);
//	Person p2(p1);
//	cout << "p1的年龄：" << p1.m_age << " 身高：" << *p1.m_height << endl;
//	cout << "p2的年龄：" << p2.m_age << " 身高：" << *p2.m_height << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}