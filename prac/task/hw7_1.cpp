/*
파일명 : hw7_1.cpp
작성자 : 이예지
작성일 : 2018년 04월 18일
내 용 : 상속 연습
*/
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;




class ColorPoint : public Point{
private:
	string color;
public:
	ColorPoint() : Point(0,0){
		color = "BLACK";
	}

	ColorPoint(int x, int y) : Point(x, y){
		color = "BLACK";
	}

	void setPoint(int x, int y) {
		move(x, y);
	}

	void setColor(string mycolor) {
		color = mycolor;
	}

	void show() {
		cout << this->color << "색으로" << "(" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
	}
};
int main()
{
	cout << "hw7_1:이예지" << endl;
	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다.

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); // cp를 출력한다.
    return 0;
}

