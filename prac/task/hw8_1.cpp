/*
파일명 : hw8_1.cpp
작성자 : 이예지
작성일 : 2018년 05월 08일
내 용 : 추상클래스 연습.
*/

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

class Animal {
private:
	string name;
public:
	Animal(string s) {
		name = s;
	} //생성자
	string getName() {
		return name;
	}
	virtual void sound() {}
};

class Dog : public Animal {
public : 
		 Dog(string s) : Animal(s){ } //생성자
		 virtual void sound() { cout << "멍멍 " << getName() << endl; }
};

class Person : public Animal {
public: 
	Person(string s) :Animal(s) {}//생성자
	virtual void sound() { cout << "안녕 "<<getName()<<endl; }
};
int main()
{
	cout << "hw8_1 : 이예지" << endl;
	Dog * dog = new Dog("진돌이");
	dog->sound();

	Person * person = new Person("홍길동");
	person->sound();
	return 0;
}

