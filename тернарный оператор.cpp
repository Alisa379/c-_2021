//тернарный оператор
#include <iostream> 
using std::endl;
int main() {
	int x=0, y=0, z=0;
	(x==5)? (y=3) : (z=7);
	std::cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z;
}