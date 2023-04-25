#pragma once
#include<iostream>
using namespace std;

class Point {
public:
	void setX(int x);
	int  getX(void);
	void setY(int y);
	int  getY(void);
private:
	int m_X;
	int m_Y;
};
