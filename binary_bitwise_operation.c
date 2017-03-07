#include<stdio.h>
#include<limits.h>
void to_binary(int n, char *s);
int reverse_binary(int n);
void show_binary(char *s);


int main(void) {
    int number;
    char s[CHAR_BIT * sizeof(int) + 1];

    printf("please enter a number: ");
    scanf("%d", &number);


    to_binary(number, s);
    show_binary(s);

    return 0;
}


void to_binary(int n, char *s) {
    unsigned int size = CHAR_BIT * sizeof(int);

    for (int i = size - 1; i >= 0; i--) {
        s[i] = (n & 01) + '0';
        n >>= 1;
    }
    s[size] = '\0';
}

int reverse_binary(int n) {
    int mask = 0;

    /*
    for (int i = 0; i < 4; i++) {
        mask <<= 1;
        mask = mask | 01;
    }
    printf("%d\n", mask);
    */


    int bar = 1;
    for (int i = 0; i < 4; i++) {
        mask = mask | bar;
        bar <<= 1;
    }

    return n ^ mask;
}


void show_binary(char *s) {
    int i = 0;

    while(s[i]) {
        putchar(s[i++]);
        if (i % 4 == 0) {
            putchar(' ');
        }
    }
    putchar('\n');
}





























