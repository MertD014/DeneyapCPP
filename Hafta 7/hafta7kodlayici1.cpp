/*
Kodlayici 1
a funtion to return remainder
*/



#include <bits/stdc++.h>
using namespace std;

int kalan(int a,int b){
	return (max(a,b)%min(a,b));
}


int main(){
	cout<<kalan(3,5)<<endl;
	cout<<kalan(10,5)<<endl;
	cout<<kalan(7,3)<<endl;
	return 0;
}
