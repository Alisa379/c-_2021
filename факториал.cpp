#include <iostream>
using namespace std;
int f(int n)
{
    if(n < 0)
    {
   	 return 0;
    }
    else if (n == 0)
    {
   	 return 1;
    }
    else
    {
   	 return n * f(n - 1);
    }
}

void printFactorial(int n)
{
    int a = f(n);
    cout << n << "! = " << a << "\n";
}

int main()
{
    printFactorial(1);
    printFactorial(2);
    printFactorial(3);
    printFactorial(4);
    printFactorial(5);
    printFactorial(6);
    printFactorial(7);
    printFactorial(8);
    printFactorial(9);
    printFactorial(10);
}