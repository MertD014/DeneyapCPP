
/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 2(Grup 5)
https://tr.padlet.com/iismailersin/m9z1toj4bemxm0tk

Verilen dizide tek ve çift eleman sayisini bulmak

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
		if(dizi[i]%2) odd++;
		else even++;
	}
	
	cout<<"\nCift eleman sayisi:"<<even;
	cout<<"\nTek eleman sayisi:"<<odd;
	
	return 0;
}

/* Alt 1 - Not implemented as requested   --->improved time
int main(){
	cout<<"Dizinin boyutunu girin:";
	cin>>no;
	int dizi[no];
	cout<<"Dizinin elemanlarini girin:";
	for(int i=0;i<no;i++){
		cout<<"Elemani girin dizi["<<i<<"]:";
		cin>>dizi[i];
		if(dizi[i]%2) odd++;
		else even++;
	}
	
	cout<<"\nCift eleman sayisi:"<<even;
	cout<<"\nTek eleman sayisi:"<<odd;
	
	return 0;
}
*/

/*

/* Alt 2 - Not implemented as requested  ---> improved space
int main(){
	cout<<"Dizinin boyutunu girin:";
	cin>>no;
	int dizi[no];
	cout<<"Dizinin elemanlarini girin:";
	for(int i=0;i<no;i++){
		cout<<"Elemani girin dizi["<<i<<"]:";
		cin>>dizi[i];
		if(dizi[i]%2) odd++;
		else even++;
	}
	
	cout<<"\nCift eleman sayisi:"<<even;
	cout<<"\nTek eleman sayisi:"<<odd;
	
	return 0;
}
*/


*/


