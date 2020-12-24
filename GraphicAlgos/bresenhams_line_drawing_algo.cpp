#include <iostream>

using namespace std;

void algo(int x1, int y1, int x2, int y2){
	int dx = x2-x1;
	int dy = y2-y1;
	int xn=x1, yn=y1;
	int pk=(2*dy)-dx;

	for(int i=x1; i<x2; i++){
		if(pk>0){
			pk=pk+(2*dy)-(2*dx);
			xn++;
			yn++;
		}else{
			pk=pk+(2*dy);
			xn++;
		}
	cout << "( " << xn << " " << yn <<" )" << endl ;
	}
}

int main(int argc, char *argv[]){
	int x1=20,y1=10,x2=30,y2=18;

	algo(x1,y1,x2,y2);
	return 0;
}
