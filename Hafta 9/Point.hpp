#include <math.h>

class Point{
	private:	
		float x;
		float y;
	public:
		bool isOrigin(){
			return !(x or y);
		}
		
		void setPos(float xx,float yy){
			x=xx;
			y=yy;
		}
		
		float getX(){
			return x;
		}
		
		float getY(){
			return y;
		}
		
		float getDist(){
			return sqrt(x*x+y*y);
		}
		
};
