#include <iostream>
/*
	���ϸ� : hw1_1.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 03�� 21��
	�� �� : inline�Լ� calc_volume()�� �̿��ؼ� ���� ���� ���ϱ�.
*/
double calc_volume(double r){
	double result =  (4.0/3.0)*3.14*r*r*r;
	return result;
}

int main(){
	std::cout << "hw1_1:�̿���" << std::endl;
	double val;
	std::cout << "������ �Է�: ";
	std::cin>>val;
	std::cout<<calc_volume(val);
	return 0;
}