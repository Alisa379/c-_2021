#include <iostream>
int main() {
	int x=3;
	static_cast<float>(x);
	(float)x;
	x=x+0.35446;
	std::cout<<x;
}