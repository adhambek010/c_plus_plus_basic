#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void reverse_array(int*,int);
int random_array(int *arry,int leng,int a,int b)
{
    srand(time(NULL));
    for(int i = 0; i < leng; i++)
    {
        arry[i]= rand() % (b-a) + a;
    }
    return *arry;
}
void display_array(int *arry,int leng)
{
    for(int i = 0; i < leng; i++)
    {
        cout << i+1<<" ==> "<<arry[i]<<endl;
    }
}
void swap_integers(int *arry,int leng)
{
    int x,y;
    char r;
    do
    {
        cout << "Which two integers do you want swap?\n";
        cout << "First number ==> ";
        cin >>x;
        cout << "Second number ==> ";
        cin >>y;
        if(x <= leng && y <= leng && x >= 0 && y >= 0)
        {
            int temp = arry[x-1];
            arry[x-1] = arry[y-1];
            arry[y-1] = temp;

        }
        else
        {
            cout << "You entered wrong number :)\n";
            cout << "PLease enter less than arry size and greter than 0\n";
        }
        display_array(arry,leng);
        cout << "=============================================\n";
        cout<< "\nHere is reverse of your array after change \n";
        reverse_array(arry,leng);
        cout << "Do you want swap again?\n";
        cout << "Yes ==> y, No ==> n\t";
        cin >>r;
    }
    while(r == 'y' || r == 'Y');

}
void reverse_array(int *arry,int leng)
{
    for (int i = 0; i < leng / 2; i++)
    {
        int temp = arry[i];
        arry[i] = arry[leng - i - 1];
        arry[leng - i - 1] = temp;
    }
    display_array(arry,leng);

}

int main()
{
    int leng, a, b;
    cout << "Please enter length of array: ";
    cin >> leng;
    if (leng > 0)
    {
        int *newarray = new int[leng];
        cout << "Please enter range of array\n";
        cout << "a ==> ";
        cin >> a;
        cout <<"b ==> ";
        cin >> b;
        random_array(newarray,leng,a,b);

        display_array(newarray,leng);
        swap_integers(newarray,leng);
        cout << "=============================================\";
        delete[] newarray;

    }
    else
    {
        cout << "\n You entered wrong number please try again:) ";
    }

}
