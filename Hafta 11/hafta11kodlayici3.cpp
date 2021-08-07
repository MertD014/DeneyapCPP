/*
Ödevler:
3. Kodlayici - Dosyadan okudugunuz sayilarin toplamini ekrana yaziniz.
*/

#include <bits/stdc++.h>
using namespace std;

int n,x,sum;

int main(){
	freopen("input.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	cout<<sum;
	return 0;
}
