/* 
	작성일 : 2018년 04월 06일
	내 용 : 매개변수에 디폴트 값을 설정한 함수(예제DefaultValue.cpp)를 함수의 오버로딩 형식으로 바꿔보기.
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
	std::cout<<"prac01_3_1 : 이예지"<<std::endl;

	std::cout<<"[3, 3, 3] : "<<BoxVolume(3,3,3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5,5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
	
	return 0;
}