/* 
	�ۼ��� : 2018�� 04�� 06��
	�� �� : �Ű������� ����Ʈ ���� ������ �Լ�(����DefaultValue.cpp)�� �Լ��� �����ε� �������� �ٲ㺸��.
*/

#include<iostream>

int BoxVolume(int length, int width, int height){
	return length*width*height;
}

int BoxVolume(int length, int width){
	return length*width*1;
}

int BoxVolume(int length){
	return length*1*1;
}

int main(void){
	std::cout<<"prac01_3_1 : �̿���"<<std::endl;

	std::cout<<"[3, 3, 3] : "<<BoxVolume(3,3,3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5,5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
	
	return 0;
}