//Kodlayici
#include <bits/stdc++.h>
using namespace std;

int x;

int main(){
	cout<<"Enter a integer:";
	cin>>x;
	if(x%2){
		if(x%3) cout<<"Your number is not divisible with 3.";
		else cout<<"Your number can be divided by 3.";
	}
	else{
		if(x%4) cout<<"Your number is not divisible with 4.";
		else cout<<"Your number is not divisible with 4.";
	}
	return 0;
}
