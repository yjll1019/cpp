/*
파일명 : hw15_2.cpp
작성자 : 이예지
작성일 : 2018년 5월 30일
내 용 : 예외 처리
*/
#include "stdafx.h"
#include <iostream>
using namespace std;


class Stack
{
	int sta[10];
	int index;
	int MAX = 10;
public:
	Stack()
	{
		index = 0;
		for (int i = 0; i < MAX; i++)
			sta[i] = 0;
	}
	void push(int a)
	{
		int x = 1;
		try {
			if (index >= MAX)
				throw x;
			sta[index] = a;
			index++;
		}
		catch (int x) {
			cout << "Stack Overflow" << endl;
		}
	}
	void pop()
	{	
		int x = 1;
		try {
			if (index <= 0)
				throw x;
			index--;
			sta[index] = 0;
		}
		catch (int x) {
			cout << "Stack Underflow" << endl;
		}
	}
	void display()
	{
		cout << "------------------------------------------------------------------" << endl;
		for (int i = 0; i < index; i++)
		{
			cout << "스택" << "[" << i << "]" << "에 저장된값은 :" << sta[i] << endl;
		}
	}
};

int main()
{
	Stack s;

	cout << "hw15_2 : 이예지" << endl;

	s.push(3);
	s.display();
	s.push(4);
	s.display();
	s.pop();
	s.display();
	s.pop();
	s.display();
	s.pop(); 

	return 0;
}

