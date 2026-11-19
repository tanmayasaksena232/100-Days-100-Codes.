//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    int distinct = 1;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r && distinct; i++) {
        for (j = i + 1; j < r; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
