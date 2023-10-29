#include <iostream>
using namespace std;

void printSpiral(int m, int n, int arr[10][10]) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Print leftmost column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int m, n;
    int arr[10][10];

    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Spiral order of matrix: ";
    printSpiral(m, n, arr);

    return 0;
}
