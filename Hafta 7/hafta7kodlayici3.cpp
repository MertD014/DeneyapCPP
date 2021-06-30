/*
Kodlayici 3
check if input is a prime number
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	if(x<2) return 0;
	int sq=sqrt(x);
	for(int i=2;i<=sq;i++)
		if(x%i==0) return false;
	return true;
}

int n;

int main(){
	cout<<"Choose a number:";
	cin>>n;
	if(isPrime(n)) cout<<"Your number is a prime!!";
	else cout<<"Your number is not a prime!!";
	return 0;
}
