#include <iostream>
/*
	���ϸ� : hw1_2.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 03�� 21��
	�� �� : ����Ʈ �Ű����� ����� �̿��� sum()�Լ� �ۼ��ϱ�.
*/

int sum(int a, int b, int c=0, int d=0){
	return a+b+c+d;
}

int main(){
	std::cout << "hw1_2 : �̿���" << std::endl;
	std::cout << "sum(10, 15)=" << sum(10, 15)<< std::endl;
	std::cout << "sum(10, 15, 25)=" << sum(10, 15, 25)<< std::endl;;
	std::cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << std::endl;
	return 0;
}