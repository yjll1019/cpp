/*
	파일명 : hw4_2.cpp
	작성자 : 이예지
	작성일 : 2018년 04월 09일
	내 용 : Television 생성자 연습.
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
	cout<<"hw4_2 : 이예지"<<endl;
	
	Television tv1;
	Television tv2("lg");
	Television tv3("samsung", 1000000);

	tv1.print();
	tv2.print();
	tv3.print();

	tv3.discount(0.8);
	tv3.discount();
	tv3.print();
	return 0;
}
