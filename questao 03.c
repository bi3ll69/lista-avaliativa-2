#include <stdio.h>
#include <string.h>
#define SIZE 4

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    int result[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    printMatrix(result);
}

void subtractMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    int result[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    printMatrix(result);
}

void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    int result[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printMatrix(result);
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    char operation[5];
    scanf("%s", operation);

    if (strcmp(operation, "soma") == 0) {
        addMatrices(A, B);
    } else if (strcmp(operation, "sub") == 0) {
        subtractMatrices(A, B);
    } else if (strcmp(operation, "mult") == 0) {
        multiplyMatrices(A, B);
    }

    return 0;
}
