#include <iostream>
/*
	파일명 : hw4_1.cpp
	작성자 : 이예지
	작성일 : 2018년 04월 04일
	내 용 : 생성자 연습
	*/

class Box{
private:
	double height;
	double width;
	double length;
	bool empty;

public:
	Box(){
		height = 5.0;
		width = 5.0;
		length = 5.0;
		empty = false;
	}
	Box(double h, double w, double l, bool b){
		height = h;
		width = w;
		length = l;
		empty = b;
	}

	void setHeight(double h){
		height = height;
	}
	double getHeight(){
		return height;
	}

	void setWidth(double w){
		width = w;
	}
		double getWidth(){
		return width;
	}

	void setLength(double l){
		length = l;
	}
	double getLength(){
		return length;
	}

	double getVolume(){
		return height*width*length;
	}
}

double maxVolume(double b1,double b2, double b3){
	double max = b1;
	if(max<b2) max = b2;
	if(max<b3) max = b3;
	return max;
}

int main(void){
	std::cout << "hw4_1 : 이예지" << std::endl;
	Box * b1= new Box(3.5, 4.4, 5.0,false);
	Box b2;
	Box b3;

	

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	b1.getVolume


}