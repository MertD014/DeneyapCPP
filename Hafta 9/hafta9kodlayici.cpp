#include <bits/stdc++.h>
#include "Point.hpp"

using namespace std;

Point *p1 = new Point;


int main(){
	p1->setPos(4,3);
	if(!p1->isOrigin())
		cout<<p1->getDist();
	else cout<<"Your point is at origin!!";
	return 0;
	
}
