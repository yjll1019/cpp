
/*
파일명 : hw15_1.cpp
작성자 : 이예지
작성일 : 2018년 5월 30일
내 용 : 예외 처리
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "hw15_1 : 이예지" << endl;

	int x;

	while(1){
		cout << "\n양수 입력 >> ";

		try {
			cin >> x;
			if (cin.fail()) {
				throw 'a';
			}
			if (x<1 || x>9) {
				throw x;
			}
			for (int i = 1; i <= 9; ++i) {
				cout << x << "x" << i << "=" << x * i<<" ";
			}

		}
		catch (char c) {
			cout << "입력 오류가 발생하여 더 이상 입력되지 않습니다. 프로그램을 종료합니다." << endl;
			return 0;
		}
		catch (int x) {
			cout << x << "는 잘못된 입력입니다. 1~9 사이의 정수만 입력하세요" << endl;
		}
	}
	

    return 0;
}

