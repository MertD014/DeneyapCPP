/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 2(Grup 1)
https://tr.padlet.com/iismailersin/m9z1toj4bemxm0tk

2 dizinin elemanlarini carparak yeni bir dizi olusturmak

*/

#include <bits/stdc++.h>
using namespace std;

int d[4],dd[4],ddd[4];
int main(){
	for(int i=0;i<4;i++){
	cout<<"1.dizinin "<<i+1<<". numarasini giriniz"<<endl;  
	cin>>d[i];
	}
	for(int i=0;i<4;i++){
		cout<<"2.dizinin "<<i+1<<". numarasini giriniz"<<endl;
    	cin>>dd[i];
	}
	cout<<endl;
	for(int i=0;i<4;i++){
		ddd[i]=d[i]*dd[i];
		cout<<"3.dizinin "<<i+1<<". elemani:"<<ddd[i]<<endl;
	}
	return 0;
}
