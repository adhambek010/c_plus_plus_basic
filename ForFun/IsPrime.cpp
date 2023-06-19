#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    int cnt = 0;
    for(int i = 2; i <=(int)sqrt(n);i++){
        if(n % i == 0){
        cnt++;
        }
    }
    return cnt == 0;
}
int main(){
    int input;
    cout << "Which number do you want to check : ";
    cin >> input;
    cout << isPrime((bool)input);

    return 0;
}
