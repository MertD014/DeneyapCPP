//kodlayici3
#include <bits/stdc++.h>
using namespace std;

int x,n,sum;

int main(){
	while(1){
		cin>>x;
		if(x%2){
			cout<<"Arithmetic mean:"<<(float)sum/n<<endl;
		}
		else{
			n++;
			sum+=x;
			cout<<"Sum:"<<sum<<endl;
		}
	}	
	return 0;
}
