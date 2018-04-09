#include <iostream>
/*
	파일명 : hw4_1.cpp
	작성자 : 이예지
	작성일 : 2018년 04월 04일
	내 용 : 클래스 Box를 정의하고 이용하는 프로그램 작성하기.
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
		empty = true;
	}
	Box(double h, double w, double l, bool b){
		height = h;
		width = w;
		length = l;
		empty = b;
	}

	void SetHeight(double h){
		height = h;
	}
	double GetHeight(){
		return height;
	}

	void SetWidth(double w){
		width = w;
	}
		double getWidth(){
		return width;
	}

	void SetLength(double l){
		length = l;
	}
	double GetLength(){
		return length;
	}

	double GetVolume(){
		return height*width*length;
	}
};

	 double MaxVolume(Box &b1, Box &b2, Box &b3){
		Box max = b1;
	
		if(max.GetVolume()<b2.GetVolume()) max= b2;
		if(max.GetVolume()<b3.GetVolume()) max = b3;
		return max.GetVolume();
	}

int main(void){
	std::cout << "hw4_1 : 이예지" << std::endl;
	Box b1(3.5, 4.4, 5.0,false);
	Box b2;
	Box b3;

	b3.SetHeight(4.0);
	b3.SetLength(5.0);
	b3.SetWidth(2.4);
	//각각의 박스 부피 출력
	std::cout<<"박스1의 부피 : "<<b1.GetVolume()<<std::endl;
	std::cout<<"박스2의 부피 : "<<b2.GetVolume()<<std::endl;
	std::cout<<"박스3의 부피 : "<<b3.GetVolume()<<std::endl;

	//가장 큰 박스 출력
	double max = MaxVolume(b1, b2, b3);
	if(max == b1.GetVolume()){
		std::cout<<"박스1의 부피가 가장 큽니다. : "<<max<<std::endl;
	}
	else if(max == b2.GetVolume()){
		std::cout<<"박스2의 부피가 가장 큽니다. : "<<max<<std::endl;
	}
	else if(max == b3.GetVolume()){
		std::cout<<"박스3의 부피가 가장 큽니다. : "<<max<<std::endl;
	}
}