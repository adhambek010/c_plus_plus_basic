#include <iostream>

using namespace std;

int box(int* d1, int* d2) {
  (*d1)++;
  (*d2)+=10;
  return (*d1)+(*d2);
}

int main()
{
    int p=20, q=30;
    double m=3.5, n=7.9;
    int a[5] = { 1, 2, 4, 5, 6 },
               *ptr = a+2;

    cout << "p==> "<<p;
    cout << "\nq==> "<<q;

    /*for(int i = 0; i < 5; i++){
       cout << i + 1<< "==> "<< a[i]<< endl;
    }*/
}


