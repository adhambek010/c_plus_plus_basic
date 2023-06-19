#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse  (double x, double y){
    double z = (x * x) + (y * y);
    return sqrt(z);
}
int main()
{
    double a,b;
    cout << "Please enter first side of triangle: ";
    cin >> a;
    cout << "Please enter first side of triangle: ";
    cin >> b;
    double m = hypotenuse(a,b);
    cout << "Your hypotenuse is = "<<m;
}
