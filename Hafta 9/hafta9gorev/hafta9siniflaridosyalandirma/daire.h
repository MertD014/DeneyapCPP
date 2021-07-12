class Daire{
  public:
    
    double PI;
    double radius;

    void deger_atama(double xPI,double xRadius){
      PI=xPI;
      radius=xRadius;
    }

    double alan(){
      return PI*radius*radius;
    }
    double cevre(){
      return 2*PI*radius;
    }
    
};