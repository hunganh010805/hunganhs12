#include <stdio.h>
void createMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Ma tran vua nhap là:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    createMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);
    return 0;
}

