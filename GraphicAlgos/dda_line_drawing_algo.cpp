#include <iostream>
#include <cmath>
using namespace std;

void algo(int x1, int y1, int x2, int y2){
	int dy = y2-y1;
	int dx = x2-x1;
	int step = (dy>dx)?dy:dx;
	float xn=x1, yn=y1;
	float incx = dx/(float)step;
	float incy = dy/(float)step;
	while(xn<x2){
		xn+=incx;
		yn+=incy;
		cout << "( "<< xn <<" "<<yn<<" )" << endl;
	}
}

// main function
int main(int argc, char *argv[]){
	int x1=0, y1=1, x2=8, y2=4;
	algo(x1,y1,x2,y2);
	return 0;

}
