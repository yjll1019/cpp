#include <iostream>
/*
	파일명 : hw1_1.cpp
	작성자 : 이예지
	작성일 : 2018년 03월 21일
	내 용 : inline함수 calc_volume()을 이용해서 구의 부피 구하기.
*/
double calc_volume(double r){
	double result =  (4.0/3.0)*3.14*r*r*r;
	return result;
}

int main(){
	std::cout << "hw1_1:이예지" << std::endl;
	double val;
	std::cout << "반지름 입력: ";
	std::cin>>val;
	std::cout<<calc_volume(val);
	return 0;
}