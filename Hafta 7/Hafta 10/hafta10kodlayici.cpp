#include <bits/stdc++.h>
using namespace std;

class Hayvan{
	public:
		void yer(){
			cout<<"Hayvanlar yemek yer!"<<endl;
		}
};

class Kopek : public Hayvan{
	public:
		void yer(){
			cout<<"Kopekler yemek yer!"<<endl;
		}	
};

int main(){
	
	Kopek k1;
	k1.yer();
	
	return 0;
}
