#include <iostream>
/*
	���ϸ� : hw1_3.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 03�� 27��
	�� �� : ���ӽ����̽� ����.
*/

namespace myNs{
	
	int myMax(int num1, int num2, int num3);
	int myMin(int num1, int num2, int num3);

}

int myNs::myMax(int num1, int num2, int num3){
	int max = num1;
	if(num1>num2 && num1>num3){
		max = num1;
	}
	if(num2>num1 && num2>num3){
		max = num2;
	}
	if(num3>num1 && num3>num2){
		max = num3;
	}
	return max;
}

int myNs::myMin(int num1, int num2, int num3){
	int min = num1;
	if(num1<num2 && num1<num3){
		min = num1;
	}
	if(num2<num1 && num2<num3){
		min = num2;
	}
	if(num3<num1 && num3<num2){
		min = num3;
	}
	return min;
}

int main(void){
	std::cout << "hw1_3 : �̿���" << std::endl;
	int num1, num2, num3;
	std::cout<<"���ڸ� �Է����ּ���: ";
	std::cin >> num1 >> num2 >> num3;
	std::cout << "myMax ��� : " << myNs::myMax(num1, num2, num3) << std::endl;
	std::cout << "myMin ��� : " << myNs::myMin(num1, num2, num3) << std::endl;
	return 0;
}