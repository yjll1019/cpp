/*
	�ۼ��� : 2018�� 04�� 07��
	�� �� : const �����Ϳ� const ������
*/

#include <iostream>
using namespace std;

int main(void){
	cout<<"prac02_4_4 : �̿���"<<endl;

	const int num = 12;
	const int * ptr = &num;
	const int * (&ref) = ptr;

	cout<<"num : "<<num<<endl;
	cout<<"const ������: "<<*ptr<<endl;
	cout<<"const ������: "<<*ref<<endl;

	return 0;
}