#include <stdio.h>

int main() {
    int a=5, b=7, c=4, d=3, e=10, sum, i;

    int x[5] = { 5, 7, 4, 3, 10 };

    sum = a + b + c + d + e;

    int sum_array = x[0] + x[1] + x[2] + x[3] + x[4];

    // Loop - for, while, do while
    i = 0;
    while(i <= 4) {
        printf("Index %d, value %d\n", i, x[i]); // x[0]
        i = i + 1;
    }

    printf("Sum of 5 variables: %d, %d", sum, sum_array);
}
