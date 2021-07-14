//https://padlet.com/hakanbvolkan/x5k4ncins88yceuj
#include <bits/stdc++.h>
using namespace std;

class Brans{
	public:
		void print(){
			cout<<"Brans"<<endl;
		}
};

class Matematik : public Brans{
	public:
		void print(){
			cout<<"Matematik"<<endl;
		}	
};

class Fizik : public Brans{
	public:
		void print(){
			cout<<"Fizik"<<endl;
		}	
};

class Kimya : public Brans{
	public:
		void print(){
			cout<<"Kimya"<<endl;
		}	
};

int main(){
	Matematik m1;
	m1.print();
	Fizik f1;
	f1.print();
	Kimya k1;
	k1.print();
	
	return 0;
}
