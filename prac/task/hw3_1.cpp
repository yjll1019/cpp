#include <iostream>
/*
	���ϸ� : hw3_1.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 03�� 27��
	�� �� : Car2Ŭ���� ����.
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
	std::cout<<"�ӵ� :" << speed << " ���� ���:" << gear << std::endl;
}

int Car2::SpeedUp(){
	return ++speed;
}

void Car2::ChangeGear(int changeGear){
	gear = changeGear;
}

int main(void){
	std::cout << "hw3_1 : �̿���" << std::endl;
	Car2 myCar;// �ڵ��� ��ü �ϳ� ����(myCar��� �θ���)
	myCar.InitMember(0,1);// myCar�� �ӵ��� 0, �� 1�� ����
	myCar.Print();//myCar �������

	for(int i=0; i<20; ++i){//myCar�� �ӵ����� �� 20�� ȣ��
	myCar.SpeedUp();
	}
	myCar.Print();//myCar �������

	myCar.ChangeGear(2);//myCar�� ���� �Լ��� ȣ���Ͽ� �� 2�� ����
	myCar.Print();//myCar �������

	for(int i=0; i<20; ++i){ //myCar�� �ӵ����� �Լ��� 20�� ȣ��
	myCar.SpeedUp();
	}
	myCar.Print();//myCar �������

	return 0;
}