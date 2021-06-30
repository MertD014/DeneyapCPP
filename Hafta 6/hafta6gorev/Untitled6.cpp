/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 2(Grup 1)
https://tr.padlet.com/iismailersin/m9z1toj4bemxm0tk

dizide 3e ve 5e bölünebilen elemanlari bulma

*/


#include <bits/stdc++.h>
using namespace std;

int odd,even,no;

int main(){
	cout<<"Dizinin boyutunu girin:";
	cin>>no;
	int dizi[no];
	cout<<"Dizinin elemanlarini girin:";
	for(int i=0;i<no;i++){
		cout<<"Elemani girin dizi["<<i<<"]:";
		cin>>dizi[i];
	}
	
	for(int i=0;i<no;i++){
		if(dizi[i]%3==0) div3++;
		if(dizi[i]%5==0) div5++;
	}
	
	cout<<"\n3 ile bölünenlerin sayisi:"<<div3;
	cout<<"\nTek eleman sayisi:"<<div5;
	
	return 0;
}
