/*
  �ۼ��� : 2018�� 04�� 04��
  �� �� : ������ ����� ����
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_1 : �̿���"<<std::endl;
	
	int val;
	int sum = 0;
	for(int i=1; i<=5; ++i){
		std::cout<<i<<"��° ���� �Է�: ";
		std::cin>>val;
		sum += val;
	}
	std::cout<<"�հ� : "<<sum<<std::endl;
	return 0;
}