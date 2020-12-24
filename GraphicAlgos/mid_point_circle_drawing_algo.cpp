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
	int xc=15, yc=15, r=5;

	int x=0, y=r;
	int pk = 1-r;
	while(y>=x){
		x++;
		if(pk<0){
			pk+= (2*x)+1;
		}else{
			y++;
			pk-=(2*y)+(2*x)+1;
		}
	quadpixel(x,y,xc, yc);

	}

	return 0;
}
