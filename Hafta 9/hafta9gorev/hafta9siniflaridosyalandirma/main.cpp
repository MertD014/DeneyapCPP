/*
https://padlet.com/hakanbvolkan/i94jedqpkpddz0g5
https://replit.com/@deneyap/mumtazmertdemirsiniflaridosyalandirma#daire.h
*/

#include <bits/stdc++.h>
#include "daire.h"
using namespace std;

int main() {
  Daire daire1,daire2;
  daire1.deger_atama(4.2,3.14);
  daire2.deger_atama(2.1,3.14);

  cout<<"Daire 1 Cevresi:"<<daire1.cevre()<<endl;
  cout<<"Daire 1 Alani:"<<daire1.alan()<<endl;
  cout<<"Daire 2 Cevresi:"<<daire2.cevre()<<endl;
  cout<<"Daire 2 Alani:"<<daire2.alan()<<endl;
  return 0;

}
