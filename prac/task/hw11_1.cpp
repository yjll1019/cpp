/*
파일명 : hw11_1.cpp
작성자 : 이예지
작성일 : 2018년 05월 16일
내 용 : 연산자 오버로딩 연습
*/
#include "stdafx.h"
#include "iostream"
using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;


public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		if (idx<0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}

	int operator[] (int idx) const
	{
		if (idx<0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	int GetArrLen() const
	{
		return arrlen;
	}


	~BoundCheckIntArray()
	{
		delete[]arr;
	}

	BoundCheckIntArray(const BoundCheckIntArray& a) {
		arrlen = a.arrlen;
		arr = new int[a.arrlen];
		for (int i = 0; i < a.GetArrLen(); i++) {
			arr[i] = a.arr[i];
		}
		
	}
	void operator=(const BoundCheckIntArray& a) {
		if (arrlen < a.arrlen) {
			cout << "길이가 작습니다." << endl;
			exit(1);
		}
		else {
			for (int i = 0; i < a.arrlen; ++i) {
				arr[i] = a[i];
			}
			arrlen = a.arrlen;
		}
	}

	friend ostream& operator<<(ostream& os, BoundCheckIntArray& arr);
	friend istream& operator>>(istream& os, BoundCheckIntArray& arr);

};


ostream& operator<<(ostream& os, BoundCheckIntArray& arr) {
	for (int i = 0; i < arr.GetArrLen(); i++) {
		os << i << "번째원소: " << arr[i] << endl;
	}
	return os;
}

istream& operator>>(istream& os, BoundCheckIntArray& arr) {
	for (int i = 0; i < arr.GetArrLen(); i++) {
		cout << i << "번째원소: ";
		cin >> arr[i];
	}
	return os;
}

int main()
{
	cout << "hw11_1 : 이예지" << endl;

	BoundCheckIntArray arr(5);

	for (int i = 0; i<5; i++)
		arr[i] = (i + 1) * 11;

	cout << "arr 출력" << endl; // cout 연산자 중복
	cout << arr << endl << endl;

	BoundCheckIntArray cpy1 = arr;    // 복사생성자
	cout << "cpy1 출력" << endl;
	cout << cpy1 << endl << endl;

	BoundCheckIntArray cpy2(3);
	cout << "cpy2 입력" << endl;
	cin >> cpy2;    // cin 연산자 중복
	cout << "cpy2 출력" << endl;
	cout << cpy2 << endl << endl;

	BoundCheckIntArray cpy3(5);
	cpy3 = cpy2;   // 대입 연산자 중복
	cout << "cpy3 출력" << endl;
	cout << cpy3 << endl << endl;
	return 0;
}

