#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x = 10;
    int &z = x;
    cout << x <<" "<< &z<< endl;
    x = x-5;
    z =z+5;
    cout << x <<" "<<z<<endl;
    return 0;
}
