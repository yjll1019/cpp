/*
	작성일 : 2018년 04월 08일
	내 용 : 클래스의 정의
*/

#include <iostream>
#include <cstring>
using namespace std;

class Print{
private : 
	char s[30];
public :
	void SetString(char* v);
	void ShowString();
};

void Print::SetString(char* v){
	strcpy(s, v); //v가 가르키는 문자열을 s가르키는 배열에 복사한다.
}

void Print::ShowString(){
	cout<<s<<endl;
}

int main(void){
	cout<<"prac03_2_2 : 이예지"<<endl;

	Print pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}