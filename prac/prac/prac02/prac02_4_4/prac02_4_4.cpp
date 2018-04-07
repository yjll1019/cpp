/*
	작성일 : 2018년 04월 07일
	내 용 : const 포인터와 const 참조자
*/

#include <iostream>
using namespace std;

int main(void){
	cout<<"prac02_4_4 : 이예지"<<endl;

	const int num = 12;
	const int * ptr = &num;
	const int * (&ref) = ptr;

	cout<<"num : "<<num<<endl;
	cout<<"const 포인터: "<<*ptr<<endl;
	cout<<"const 참조자: "<<*ref<<endl;

	return 0;
}