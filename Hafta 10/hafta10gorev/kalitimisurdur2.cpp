//https://padlet.com/hakanbvolkan/i94jedqpkpddz0g5
#include <bits/stdc++.h>
using namespace std;

class Cokgen{
	protected:
		int genislik,yukseklik;
	public:
		void degerAta(int g,int y){
			genislik=g;
			yukseklik=y;
		}
};

class Dikdortgen : public Cokgen{
	public:
		int alan(){
			return genislik*yukseklik;
		}
};

class Ucgen : public Cokgen{
	public:
		int alan(){
			return genislik*yukseklik/2;
		}
};

int main(){
	Dikdortgen dik;
	dik.degerAta(4,5);
	cout<<"Dikdortgenin alani: "<<dik.alan()<<endl;
	Ucgen uc;
	uc.degerAta(4,5);
	cout<<"Ucgenin alani: "<<uc.alan()<<endl;
	
	return 0;
}
