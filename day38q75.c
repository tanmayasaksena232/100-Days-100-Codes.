//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    int A[100][100], B[100][100], C[100][100];

    scanf("%d %d", &r1, &c1);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}