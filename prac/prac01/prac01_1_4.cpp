/*
  작성일 : 2018년 04월 04일
  내 용 : 데이터 입출력 연습
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_4 : 이예지"<<std::endl;

	int sell=0;

	while(sell!=-1){
		std::cout<<"판매 금액을 만원 단위로 입력하세요. :(-1 to end)"<<std::endl;
		std::cin>>sell;
		if(sell==-1) break;
		std::cout<<"이번 달 급여: "<< 50+sell*0.12<<std::endl;
	}
	
	std::cout<<"프로그램을 종료합니다.";
	return 0;
}