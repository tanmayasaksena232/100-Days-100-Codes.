//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int d = 0; d < r + c - 1; d++) {
        int row = (d < c) ? 0 : d - c + 1;
        int col = (d < c) ? d : c - 1;

        while (row < r && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
