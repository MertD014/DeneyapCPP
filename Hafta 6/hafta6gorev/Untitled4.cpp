/*
Deneyap C++ Programlama
19/06/2021
Diziler Uygulama 2(Grup 3)
https://tr.padlet.com/iismailersin/m9z1toj4bemxm0tk

dizideki esit elemanlari bulma

*/

#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cout<<"Eleman sayisini giriniz:";
	cin>>n;
	int d[n];
	for(int i=0;i<n;i++) cin>>d[i];
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(d[i]==d[j]){
				cout<<i+1<<". eleman ve "<<j+1<<". eleman birbirine esit."<<endl;
			}
		}
	}
	
	return 0;
}
