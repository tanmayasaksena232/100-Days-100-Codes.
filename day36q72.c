//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    int matrix[100][100];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}