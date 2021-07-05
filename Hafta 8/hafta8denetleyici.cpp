/*
Hafta 8 denetleyici

a program to calculate the area and perimeter of a garden using class


*/

#include <bits/stdc++.h>
using namespace std;

class Garden{
	public:
		float edgeA;
		float edgeB;
	public:
		float getArea();
		float getPerimeter();
};


float Garden::getArea(){
	return edgeA*edgeB;
}

float Garden::getPerimeter(){
	return 2*(edgeA+edgeB);
}




int main(){
	Garden g1;
	g1.edgeA=5.4;
	g1.edgeB=2;
	
	cout<<g1.getArea()<<endl;
	cout<<g1.getPerimeter();
	return 0;
}
