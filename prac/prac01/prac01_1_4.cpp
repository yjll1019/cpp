/*
  �ۼ��� : 2018�� 04�� 04��
  �� �� : ������ ����� ����
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_4 : �̿���"<<std::endl;

	int sell=0;

	while(sell!=-1){
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է��ϼ���. :(-1 to end)"<<std::endl;
		std::cin>>sell;
		if(sell==-1) break;
		std::cout<<"�̹� �� �޿�: "<< 50+sell*0.12<<std::endl;
	}
	
	std::cout<<"���α׷��� �����մϴ�.";
	return 0;
}