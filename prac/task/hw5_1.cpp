/*
	���ϸ� : hw5_1.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 04�� 11��
	�� �� : ��������� ����
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

	//���� ������ ����
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
		cout<<"�𵨸� : "<<model<<" ���� : "<<price<<endl;
	}
};
 
int main(void){
	cout<<"hw5_1 : �̿���"<<endl;
		
	Television tv1; //������1 ȣ���ϵ��� Television��ü ����
	Television tv2(tv1); //Television ��ü tv2�� tv1���� �ʱ�ȭ
	tv1.print();
	tv2.print();
	tv2.SetModel("YourTV");

	tv1.print();
	tv2.print();

}