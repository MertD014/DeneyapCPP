#include <bits/stdc++.h>
using namespace std;

class Basketbolcu{
	public:
		string ad;
		string soyad;
		int formaNo;
		int basket;
		
		Basketbolcu(string xAd,string xSoyad,int xNo,int xBasket){
			ad=xAd;
			soyad=xSoyad;
			formaNo=xNo;
			basket=xBasket;
		}
	
};


int main(){
	Basketbolcu b1=Basketbolcu("M�mtaz","Demir",1,420);
	Basketbolcu b2=Basketbolcu("Mert","Demir",6,124);
	
	cout<<b2.ad;
	
	return 0;
}
