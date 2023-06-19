#include<bits/stdc++.h>

using namespace std;

void printDivisors1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i<<endl;
        }
    }
}

void printDivisors2(int n)
{
    vector<int> ls;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            ls.push_back(i);
            if((n / i) != i)
            {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << "\t";
}
int main()
{
    cout<< "Enter a number which you want print all divisors : ";
    int n;
    cin >> n;
    printDivisors1(n);
    cout <<endl;
    printDivisors2(n);


}
