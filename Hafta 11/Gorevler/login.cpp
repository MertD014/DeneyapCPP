/*
deneyap hafta 11
basic sign up/login
*/

#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

string ad,password;
char act;
map<string,string> data;

int main(){
	srand(time(NULL));
	ENTRY:
		system("CLS");
		cout<<"Gorev 2 extension"<<endl;
		cout<<"1-Sign Up"<<endl;
		cout<<"2-Login"<<endl;
		act=getch();
		if(act=='1'){
			system("CLS");
			goto SIGNUP;
		}
		else if(act=='2'){
			system("CLS");
			goto LOGIN;
		}
		else {
			system("CLS");
			goto ENTRY;
		}
	
	SIGNUP:
		cout<<"Sign Up"<<endl;
		cout<<"Adinizi giriniz:";
		cin>>ad;
		
		if(data.find(ad) == data.end()){
			for(int i=0;i<ad.size();i++){
				if(!isalpha(ad[i])){
					cout<<ad[i]<<"!!!";
					cout<<"Isminiz harflerden olusmali!"<<endl;
					getch();
					goto ENTRY;
				}
			}
			
			for(int i=0;i<8;i++,password+=to_string(rand()%10));
			cout<<"Merhaba "<<ad<<"!";
			cout<<"Sifreniz: "<<password;
			data[ad]=password;
			getch();
			goto ENTRY;
			} 
		else {
			cout<<"User already exists!";
			getch();
			goto ENTRY;
		}
		
	LOGIN:
		cout<<"Sign Up"<<endl;
		cout<<"Adinizi giriniz:";
		cin>>ad;
		cout<<"Sifrenizi giriniz:";
		cin>>password;
		
		if(data.find(ad) == data.end()){
			cout<<"Wrong username or password! Press any key to return to main menu!";
			getch();
			goto ENTRY;
		} 
		
		else {
			if(data[ad]==password){
				cout<<"Login Successful!";
				getch();
				goto ENTRY;
			}
			cout<<"Wrong username or password! Press any key to return to main menu!";
			getch();
			goto ENTRY;
		}
		
		
		
		
	return 0;
}
