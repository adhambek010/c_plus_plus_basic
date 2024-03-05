#include <bits/stdc++.h>

using namespace std;

int countDigit(int);
void printAllDevisors(int);
bool isPrime(int);

int main()
{
    int number;
    cout<< "Enter the number you want to know number of digits : ";
    cin >> number;
    cout<<"Count of digits are ";
    int n = countDigit(number);
    cout << n<<endl;
    printAllDevisors(number);
    cout << "Enter the number which you want to check is Prime";
    cin>>n;
    cout << isPrime(n);
}

int countDigit(int number)
{
    int cnt = 0;
    while(number > 0)
    {
        cnt++;
        number /= 10;
    }
    return cnt;
}

void printAllDevisors(int n){
    vector<int> ls;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            ls.push_back(i);
            if((n/i) != i)
            {
                ls.push_back(n/i);
            }

        }
    }
    sort(ls.begin(), ls.end());

    for(auto it : ls) cout << it << " ";
}

bool isPrime(int n){
    for(int i = 2; i * i < n; i++){
        if(n % i == 0){
            return false;
        }else{
            return true;
        }
    }
}
