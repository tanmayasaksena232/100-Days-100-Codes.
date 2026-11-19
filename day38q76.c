//Q76: Check if a matrix is symmetric
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("False");
        return 0;
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}