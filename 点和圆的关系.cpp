#include "point.h"
#include "Circle.h"

void isInCircle(Circle &c,Point &p) {
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rdistance = c.getR() * c.getR();
	if (distance == rdistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rdistance) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����԰��" << endl;
	}
}
//int main(void) {
//	Circle c;
//	Point center;
//	c.setR(10);
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	isInCircle(c, p);
//	system("pause");
//	return 0;
//
//}