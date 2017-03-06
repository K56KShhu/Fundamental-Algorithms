#include<stdio.h>
int check_prime(int m);
int main(void) {
    int n;

    printf("please enter a number > 1: ");
    scanf("%d", &n);

    for (int i = 2; i < n / 2; i++) {
        if (check_prime(i) == 1) {
            if (check_prime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n-i);
            }
        }
    }

    return 0;
}

int check_prime(int m) {
    for (int i = 2; i < m / 2; i++) {
        if (m % i == 0) {
            return 0;
        }
    }

    return 1;
}

