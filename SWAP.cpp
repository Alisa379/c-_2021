#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a=5,b=7;
	swap(a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a = "<<a<<endl<<"b = "<<b;
}