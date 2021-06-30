/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 2(Grup 2)
https://tr.padlet.com/iismailersin/m9z1toj4bemxm0tk

dizideki en kucuk eleman ve indisini bulma

*/

#include <bits/stdc++.h>
using namespace std;

int n,pos=-1,mn=INT_MAX;

int main(){
	cout<<"Eleman sayisini giriniz:";
	cin>>n;
	int d[n];
	for(int i=0;i<n;i++){
		cin>>d[i];
		if(d[i]<mn){
			mn=d[i];
			pos=i;
		}
	}
	
	cout<<"En kucuk eleman "<<pos+1<<". siradaki "<<mn;
	
	return 0;
}
