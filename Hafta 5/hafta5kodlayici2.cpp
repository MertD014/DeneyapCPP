//kodlayici2
#include <bits/stdc++.h>
using namespace std;

int x,oddNumber,sum;

int main(){
	srand(time(NULL));
	cout<<"Random numbers ----------> ";
	for(int i=0;i<10;i++){
		x=rand()%100;
		cout<<x<<" ";
		if(x%2){
			oddNumber++;
			sum+=x;
		}
	}
	cout<<endl;
	cout<<"Number of odd numbers ---> "<<oddNumber<<endl;
	cout<<"Sum of odd numbers ------> "<<sum;
	return 0;
}
