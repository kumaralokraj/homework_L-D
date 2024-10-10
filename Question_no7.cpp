#include<iostream>
using namespace std;

void inputMatrix(int mat[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void addMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for(int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[10][10], int result[10][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[10][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;

    int mat1[10][10], mat2[10][10], result[10][10];

    cout << "Enter elements of the first matrix:" << endl;
    inputMatrix(mat1, rows, cols);

    cout << "Enter elements of the second matrix:" << endl;
    inputMatrix(mat2, rows, cols);

    cout << "Addition of the matrices:" << endl;
    addMatrices(mat1, mat2, result, rows, cols);
    displayMatrix(result, rows, cols);

    cout << "Multiplication of the matrices:" << endl;
    multiplyMatrices(mat1, mat2, result, rows, cols);
    displayMatrix(result, rows, cols);

    cout << "Transpose of the first matrix:" << endl;
    transposeMatrix(mat1, result, rows, cols);
    displayMatrix(result, rows, cols);

    return 0;
}
