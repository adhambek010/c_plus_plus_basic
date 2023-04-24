#include <iostream>
//Created by Salaydinov Adkham
using namespace std;
void input_array (int *arry, int length);
void display (int *arry, int length);
void sort_ing (int *arry, int length);
int main()
{
    int length;
    cout << "Please enter length of array: ";
    cin >> length;
    if (length > 0)
    {
        int *arry = new int[length];
        delete[] arry;
        input_array(arry,length);
        sort_ing(arry,length);
        display(arry,length);
    }
    return 0;
}
void input_array(int *arry, int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << "Please enter element of array: ";
        cin >> arry[i];
    }
}

void sort_ing (int *arry, int length)
{
    int count_er = 0;

    for(int i = 0; i < length; i++)
    {
        for(int j = i; j < length; j++)
        {
            if(arry[i] > arry[j])
            {
                int k = arry[i];
                arry[i] = arry[j];
                arry[j] = k;
            }

        }

    }

}
void display(int *arry, int length)
{
    for(int i = 0; i < length; i++)
    {
        int count_er = 1;
        for(int j = i + 1; j < length; j++)
        {
            if(arry[i] == arry[j])
            {
                count_er += 1;
            }
            else
            {
                break;
            }

        }
        cout << "\n Element "<<arry[i] << " is repeated " << count_er <<" times.";
        i += (count_er-1);
    }
    cout << "\n Thank you for your time :) ";
}

/*Exercise 3. (up to 5pts) In a program read n integers and store them in the array.
Compute and display how many times each value occurs in the array. Display the information
about the value/values that have the lowest number of occurrences. In a program define the well-designed functions.
Test the functions in a suitably defined main program. Add to the program anything that you find useful. */
