/*
a program that generates a random password containing 8 digits
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	char ad[50];
	cout<<"Adinizi giriniz:";
	cin>>ad;
	
	for(int i=0;i<strlen(ad);i++){
		if(isdigit(ad[i])){
			cout<<"Isminizde rakam olamaz!"<<endl;
			return 0;
		}
	}
	
	string password="";
	srand(time(NULL));
	for(int i=0;i<8;i++,password+=to_string(rand()%10));
	cout<<password;
	
	cout<<"Merhaba "<<ad<<"!";
	cout<<"Sifreniz: "<<password;
	
	return 0;
}
