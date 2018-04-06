/*
	작성일 : 2018년 04월 06일
	내 용 : 참조자 기반의 Call-by-reference 구현.
*/

#include <iostream>

using namespace std;

void increaseValue(int &num){
	num++;
}

void change(int &num){
	num*=-1; 
}

int main(void){
	cout<<"prac02_4_1 : 이예지"<<endl;

	int value  = 1;

	cout<<"increaseValue함수 호출 전 value : "<<value<<endl;
	increaseValue(value);
	cout<<"increaseValue함수 호출 후 value : "<<value<<endl;

	cout<<"change함수 호출 전 value : "<<value<<endl;
	change(value);
	cout<<"change함수 호출 후 value : "<<value<<endl;

	cout<<"change함수 호출 전 value : "<<value<<endl;
	change(value);
	cout<<"change함수 호출 후 value : "<<value<<endl;

	return 0;
}