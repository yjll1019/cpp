#include <iostream>
/*
	파일명 : hw3_1.cpp
	작성자 : 이예지
	작성일 : 2018년 03월 27일
	내 용 : Car2클래스 생성.
*/
class Car2{
private:
	int speed;
	int gear;
public:
	void InitMember(int carSpeed,int changeGear);
	void Print();
	int SpeedUp();
	void ChangeGear(int changeGear);
};

void Car2::InitMember(int carSpeed, int changeGear){
	speed = carSpeed;
	gear = changeGear;
}

void Car2::Print(){
	std::cout<<"속도 :" << speed << " 현재 기어:" << gear << std::endl;
}

int Car2::SpeedUp(){
	return ++speed;
}

void Car2::ChangeGear(int changeGear){
	gear = changeGear;
}

int main(void){
	std::cout << "hw3_1 : 이예지" << std::endl;
	Car2 myCar;// 자동차 객체 하나 생성(myCar라고 부르자)
	myCar.InitMember(0,1);// myCar의 속도를 0, 기어를 1로 지정
	myCar.Print();//myCar 정보출력

	for(int i=0; i<20; ++i){//myCar의 속도증가 를 20번 호출
	myCar.SpeedUp();
	}
	myCar.Print();//myCar 정보출력

	myCar.ChangeGear(2);//myCar의 기어변속 함수를 호출하여 기어를 2로 변경
	myCar.Print();//myCar 정보출력

	for(int i=0; i<20; ++i){ //myCar의 속도증가 함수를 20번 호출
	myCar.SpeedUp();
	}
	myCar.Print();//myCar 정보출력

	return 0;
}