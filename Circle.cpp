#include "Circle.h"
void Circle::setR(int r) {
	m_R = r;
}
int Circle::getR(void) {
	return m_R;
}
void Circle::setCenter(Point Center) {
	m_Center = Center;
}
Point Circle::getCenter(void) {
	return m_Center;
}