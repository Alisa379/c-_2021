// смена чисел местами посредсвтом указателей
#include <iostream>
#include <cmath>
int main() {
	int x=3, y=5;
	int *p = &x;
	int *pp=&y;
	std::swap(p, pp);
	std::cout<<*pp<<*p;
}