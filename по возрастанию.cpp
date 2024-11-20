#include <iostream>
using namespace std;
int main()
{
 
    const int SIZE = 8;     
    int a[SIZE];
 
    cout << "Input " << " 8 " << " numbers" << endl;
    for (int i=0; i<SIZE; i++)
        cin >> a[i];
 
    for (int i=0; i<SIZE-1; i++)
        for (int j=i+1; j<SIZE; j++)
            if (a[j] < a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
 
    for (int i=0; i<SIZE; i++)
        cout << a[i]<< " ";
             
}