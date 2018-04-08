/*
	ÀÛ¼ºÀÏ : 2018³â 04¿ù 08ÀÏ
	³» ¿ë : Å¬·¡½ºÀÇ Á¤ÀÇ
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
		cout<<"µ¡¼À:"<<add<<" »¬¼À:"<<min<<" °ö¼À:"<<mul<<" ³ª´°¼À:"<<div<<endl;
	}
};

int main(void){
	cout<<"prac03_2_1 : ÀÌ¿¹Áö"<<endl;
	
	Calculator cal;
	cal.init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();

}