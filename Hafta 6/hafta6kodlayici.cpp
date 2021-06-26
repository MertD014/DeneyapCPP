/*
	Hafta 6 kodlayici
	printing a matrix like a spiral (check the example)
	
	Observations__
	
	say our matrix is 2M x 2M
	1. when we move horizontally the first M rows we will be moving to the right
	2. when we move horizontally the last M rows we will be moving to the left
	3. when we move vertically the first M rows we will be moving to the up
	4. when we move vertically the last M rows we will be moving to the down	
	
	5. we will be working with  (n x n) 
	r1
	cn
	rn
	c1
	r2
	.
	.
	.
	
	if we analyze rows and columns separately we will see
	r1 rn r2 rn-1 ...
	we are moving towards to middle
	
	6.if n is odd we wont be moving at middle row or column so 1 less thing to consider
	
	using all this information we can do what i call a pro coder move and just print 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
	as i just realized that we are working an a single matrix which is only 4x4
	
	but it wouldnt be fun
	so i will implement another solution which is a 300 iq solution + easier
	
	
*/
#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	
	cin>>n;
	int d[n+2][n+2];
	for(int i=0;i<n+2;i++){
		for(int j=0;j<n+2;j++){
			d[i][j]=0;
		}
	}
	
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			d[i][j]=(i-1)*n+j;
		}
	}
	
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	
    int h=1,v=0,vv=1,hh=1; //current v and h is vv and hh
    
    for(int i=0;i<n*n;i++){
    	cout<<d[vv][hh]<<" ";
        d[vv][hh]=0;
        if(d[vv+v][hh+h]==0){
            swap(v,h);
            h*=-1;
        }
        curv+=v;
        curh+=h;
	}
}

/*
input
1 2 3
4 5 6
7 8 9

output
1 2 3 6 9 8 7 4 5

*/

