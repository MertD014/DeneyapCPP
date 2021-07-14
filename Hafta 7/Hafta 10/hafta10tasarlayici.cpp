#include <bits/stdc++.h>
using namespace std;

class Meyve{
	public:
		void sinif(){
			cout<<"Ben meyve sinifiyim"<<endl;
		}
};

class Muz : public Meyve{
	public:
		void renk(){
			cout<<"Sari"<<endl;
		}	
};

class Elma : public Meyve{
	public:
		void renk(){
			cout<<"Kirmizi"<<endl;
		}	
};



int main(){
	
	Muz m1;
	Elma e1;
	
	m1.sinif();
	m1.renk();
	
	e1.sinif();
	e1.renk();
	
	return 0;
}
