/*
	���ϸ� : hw4_2.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 04�� 09��
	�� �� : Television ������ ����.
*/

#include <iostream>
#include <string>
using namespace std;

class Television{
private :
	string model;
	int price;

public :
	//�Ű������� ���� ������ 
	Television(){
		model = "MyTv";
		price = 0;
	};
	//�𵨸��� �Ű������� �ް� ������ 0���� �ʱ�ȭ�ϵ�, ������3�� ȣ���Ͽ� �ʱ�ȭ.
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
		cout<<"�𵨸� : "<<model<<" ���� : "<<price<<endl;
	}
};

int main(void){
	cout<<"hw4_2 : �̿���"<<endl;
	
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
