/*

Ödevler:
1. Kodlayici  - “Ahmet BAYRaKtAR” seklinde girilen ad soyad için, soyadinin sadece 
ilk harfini büyük harfe diger harflerini küçük harfe çeviren programi yazalim.


*/

#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
	cout<<"Kac isminiz var:";
	cin>>n;
	cout<<"Isminizi giriniz:";
	for(int i=0;i<n;i++){
		cin>>s;
		for(int i=0;i<s.size();i++)
			s[i]=tolower(s[i]);
		s[0]=toupper(s[0]);
		cout<<s<<" ";
	}
	return 0;
}
