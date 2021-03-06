/*
파일명 : hw13_1.cpp
작성자 : 이예지
작성일 : 2018년 05월 23일
내 용 : 함수 템플릿 
*/

#include "stdafx.h"
#include "iostream"
using namespace std;

template <class T1, class T2>
T1 biggest(T1 num1[], T2 num2) {
	T1 max = num1[0];
	for (int i = 1; i < num2; i++) {
		if (max < num1[i])
			max = num1[i];
	}
	return max;
}

int main()
{	
	cout << "hw13_1 : 이예지" << endl;

	int x[] = { 1, 10, 100, 5, 4 };
	cout << "x 중 가장 큰수 : " << biggest(x, 5) << endl;   // 5는 배열 x의 크기
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << "y 중 가장 큰수 : " << biggest(y, 6);    // 6는 배열 y의 크기
	cout << endl;

    return 0;
}

