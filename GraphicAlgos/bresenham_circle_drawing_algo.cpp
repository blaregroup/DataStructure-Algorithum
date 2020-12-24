#include <iostream>
using namespace std;


void printval(int x, int y){
	cout << "( " << x <<" , " << y << " )" << endl;
}

void quadpixel(int x, int y, int xc, int yc){
printval(xc+x, yc+y);
printval(xc+x, yc-y);
printval(xc-x, yc+y);
printval(xc-x, yc-y);
printval(xc+y, yc+x);
printval(xc+y, yc-x);
printval(xc+y, yc+x);
printval(xc-y, yc-x);
}


int main(int argc, char *argv[]){
	int xc=10, yc=10, r=5;

	int x=0, y=r;
	int d = 3- (2*r);

	while(y>=x){

	x++;
	if(d>0){
		y--;
		d=d+(4*(x-y))+10;
	}else{
		d=d+(4*x)+6;
	}
	quadpixel(x,y, xc, yc);
	}
	return 0;
}
