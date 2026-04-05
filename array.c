#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int arr[N];
    int sum = 0;
    int max, min;
    int i;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        arr[i] = rand() % (N + 1);
    }

    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max = arr[0];
    min = arr[0];

    for (i = 0; i < N; i++) {
        sum = sum + arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", sum);
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}
