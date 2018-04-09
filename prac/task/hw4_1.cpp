#include <iostream>
/*
	���ϸ� : hw4_1.cpp
	�ۼ��� : �̿���
	�ۼ��� : 2018�� 04�� 04��
	�� �� : Ŭ���� Box�� �����ϰ� �̿��ϴ� ���α׷� �ۼ��ϱ�.
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
	std::cout << "hw4_1 : �̿���" << std::endl;
	Box b1(3.5, 4.4, 5.0,false);
	Box b2;
	Box b3;

	b3.SetHeight(4.0);
	b3.SetLength(5.0);
	b3.SetWidth(2.4);
	//������ �ڽ� ���� ���
	std::cout<<"�ڽ�1�� ���� : "<<b1.GetVolume()<<std::endl;
	std::cout<<"�ڽ�2�� ���� : "<<b2.GetVolume()<<std::endl;
	std::cout<<"�ڽ�3�� ���� : "<<b3.GetVolume()<<std::endl;

	//���� ū �ڽ� ���
	double max = MaxVolume(b1, b2, b3);
	if(max == b1.GetVolume()){
		std::cout<<"�ڽ�1�� ���ǰ� ���� Ů�ϴ�. : "<<max<<std::endl;
	}
	else if(max == b2.GetVolume()){
		std::cout<<"�ڽ�2�� ���ǰ� ���� Ů�ϴ�. : "<<max<<std::endl;
	}
	else if(max == b3.GetVolume()){
		std::cout<<"�ڽ�3�� ���ǰ� ���� Ů�ϴ�. : "<<max<<std::endl;
	}
}