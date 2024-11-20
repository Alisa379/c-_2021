// вечный цикл for
#include <iostream>
int main() {
	int x=3;
	for (;;) {
		break;
		goto ml;
	}
	ml: std::cout<<x+5;
	ct: std::cout<<x+5;
}