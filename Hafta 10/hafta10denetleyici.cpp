/*

alanYaz1 fonksiyonu asiri y�klenmistir

output:
15
8.4
64
44.89

*/


#include <bits/stdc++.h>
using namespace std;

class Dikdortgen{
	public:
		void alanYaz1(int x,int y){
			cout<<x*y<<endl;
		}
		void alanYaz2(int x){
			cout<<x*x<<endl;
		}
		void alanYaz1(int x,double y){
			cout<<x*y<<endl;
		}
		void alanYaz3(double x){
			cout<<x*x<<endl;
		}
};

int main(){
	
	Dikdortgen dikt;
	dikt.alanYaz1(3,5);
	dikt.alanYaz1(4,2.1);
	dikt.alanYaz2(8);
	dikt.alanYaz3(6.7);
	
	return 0;
}
