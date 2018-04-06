#include <iostream>
/*
	파일명 : hw1_3.cpp
	작성자 : 이예지
	작성일 : 2018년 03월 27일
	내 용 : 네임스페이스 연습.
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
	std::cout << "hw1_3 : 이예지" << std::endl;
	int num1, num2, num3;
	std::cout<<"숫자를 입력해주세요: ";
	std::cin >> num1 >> num2 >> num3;
	std::cout << "myMax 결과 : " << myNs::myMax(num1, num2, num3) << std::endl;
	std::cout << "myMin 결과 : " << myNs::myMin(num1, num2, num3) << std::endl;
	return 0;
}