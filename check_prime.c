#include<stdio.h>

int main(void) {
    int i;
    int n;
    int is_prime = 1;

    do {
        printf("please enter a number > 1: ");
        scanf("%d", &n);
    } while (n <= 1);


    for (i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            is_prime = 0;
            printf("i = %d\n", i);
            break;
        }
    }


    if (is_prime) {
        printf("%d is a prime number\n", n);
    }
    else {
        printf("%d is not a prime number\n", n);
    }


    return 0;
}

