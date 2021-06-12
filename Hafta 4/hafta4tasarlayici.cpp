//Tasarlayici
#include <bits/stdc++.h>
using namespace std;

int sayi;

int main(){
	cin>>sayi;
	if(sayi>10) sayi-=10;
	else sayi+=10;
	cout<<sayi;
	return 0;
}
