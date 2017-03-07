#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n;
    char s[50];

    printf("please enter a number: ");
    scanf("%d", &n);
    itoa(n, s, 8);

    printf("\nthe result is %s", s);

    return 0;
}

