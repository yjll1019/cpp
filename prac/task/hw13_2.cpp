/*
파일명 : hw13_2.cpp
작성자 : 이예지
작성일 : 2018년 05월 23일
내 용 : 함수 템플릿 특수화
*/

#include "stdafx.h"
#include "iostream"
using namespace std;


class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>
T bigger (T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if (a > b) return a;
	else return b;
};

template<>
Circle bigger(Circle a, Circle b) {
	if ((a.getRadius()) > (b.getRadius())) {
		return a;
	}
	else return b;
	
}

int main() {
	cout << "hw13_2 : 이예지" << endl;

	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;

	double d = 10.3, e = 20.4, f;
	f = bigger(d, e);
	cout << "10.3과 20.4중 큰 값은 " << f << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}
