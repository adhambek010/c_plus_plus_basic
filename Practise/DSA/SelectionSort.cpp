#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {13, 46, 52, 20, 9, 24};
    for(int i = 0; i < 6; i++)
    {
       for(int j = i; j < 6; j++)
       {
           if(arr[i] > arr[j])
           {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
       }
    }

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }


    return 0;
}
