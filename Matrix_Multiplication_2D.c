#include <stdio.h>
void multiply_matrix(int m1[3][3], int m2[3][3], int m3[3][3]) {
    int r, c, k;

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            m3[r][c] = 0;
            for (k = 0; k < 3; k++) {
                m3[r][c] += m1[r][k] * m2[k][c];
            }
        }
    }
}

int main() {
    int m1[3][3], m2[3][3], m3[3][3];
    int r, c;

    printf("\n\n\n\t Matrix-1 --------------------");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("\n\n\t Input m1[%d][%d] : ", r, c);
            scanf("%d", &m1[r][c]);
        }
    }

    printf("\n\n\n\t Matrix-2 --------------------");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("\n\n\t Input m2[%d][%d] : ", r, c);
            scanf("%d", &m2[r][c]);
        }
    }

    printf("\n\n\n\t Matrix-1 --------------------\n\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf(" %d", m1[r][c]);
        }
        printf("\n");
    }

    printf("\n\n\n\t Matrix-2 --------------------\n\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf(" %d", m2[r][c]);
        }
        printf("\n");
    }

    // Multiply matrix
    multiply_matrix(m1, m2, m3);

    // Print the result matrix
    printf("\n\n\n\t Result Multiplicatin Matrix --------------------\n\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf(" %d", m3[r][c]);
        }
        printf("\n");
    }

    return 0;
}
