#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char cha_r;
    float pos_counter = 0;
    float neg_counter = 0;
    do
    {
        int num;
        cout << "\nGive a number: ";
        cin >> num;
        if (num > 0)
        {
            pos_counter += num;
            double ans = sqrt(num);
            cout << "Square root: "<<ans;
        }
        else
        {
            if (num == 0)
            {
                continue;
            }
            else
            {
                neg_counter += num;
                double ans = pow(num,2);
                cout << "Square: "<<ans;
            }

        }
        cout <<"\nContinue (y/n)? ";
        cin >> cha_r;
    }
    while (cha_r == 'y'||cha_r == 'Y');
    return 0;
}
