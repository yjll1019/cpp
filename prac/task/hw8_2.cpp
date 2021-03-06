/*
파일명 : hw8_2.cpp
작성자 : 이예지
작성일 : 2018년 05월 08일
내 용 : 추상클래스와 다형성 연습.
*/

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

class Animal {
private:
	string name;
public:
	Animal(string s) {//생성자
		name = s;
	} //생성자
	string getName() {//이름에 대한 getter
		return name;
	}
	virtual void sound() {} //sound 가상함수
	virtual void newYear() {} // 한 해가 지날 때 해야할 일을 정의한 순수 가상 함수
	virtual void print() {} //출력을 위한 순수 가상 함수
};

class Dog : public Animal {
private: double speed;
public:
	Dog(string s, double sp) : Animal(s) { speed = sp; } //생성자
	virtual void sound() { cout << "멍멍 " << getName() << endl; }
	virtual void newYear() { speed += 5.0;  }
	double getSpeed() { return speed; }
	virtual void print() { cout << getName()<<" 시속"<<getSpeed()<<"km"<< endl; }
};

class Person : public Animal {
private: int age;
public:
	Person(string s, int a) :Animal(s) { age = a; }//생성자
	virtual void sound() { cout << "안녕 " << getName() << endl; }
	virtual void newYear() { age += 1; }
	double getSpeed() { return age; }
	virtual void print() { cout << getName() << " "<<getSpeed() << "세" << endl; }
};
int main()
{
	cout << "hw8_2 : 이예지" << endl;
	cout << endl;
	Animal * animal[4];
	animal[0] = new Dog("진돌이", 13.5);
	animal[1] = new Dog("진순이", 12.5);
	animal[2] = new  Person("홍길동", 20);
	animal[3] = new  Person("박길동", 25);
	
	for (int i = 0; i < 4; ++i) {//(2) 반복문을 이용하여 배열 원소들의 정보를 출력
		animal[i]->print();
	}
	cout << endl;
	for (int i = 0; i < 4; ++i) {//(3) 반복문을 이용하여 배열 원소들의 sound() 메소드를 호출
		animal[i]->sound();
	}
	cout << endl;
	cout << "--------1년 후--------" << endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();//(4) 반복문을 이용하여 배열 원소들의 newYear() 메소드를 호출
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();//(5) 반복문을 이용하여 배열 원소들의 정보를 출력
	}
	cout << endl;
	cout << "--------2년 후--------" << endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();//(6) 반복문을 이용하여 배열 원소들의 newYear() 메소드를 호출
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();//(7) 반복문을 이용하여 배열 원소들의 정보를 출력
	}

	return 0;
}

