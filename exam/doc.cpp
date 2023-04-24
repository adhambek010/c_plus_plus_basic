//EX1
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

const int SIZE = 10;

// Function to generate random numbers in the range [p,q] for n elements of the array a
void generate_array(int a[], int n, int p, int q) {
    srand(time(0)); // seed the random number generator
    for (int i = 0; i < n; i++) {
        a[i] = p + rand() % (q - p + 1);
    }
}

// Function to display n elements of the array a
void display_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to count the number of occurrences of x in the array a
int count_occurrences(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

// Function to find the index of the first element from the array with value equal to x
int find_integer(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[SIZE];
    int p = 1, q = 10;
    generate_array(a, SIZE, p, q);
    cout << "Generated array: ";
    display_array(a, SIZE);
    int x = 5;
    cout << "Number of occurrences of " << x << " in the array: " << count_occurrences(a, SIZE, x) << endl;
    int y = 12;
    cout << "Index of the first element with value " << y << " in the array: " << find_integer(a, SIZE, y) << endl;

    return 0;
}



//EX2

#include <iostream>
using namespace std;

const int SIZE = 5;

// Function to input n elements of the array a from the user
void input_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
}

// Function to count the number of values in the array a that are less than x
int count_less(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            count++;
        }
    }
    return count;
}

// Function to find the index of the first element in the array a that has the highest value from elements with value less than x
int largest_less(int a[], int n, int x) {
    int maxValue = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < x && a[i] > maxValue) {
            maxValue = a[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int a[SIZE];
    input_array(a, SIZE);
    int x;
    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Number of values in the array less than " << x << ": " << count_less(a, SIZE, x) << endl;
    int maxIndex = largest_less(a, SIZE, x);
    if (maxIndex == -1) {
        cout << "No values in the array less than " << x << endl;
    } else {
        cout << "Index of the first element with highest value less than " << x << ": " << maxIndex;
}



//EX3
#include <iostream>
using namespace std;

const int SIZE = 10;

// Function to input n elements of the array a from the user
void input_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
}

// Function to compute the arithmetic average of elements with values that does not belong to the interval [-5,5]
double average_not_interval(int a[], int n) {
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < -5 || a[i] > 5) {
            count++;
            sum += a[i];
        }
    }
    if (count == 0) {
        cout << "No values in the array that do not belong to the interval [-5,5]" << endl;
        return 0;
    }
    return (double)sum / count;
}

// Function to compute the arithmetic average of elements with values that belongs to the interval [a,b]
double average_interval(int a[], int n, int a1, int b1) {
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= a1 && a[i] <= b1) {
            count++;
            sum += a[i];
        }
    }
    if (count == 0) {
        cout << "No values in the array that belong to the interval [" << a1 << "," << b1 << "]" << endl;
        return 0;
    }
    return (double)sum / count;
}

// Function to compute the sum of all odd values from the array
int sum_odd(int a[], int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        cout << "No odd values in the array" << endl;
        return 0;
    }
    return sum;
}

// Function to compute the number of values from the array that are divisible by 3
int count_divisible_by_3(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

// Function to compute the greatest value from the array
int greatest_value(int a[], int n) {
    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    return maxValue;
}
// Function to compute the greatest odd value from the array
int greatest_odd(int a[], int n) {
    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    if (maxValue == INT_MIN) {
        cout << "No odd values in the array" << endl;
        return 0;
    }
    return maxValue;
}

int main() {
    int a[SIZE];
    input_array(a, SIZE);
    cout << "Arithmetic average of elements not in interval [-5,5]: " << average_not_interval(a, SIZE) << endl;
    int a1, b1;
    cout << "Enter a and b for interval [a,b]: ";
    cin >> a1 >> b1;
    cout << "Arithmetic average of elements in interval [" << a1 << "," << b1 << "]: " << average_interval(a, SIZE, a1, b1) << endl;
    cout << "Sum of all odd values: " << sum_odd(a, SIZE) << endl;
    cout << "Number of values divisible by 3: " << count_divisible_by_3(a, SIZE) << endl;
    cout << "Greatest value: " << greatest_value(a, SIZE) << endl;
    cout << "Greatest odd value: " << greatest_odd(a, SIZE) << endl;
    return 0;
}





//EX4
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


//EX5

#include <iostream>
using namespace std;

int main() {
    char repeat;
    int odd_count = 0;
    int sum_odd = 0;
    do {
        int num;
        cout << "Enter integer: ";
        cin >> num;
        if (num == 0) {
            cout << "zero" << endl;
        } else if (num > 0) {
            cout << num << " is positive and ";
            if (num % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << num << " is odd" << endl;
                odd_count++;
                sum_odd += num;
            }
        } else {
            cout << num << " is negative and ";
            if (num % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << num << " is odd" << endl;
                odd_count++;
                sum_odd += num;
            }
        }
        cout << "Do you want to repeat the calculation? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y');
    cout << "Number of odd integers: " << odd_count << endl;
    if (odd_count > 0) {
        cout << "Arithmetic average of odd numbers: " << (double)sum_odd / odd_count << endl;
    }


//EX6
#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(double side) {
    return (sqrt(3) / 4) * pow(side, 2);
}

double triangleCircumference(double side) {
    return 3 * side;
}

int main() {
    double side;
    do {
        cout << "Enter the side of the equilateral triangle: ";
        cin >> side;
        if (side <= 0) {
            cout << "Invalid input. Side must be a positive value." << endl;
            continue;
        }
        cout << "Area of the equilateral triangle: " << triangleArea(side) << endl;
        cout << "Circumference of the equilateral triangle: " << triangleCircumference(side) << endl;
        cout << "Do you want to repeat the calculation? (y/n) ";
        char repeat;
        cin >> repeat;
        if (repeat == 'n') break;
    } while (true);
    return 0;
}
