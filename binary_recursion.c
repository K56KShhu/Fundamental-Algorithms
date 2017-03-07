#include<stdio.h>
void foo(int n);

int main(void) {
    int n;

    printf("please enter a number: ");
    scanf("%d", &n);

    foo(n);

    return 0;
}

void foo(int n) {
    int bar;

    if (n > 0) {
        bar = n % 2;
        foo(n / 2);
        printf("%d", bar);
    }

}
        

