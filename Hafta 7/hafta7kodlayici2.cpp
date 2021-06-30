/*
Kodlayici 2
average of the array 0's excluded
*/



#include <bits/stdc++.h>
using namespace std;

float gradeAverage(int *arr,int length){
	int no=0,sum=0;
	for(int i=0;i<length;i++){
		if(arr[i]) no++;
		sum+=arr[i];
	}
	return (float)sum/no;		
}


int d[]={0,2,5,26,6,4};

int main(){
	cout<<gradeAverage(d,6);
	return 0;
}
