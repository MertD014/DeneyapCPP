/*
https://replit.com/@deneyap/mumtazmertdemirkodlaritamamla#main.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Araba{
  public:
    string marka;
    string model;
    int yil;
    int fiyat;

    Araba(string x_marka, string x_model, int x_yil, int x_fiyat){
      marka=x_marka;
      model=x_model;
      yil=x_yil;
      fiyat=x_fiyat;
    }

};

int main() {

  Araba araba1("Suzuki","Vitara",2016,225000);
  Araba araba2("Wolswagen","T-Roc",2020,360000);

  cout<<araba1.marka<<" "<<araba1.model<<" "<<araba1.yil<<" "<<araba1.fiyat<<endl;
  cout<<araba2.marka<<" "<<araba2.model<<" "<<araba2.yil<<" "<<araba2.fiyat<<endl;
  return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

class Ev{
  public:
    int yil;
    int kira;
    int alan; //m²

    void tanitim(){
      cout<<yil<<" yilinda yapilmis olan "<<alan<<"m²'lik bu evin kirasi "<<kira<<"TL'dir"<<endl;
    }

    Ev(int yyil,int kkira, int aalan){
      yil=yyil;
      kira=kkira;
      alan=aalan;
    }
};

int main() {
  Ev ev1(1999,2000,150);
  Ev ev2(2015,2500,120);

  ev1.tanitim();
  ev2.tanitim();

  return 0;
}
*/
