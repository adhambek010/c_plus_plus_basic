#include <bits/stdc++.h>
using namespace std;

void f (int i, int arry[], int n)
{
    if(i >= n/2)
    return;
    swap(arry [i],arry[n-i-1]);
    f(i+1,arry,n);

}
bool isPalindromeString(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return isPalindromeString(i+1,s);
}
int main()
{
    int arry[] = {1,3,5,4,2};
    for(int i = 0; i < 5; i++){
        cout << arry[i] << " ";
    }
    cout << endl;
    string s = "madam";
    cout << isPalindromeString(0,s);
    return 0;
}

