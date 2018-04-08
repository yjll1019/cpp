/*
	작성일 : 2018년 04월 08일
	내 용 : 구조체 내에 함수정의하기.
*/

#include <iostream>
using namespace std;

struct Point{
	int xpos;
	int ypos;

	//점의 좌표이동을 위한 함수 MovePos
	void MovePos(int x, int y){
		xpos+=x;
		ypos+=y;
	}

	//점의 좌표증가를 위한 함수 AddPoint
	void AddPoint(const Point &pos){
		xpos+=pos.xpos;
		ypos+=pos.ypos;
	}
	
	//현재 x, y 좌표정보 출력을 위한 함수 ShowPosition
	void ShowPosition(){
		cout<<"["<<xpos<<" ,"<<ypos<<"]"<<endl;
	}
};

int main (void){
	cout<<"prac03_1_1 : 이예지"<<endl;

	Point pos1 = {12, 4}; //처음 구조체를 정의할 때 구조체 변수를 각각 12, 4로 선언
	Point pos2 = {20, 30};

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	return 0;
}