// указатели
#include <iostream>
using std::endl;
int main() {
	int x=5, m[100];
	m[-1]=4;
	std::cout<<&x<<endl<<&m[-1]<<endl<<&m[1]<<endl;
	std::cout<<x<<endl<<m[1];
	/*int x, m[3]={1,2,3}, y;
	long z;
	std::cout<< &x<< endl<< &m[2]<< endl<< &y<< endl<< &z<< endl;
	int* x1;
	std::cout<<&x1;
*/}