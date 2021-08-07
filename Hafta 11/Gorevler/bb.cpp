#include <bits/stdc++.h>
using namespace std;

int main(){
	char str1[]="Bugun hava cok guzel.";
	char str2[]="Piknige gidelim.";
	char str3[50];
	int uzunluk;
	
	cout<<"str1:"<<str1<<endl;
	uzunluk = strlen(str1);
	cout<<"str1 uzunlugu:"<<uzunluk<<endl<<endl;
	
	cout<<"str2:"<<str2<<endl;
	uzunluk = strlen(str2);
	cout<<"str2 uzunlugu:"<<uzunluk<<endl<<endl;
	
	strcpy(str3,str1);
	cout<<"str3:"<<str3<<endl<<endl;
	
	strcat(str1,str2);
	cout<<"str1:"<<str1<<endl;
	uzunluk = strlen(str1);
	cout<<"str1 uzunlugu:"<<uzunluk<<endl<<endl;
	
	if(!strcmp(str1,str3))
		cout<<"iki katar birbirine esittir"<<endl;
	else
		cout<<"iki katar birbirine esit degildir"<<endl;
	
	return 0;
}
