/*
	파일명 : hw5_1.cpp
	작성자 : 이예지
	작성일 : 2018년 04월 11일
	내 용 : 복사생성자 연습
*/

#include <iostream>
#include <string>
using namespace std;

class Television{
private :
	string model;
	int price;

public :
	//매개변수가 없는 생성자 
	Television(){
		model = "MyTv";
		price = 0;
	};
	//모델명을 매개변수로 받고 가격을 0으로 초기화하되, 생성자3을 호출하여 초기화.
	Television(string s) {
	   this-> Television::Television(s, 0);
	};
	
	Television(string s, int p){
		model = s;
		price = p;
	};

	//복사 생성자 정의
	Television(const Television& copy) {
		model = copy.model;
		price = copy.price;
	}

	void SetModel(string s){
		model = s;
	}
	string GetModel(){
		return model;
	}
	void SetValue(int p){
		price = p;
	}
	int GetValue(){
		return price;
	}

	double getTax(double tax){
		return price*tax;
	}

	void discount(){
		price = price*0.9;
	}

	void discount(double disValue){
		price = price*disValue;
	}

	void print(){
		cout<<"모델명 : "<<model<<" 가격 : "<<price<<endl;
	}
};
 
int main(void){
	cout<<"hw5_1 : 이예지"<<endl;
		
	Television tv1; //생성자1 호출하도록 Television객체 생성
	Television tv2(tv1); //Television 객체 tv2를 tv1으로 초기화
	tv1.print();
	tv2.print();
	tv2.SetModel("YourTV");

	tv1.print();
	tv2.print();

}