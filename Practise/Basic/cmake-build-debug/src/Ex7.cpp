#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

const int ROW = 3;
const int COL = 4;

void rowSums(int arr[][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i +1 << ": " << sum << endl;
    }
}

int main() {
    int matrix[ROW][COL];
    srand(time(0)); // seed the random number generator

    cout << "Matrix 3x4:" << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << "Matrix row: "<< i+1<< " column: "<< j+1<<"==>";
            cin>>matrix[i][j];
            //matrix[i][j] = rand() % 11 + 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rowSums(matrix, ROW, COL);

    return 0;
}

