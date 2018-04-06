/*
  작성일 : 2018년 04월 04일
  내 용 : 데이터 입출력 연습
*/

#include <iostream>

int main(void){
	std::cout<<"prac01_1_2 : 이예지"<<std::endl;

	char name[50];
	char number[50];
	
	std::cout<<"이름을 입력해주세요.";
	std::cin>>name;
	std::cout<<"전화번호를 입력해주세요.";
	std::cin>>number;

	std::cout<<"제 이름은 "<<name<<" 입니다."<<std::endl;
	std::cout<<"제 전화번호는 "<<number<<" 입니다."<<std::endl;
	return 0;

}