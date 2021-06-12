//kodlayici
#include <bits/stdc++.h>
using namespace std;

int n,x,sum;

int main(){
	cin>>n;  // number of inputs
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	cout<<sum;
	return 0;
}
