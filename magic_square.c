#include <stdio.h>

#define N 3

int main() {
    int m[N][N] = { 0, };
    int r = 0;
    int c = N / 2;
    int nr, nc;
    int rs, cs;
    int d1 = 0;
    int d2 = 0;
    int i, j;

    for (i = 1; i <= N * N; i++) {
        m[r][c] = i;

        nr = r - 1;
        nc = c + 1;

        if (nr < 0) {
            nr = N - 1;
        }
        if (nc >= N) {
            nc = 0;
        }

        if (m[nr][nc] != 0) {
            r = r + 1;
        }
        else {
            r = nr;
            c = nc;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        rs = 0;
        cs = 0;

        for (j = 0; j < N; j++) {
            rs = rs + m[i][j];
            cs = cs + m[j][i];
        }

        printf("%d %d\n", i + 1, rs);
        printf("%d %d\n", i + 1, cs);

        d1 = d1 + m[i][i];
        d2 = d2 + m[i][N - 1 - i];
    }

    printf("%d\n", d1);
    printf("%d\n", d2);

    return 0;
}
