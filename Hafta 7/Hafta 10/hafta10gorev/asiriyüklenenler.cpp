//https://padlet.com/hakanbvolkan/grezh5q151hzd58u
#include <bits/stdc++.h>
using namespace std;

class Topla{
	public:
		int ekle(int a,int b){
			return a+b;
		}
		int ekle(int a,int b,int c){
			return a+c;
		}
		
};

int main(){
	Topla f;
	cout<<f.ekle(21,13)<<endl;
	cout<<f.ekle(21,13,30)<<endl;
	return 0;
}
