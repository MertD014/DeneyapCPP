/*
06/26/2021 Gorev 3
biggest value in array using a function
*/
#include <bits/stdc++.h>
using namespace std;

void findMax(int *dizi,int lenght){
	int mx=INT_MIN;
	for(int i=0;i<lenght;i++){
		mx=max(mx,dizi[i]);
	}
	cout<<mx;
}

int dizim[]={1,2,5,3,8,32,7,1};

int main(){
	findMax(dizim,8);
	return 0;
}
