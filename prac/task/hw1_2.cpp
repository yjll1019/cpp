#include <iostream>
/*
	파일명 : hw1_2.cpp
	작성자 : 이예지
	작성일 : 2018년 03월 21일
	내 용 : 디펄트 매개변수 기능을 이용한 sum()함수 작성하기.
*/

int sum(int a, int b, int c=0, int d=0){
	return a+b+c+d;
}

int main(){
	std::cout << "hw1_2 : 이예지" << std::endl;
	std::cout << "sum(10, 15)=" << sum(10, 15)<< std::endl;
	std::cout << "sum(10, 15, 25)=" << sum(10, 15, 25)<< std::endl;;
	std::cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << std::endl;
	return 0;
}