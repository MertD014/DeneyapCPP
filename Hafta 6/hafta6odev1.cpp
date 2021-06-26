/*
task is to basically flip a matrix which one can do
by swapping mx[i][j] with mx[j][i] then build some logic to
prevent swapping twice but actually there is a better way

i flip the table while taking the input (see line 24)
and it will make my life x10 better

*/


#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	
	cin>>n;
	int mx[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mx[j][i];         //swapping
		}
	}
	cout<<"Output:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mx[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


/*

example

input
0 0 1 0 0
0 0 0 1 1
0 2 0 0 1
2 0 2 0 0
0 0 2 0 0

output
0 0 0 2 0
0 0 2 0 0
1 0 0 2 2
0 1 0 0 0
0 1 1 0 0

*/
