#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    float x;
    cout << "Enter a number: ";
    cin >> x;
    float y;
    if(x  > 1){
         y = 1 / (x-1);
         cout << y;
    }
    else if (x <= 1 && x >= -1){
        y = (1 / 2) * x;
        cout << y;
    }
    else if (x < -1){
        y = 1 / (x + 1);
        cout << y;
    }
}

