#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random_array(int *arry,int leng,int a,int b)
{
    srand(time(NULL));
    for(int i = 0; i < leng; i++)
    {
        arry[i]= rand() % (b-a) + a;
    }
    return *arry;
}
void display_array(int *arry, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "\t"<< arry[i];
    }
}
double average_odd (int *arry, int len)
{
    int total = 0;
    int counter = 0;
    for(int i = 0; i <len; i++)
    {
        if(arry[i] % 2 != 0)
        {
            total += arry[i];
            counter +=1;
        }
    }
    return total/counter;
}

int main()
{
    int len,a,b;
    cout << "Please enter length of array: ";
    cin >> len;
    if(len > 0)
    {
        int *newarr = new int[len];
        cout << "Please enter beginnig of random numbers\n";
        cout << "a = ";
        cin >>a;
        cout << "b = ";
        cin >>b;
        random_array(newarr, len,a,b);
        display_array(newarr,len);
        double av = average_odd(newarr,len);
        cout << "\nAvaerage of odd numbers is ==> " << av;

        delete[] newarr;
    }
    else
    {
        cout <<"\n You enteered wrong number please try again!";
    }

}
