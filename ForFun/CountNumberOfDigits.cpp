#include<bits/stdc++.h>
using namespace std;
int count1(int);
int count2(int);
int main()
{
    int n = 35627;
    cout << count2(n);

}
int count1 (int n)
{
    int dupNum = n;
    if(dupNum == 0)
    {
        return 0;
    }
    int cnt = 0;
    while(dupNum > 0)
    {
        cnt += 1;
        dupNum /= 10;
    }
    return cnt;
}
int count2(int n)
{
    int dupNum = n;
    if(dupNum == 0)
    {
        return 0;
    }
    int cnt = (int)(log10(dupNum) + 1);
    return cnt;

}
