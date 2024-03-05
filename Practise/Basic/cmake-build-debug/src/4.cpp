#include <iostream>
using namespace std;

// Function to calculate value of y
double calculate_y(double x) {
    return x / 2;
}

int main() {
    int n;
    cout << "Enter the number of calculations: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Number of calculations must be greater than 0." << endl;
        return 0;
    }
    double x;
    int negative_count = 0;
    for (int i = 1; i <= n; i++) {
        cout << "Enter value of x for calculation " << i << ": ";
        cin >> x;
        double y = calculate_y(x);
        cout << "y = " << y << endl;
        if (y < 0) {
            negative_count++;
            cout << "y is negative" << endl;
        } else {
            cout << "y is positive" << endl;
        }
    }
    cout << "Number of negative y values: " << negative_count << endl;
    return 0;
}

