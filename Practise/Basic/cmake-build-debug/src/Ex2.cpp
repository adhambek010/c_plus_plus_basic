#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(nullptr));
    int arr[20];
    int a, b;
    cin>>a>>b;
    for(int i=0;i<20;i++)
    {
        int k = rand() % b+1;
        while(k < a)
        {
            k = rand() % b+1;
        }
        arr[i] = k;
        cout<<k<<" ";
    }
}
