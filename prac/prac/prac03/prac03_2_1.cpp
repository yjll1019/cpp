/*
	�ۼ��� : 2018�� 04�� 08��
	�� �� : Ŭ������ ����
*/

#include <iostream>
using namespace std;

class Calculator{
private :
	int add, min, mul, div;
public :
	void init(){
		add=0; min=0; mul=0; div=0;
	}

	double Add(double num1, double num2){
		add++;
		return num1+num2;;
	}

	double Min(double num1, double num2){
		min++;
		return num1-num2;
	}

	double Mul(double num1, double num2){
		mul++;
		return num1*num2;
	}

	double Div(double num1, double num2){
		div++;
		return num1/num2;
	}

	void ShowOpCount(){
		cout<<"����:"<<add<<" ����:"<<min<<" ����:"<<mul<<" ������:"<<div<<endl;
	}
};

int main(void){
	cout<<"prac03_2_1 : �̿���"<<endl;
	
	Calculator cal;
	cal.init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();

}