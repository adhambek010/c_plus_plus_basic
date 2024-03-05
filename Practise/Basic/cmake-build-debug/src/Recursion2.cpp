#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    if(n <= 1) return n;
    int fLast = f(n-1);
    int sLast = f(n-2);
    return fLast + sLast;
}
int main()
{
    int n;
    cout << "Please enter the number you want : ";
    cin >> n;
    cout << f(n);

    return 0;
}
