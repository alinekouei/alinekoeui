#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // حداکثر اندازه ماتریس

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "ماتریس را وارد کنید:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "عنصر [" << i + 1 << "][" << j + 1 << "] را وارد کنید: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "ماتریس شما:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // دریافت تعداد سطرها و ستون‌ها
    cout << "تعداد سطرهای ماتریس را وارد کنید: ";
    cin >> rows;
    cout << "تعداد ستون‌های ماتریس را وارد کنید: ";
    cin >> cols;

    // ورودی ماتریس‌ها
    cout << "ورودی ماتریس اول:" << endl;
    inputMatrix(matrix1, rows, cols);
    cout << "ورودی ماتریس دوم:" << endl;
    inputMatrix(matrix2, rows, cols);

    // جمع دو ماتریس
    addMatrices(matrix1, matrix2, result, rows, cols);

    // نمایش نتیجه
    cout << "نتیجه جمع دو ماتریس:" << endl;
    printMatrix(result, rows, cols);

    return 0;
}
