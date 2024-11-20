// do (постусловие)
#include <iostream> 
int main() {
	int x=3; // объявление, не присваивание
	do {
		std::cout<<"Hello, World!\n";
		x=--x;
	}
	while (x!=0);
}