/*
	�ۼ��� : 2018�� 04�� 06��
	�� �� : ������ ����� Call-by-reference ����.
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
	cout<<"prac02_4_1 : �̿���"<<endl;

	int value  = 1;

	cout<<"increaseValue�Լ� ȣ�� �� value : "<<value<<endl;
	increaseValue(value);
	cout<<"increaseValue�Լ� ȣ�� �� value : "<<value<<endl;

	cout<<"change�Լ� ȣ�� �� value : "<<value<<endl;
	change(value);
	cout<<"change�Լ� ȣ�� �� value : "<<value<<endl;

	cout<<"change�Լ� ȣ�� �� value : "<<value<<endl;
	change(value);
	cout<<"change�Լ� ȣ�� �� value : "<<value<<endl;

	return 0;
}