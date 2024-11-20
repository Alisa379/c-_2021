//неоплаченные счета (улучшенная версия)
#include <iostream>
using namespace std;
int main () {
	int a, b, time, n;
	cin>>a>>b;
	n=(a-1)/b;
	time = (1+n)*n/2+a;
	cout<<time;
} 