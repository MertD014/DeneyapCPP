/*
Hafta 8 Kodlayici

given the radius calculate area of swimming pools using classes

*/

#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;

class Pool{
	public:
		float radius;
	public:
		float getArea();
};


float Pool::getArea(){
	return PI*radius*radius;
}



float r1,r2;

int main(){
	cout<<"Radius of the first pool:";
	cin>>r1;
	cout<<"Radius of the second pool:";
	cin>>r2;
	
	Pool p1,p2;
	p1.radius=r1;
	p2.radius=r2;
	
	cout<<"Area of the pools are "<<p1.getArea()<<" and "<<p2.getArea();
	
	return 0;
}
