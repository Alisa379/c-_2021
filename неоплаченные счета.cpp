#include <iostream>
#include <cmath>
// неоплаченные счета
using namespace std;
int main() {
	float a=0, a1=0, a2=0, z, z1;
	int N, M, time=0;
	cin >> N>>M;
	z=N/M;
	z1=N%M;
	if (z1!=0) {
		a=trunc(N/M);
		while(a!=0) {
			a2=a2+1;
	        a1=a1+a2;
	        a=a-1;
		}
    a=trunc(z);
	time=a*M+a1+(N-a*M);
	cout<<time;
	} 
	else {
		a=trunc(z);
		a=a-1;
		while(a!=0) {
			a2=a2+1;
	        a1=a1+a2;
	        a=a-1;
		}
	a=trunc(z);
	time=a1+a*M;
	cout<<time;
	}
}