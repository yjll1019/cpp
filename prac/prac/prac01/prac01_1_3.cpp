/*
  작성일 : 2018년 04월 04일
  내 용 : 데이터 입출력 연습
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_3 : 이예지"<<std::endl;

	int num;
	std::cout<<"숫자를 입력해주세요.";
	std::cin>>num;

	for(int i=1; i<10; ++i){
		std::cout<<num<<" * "<<i<<" = "<<num*i<<std::endl;
	}


	return 0;
}