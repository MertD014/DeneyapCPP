/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 1

Verilen ogrenci sayisindan sinif ortalamasi hesaplama

*/

#include <bits/stdc++.h>
using namespace std;

int ogrenciNo,sum;

int main(){
	cout<<"Ogrenci sayisini giriniz:";
	cin>>ogrenciNo;
	int notlar[ogrenciNo];
	
	for(int i=0;i<ogrenciNo;i++){
		cout<<i+1<<".ogrenci notunu giriniz:";
		cin>>notlar[i];
	}
	
	for(int i=0;i<ogrenciNo;i++){
		sum+=notlar[i];
	}
	
	cout<<"Sinif ortalamasi:"<<sum/ogrenciNo<<endl;
	
	return 0;
}


/*  Alt 1 - Not implemented as requested
int main(){
	cout<<"Ogrenci sayisini giriniz:";
	cin>>ogrenciNo;
	int notlar[ogrenciNo];
	
	for(int i=0;i<ogrenciNo;i++){
		cout<<i+1<<".ogrenci notunu giriniz:";
		cin>>notlar[i];
		sum+=notlar[i];
	}
	
	cout<<"Sinif ortalamasi:"<<sum/ogrenciNo<<endl;
	
	return 0;
}

*/
