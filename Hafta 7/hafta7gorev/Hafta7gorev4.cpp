/*
06/26/2021 Gorev 4
sum of biggest values in 2 arrays using a function
*/
#include <bits/stdc++.h>
using namespace std;

int findMax(int *dizi,int lenght){
	int mx=INT_MIN;
	for(int i=0;i<lenght;i++){
		mx=max(mx,dizi[i]);
	}
	return mx;
}

int dizi1[]={125,111,54,37,8,32,7};
int dizi2[]={7,367,34,123,875,213};

int main(){
	cout<<findMax(dizi1,7)+findMax(dizi2,6);
	return 0;
}
