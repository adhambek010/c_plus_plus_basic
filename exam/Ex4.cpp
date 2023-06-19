#include <iostream>
using namespace std;

void input_array (int *arry,int length){
    cout << "Please enter values of array!\n";
    for(int i = 0; i < length; i++){
        cout << i+1 << " ==> ";
        cin >> arry[i];
    }
}
double average (int *arry, int length){
    double average = 0;
    for (int i = 0; i < length; i++){
        average += arry[i];
    }
    return average;
}

int main() {
    int length;
    cout << "Plese enter length of array: ";
    cin >> length;
    if (length > 0){
        int *newarr = new int[length];
        input_array(newarr,length);
        double averag = average(newarr,length);
        cout << "Average of your array is ==>  "<<averag;
        delete[] newarr;
    }
    else
    {
        cout << "\nYou entered wrong number please try agan!";
    }
}
