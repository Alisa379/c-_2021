#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i;
	double a, b, c, d, x1, x2; 
	cout<< "ax^2+bx+c=0\n";
	cout<<"a ="<<"  ";
	cin>>a;
	cout<<"b ="<<"  ";
	cin>>b;
	cout<<"c ="<<"  ";
	cin>>c;
	d = (b*b) - 4*a*c;
	if (d>0) i=0;
	if (d==0) i=1;
	if (d<0) i=2;
	switch(i) {
		case 0: 
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			cout<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2; 
		break;
	     
		case 1: 
			x1=(-b+sqrt(d))/(2*a);
			cout<<"x1 = "<<x1;
		break;
		
		case 2:
		cout<<"there's no valid roots";
		break;
		
	}
}
