#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("\nEnter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int rowSum[rows];
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i, rowSum[i]);
    }
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    printf("\nSum of all elements: %d\n", sum);
    return 0;
}