#include <iostream>
using namespace std;
int ROWS = 3;
int COLS = 3;

void readArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> *(arr + i * cols + j);
        }
    }
}
void displayArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr + i * cols + j) << " ";
        }
        cout << endl;
    }
}
void sumArrays(int* arr1, int* arr2, int* result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(arr1 + i * cols + j) + *(arr2 + i * cols + j);//==arr1[i][j]
        }
    }
}
int main() {
    //int A[ROWS][COLS];
    //int B[ROWS][COLS];
    int C[ROWS][COLS];
    int M[3][3] = {
    {3, 6, 8},
    {5, 4, 7},
    {2, 4, 7}};
    int N[3][3] = {
    {1, 2, 3},
    {5, 4, 6},
    {2, 9, 7}};
    //cout << "Enter elements for array A:\n";
    //readArray((int*)A, ROWS, COLS);

    //cout << "Enter elements for array B:\n";
    //readArray((int*)B, ROWS, COLS);

    sumArrays((int*)M, (int*)N, (int*)C, ROWS, COLS);

    cout << "Array A:\n";
    displayArray((int*)M, ROWS, COLS);

    cout << "Array B:\n";
    displayArray((int*)N, ROWS, COLS);

    cout << "Array C (Sum of A and B):\n";
    displayArray((int*)C, ROWS, COLS);

    return 0;
}
