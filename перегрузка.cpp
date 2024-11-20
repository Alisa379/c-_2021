#include <iostream>
using namespace std;
float hub(float x) {
	float result = x+1;
	return result;
}
int hub(int x) {
	int result = x * x;
	return result;
}
int main () {
    int x;
	float y;
	cin>>x>>y;
	cout<<hub(x)<<endl;
	cout<<hub(y);
}