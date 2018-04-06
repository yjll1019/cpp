/*
  작성일 : 2018년 04월 04일
  내 용 : 데이터 입출력 연습
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_1 : 이예지"<<std::endl;
	
	int val;
	int sum = 0;
	for(int i=1; i<=5; ++i){
		std::cout<<i<<"번째 정수 입력: ";
		std::cin>>val;
		sum += val;
	}
	std::cout<<"합계 : "<<sum<<std::endl;
	return 0;
}