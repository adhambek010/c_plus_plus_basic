#include <iostream>
using namespace std;

void print_pyramid (int n){
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout <<" ";
        }
        for(int k = 1; k <= i * 2;k++){
            cout <<"*";
        }
        cout <<"\n";

    }
}

int main() {
    int p;
    cout << "How high would you like the pyramid? ";
    cin >> p;
    print_pyramid(p);

}
/*
     **
    ****
   ******
  ********
 **********
************
*/
