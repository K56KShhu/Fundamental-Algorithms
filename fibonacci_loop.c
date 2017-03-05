#include<stdio.h>

int main(void) {
    long long a = 1, b = 1, c;
    int i, times;

    printf("please enter the times: ");
    scanf("%d", &times);

    for (i = 0; i < times; i++) {
        if (i == 0) {
            printf("   1\n");
        }
        else {
            c = a + b;
            a = b;
            b = c;
            printf("%4lld\n", c);
        }
    }

    return 0;
}
