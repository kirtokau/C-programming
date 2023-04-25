#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class Circle {
public:
	void setR(int r);
	int getR(void);
	void setCenter(Point center);
	Point getCenter(void);

private:
	int m_R;
	Point m_Center;

};
