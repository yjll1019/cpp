/*
	�ۼ��� : 2018�� 04�� 08��
	�� �� : Ŭ������ ����
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
	strcpy(s, v); //v�� ����Ű�� ���ڿ��� s����Ű�� �迭�� �����Ѵ�.
}

void Print::ShowString(){
	cout<<s<<endl;
}

int main(void){
	cout<<"prac03_2_2 : �̿���"<<endl;

	Print pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}