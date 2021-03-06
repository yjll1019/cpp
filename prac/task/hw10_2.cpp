/*
파일명 : hw10_2.cpp
작성자 : 이예지
작성일 : 2018년 05월 09일
내 용 : 연산자 오버로딩 연습
*/

#include "stdafx.h"
#include "iostream"
using namespace std;

class Box {
	double length;
	double width;
	double height;
	bool isEmpty;
public:
	Box(double w, double l, double h) : length{ l }, width{ w }, height{ h } {
		isEmpty = true;
	}
	Box() : length{ 0 }, width{ 0 }, height{ 0 } {
		isEmpty = true;
	}
	double getVolume() {
		return length * width*height;
	}
	void print() {
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비:  " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl << endl;
	}

	Box operator+(const Box &ref) {
		Box box(width + ref.width, length + ref.length, height + ref.height);
		return box;
	}

	friend int operator==( Box &box1,  Box &box2);
};

int operator==( Box &box1,  Box &box2) {
	int x = (box1.getVolume() == box2.getVolume());
	return x;
}

int main()
{
	cout << "hw10_2 : 이예지" << endl;
	Box box1(10.0, 10.0, 10.0);
	Box box2(20.0, 20.0, 20.0);

	cout << "상자 #1" << endl;
	box1.print();
	cout << "상자 #2" << endl;
	box2.print();

	cout << "결과는? " << (box1 == box2) << endl;
	return 0;
}

