//факториал числа 
#include <iostream>
using std::cout, std::cin;
int main()
{
	int a, af=1, a1;
    cout<<"Insert an integer number to get the factorial\n";
    cin>>a;
    a1=a;
    for (int i=0;i<a1;++i) {
    	af=af*a;
    	a=a-1;
	}
    cout<<a1<<"! = "<<af;
}