/*
파일명 : hw10_3.cpp
작성자 : 이예지
작성일 : 2018년 05월 10일
내 용 : 연산자 오버로딩 연습
*/
#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time() {
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m) {
		hours = h;
		minutes = m;
	}

	Time& operator++() { 
		minutes += 1;
		if (minutes == 60) {
			hours += 1; 
			minutes = 0;
		}

		return *this;
	}

	Time& operator++(int) { //후위증가
		minutes += 1;
		if (minutes == 60) {
			hours += 1;
			minutes = 0;
		}

		return *this;
	}

	friend ostream& operator<<(ostream& os, Time &time);
	friend Time& operator+=(Time &time, int x);
};

ostream& operator<<(ostream& os, Time& time) {
	os << time.hours << " : " << setw(2)<< setfill('0') << time.minutes << endl;
	return os;
}

Time& operator+=(Time &time, int x) {
	int h = (x / 60); //125이면 2대입.
	int m = (x % 60); //1시간 단위로 나누고 나머지 (분) >> 125이면 5대입.
	time.hours += h;
	time.minutes += m;
	return time;
}

int main()
{
	cout << "hw10_3 : 이예지" << endl;
	
	Time t1(10, 59);

	cout << t1;

	++t1;
	cout << t1;

	t1++;
	cout << t1;

	t1 += 125;
	cout << t1;

    return 0;
}

