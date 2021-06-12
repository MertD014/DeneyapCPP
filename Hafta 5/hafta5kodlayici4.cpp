//kodlayici4
#include <bits/stdc++.h>
using namespace std;

int n,no;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%3==0 && i%7){
			no++;
		}
	}
	cout<<"There is "<<no<<" numbers that can be divided by 3 but indivisible by 7.";
	return 0;
}
