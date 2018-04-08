/*
	�ۼ��� : 2018�� 04�� 08��
	�� �� : ����ü ���� �Լ������ϱ�.
*/

#include <iostream>
using namespace std;

struct Point{
	int xpos;
	int ypos;

	//���� ��ǥ�̵��� ���� �Լ� MovePos
	void MovePos(int x, int y){
		xpos+=x;
		ypos+=y;
	}

	//���� ��ǥ������ ���� �Լ� AddPoint
	void AddPoint(const Point &pos){
		xpos+=pos.xpos;
		ypos+=pos.ypos;
	}
	
	//���� x, y ��ǥ���� ����� ���� �Լ� ShowPosition
	void ShowPosition(){
		cout<<"["<<xpos<<" ,"<<ypos<<"]"<<endl;
	}
};

int main (void){
	cout<<"prac03_1_1 : �̿���"<<endl;

	Point pos1 = {12, 4}; //ó�� ����ü�� ������ �� ����ü ������ ���� 12, 4�� ����
	Point pos2 = {20, 30};

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	return 0;
}