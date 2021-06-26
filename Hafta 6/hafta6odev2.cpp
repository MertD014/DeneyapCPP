/*
Ödev2 : 20 kisilik siniftaki ögrencilerin ad soyad ve numaralarini aliniz . 
Bunlari dizi içinde tutunuz ve bilgi girisinden sonra AD SOYAD NUMARA seklinde listeleyiniz.

So nothing to explain really. take the input then print it
i guess the task is to get the input as 3 separate parts string string integer
but im going to proceed by getting all with strings bc it is easier.

*/

#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	
	cin>>n;
	string data[n][3];

	for(int i=0;i<n;i++)
		cin>>data[i][0]>>data[i][1]>>data[i][2];
	
	for(int i=0;i<n;i++)
		cout<<"Name:"<<data[i][0]<<" "<<data[i][1]<<" Number:"<<data[i][2]<<endl;
	
	return 0;
}
