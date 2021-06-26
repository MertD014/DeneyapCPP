/*
	Hafta 6 tasarlayici
	write a program using 2d arrays that calculates grade average 
	of 6 student who takes chemistry and biology
		
		
*/

#include <bits/stdc++.h>
using namespace std;

int d[6][2];

int main(){
	for(int i=0;i<6;i++)				//can use a any number of students
		cin>>d[i][0]>>d[i][1];
		
	
	for(int i=0;i<2;i++){				//and classes
		int sum=0;
		for(int j=0;j<6;j++){
			sum+=d[j][i];
		}
		cout<<"Grade avrage for class number "<<i+1<<" is "<<(float)sum/6<<endl;
	}
	
	return 0;
}
