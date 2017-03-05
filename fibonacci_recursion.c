#include<stdio.h>

int fibonacci(int n);

int main(void) {
    int i, times;

    printf("please enter the times: ");
    scanf("%d", &times);

    for (i = 0; i < times; i++) {
        printf("%3d\n", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1 )
        return 1;
    else
        return fibonacci(n - 2) + fibonacci(n - 1);
}






