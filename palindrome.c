#include<stdio.h>
#include<string.h>
void palindrome_string_A();
void palindrome_string_B();
void palindrome_number_A();
void palindrome_number_B();


int main(void) {

    palindrome_number_B();

    return 0;
}


void palindrome_string_A() {
    unsigned long i;
    int is_palindrome = 1;
    char bar[100];

    printf("please enter the sentence: \n");
    scanf("%s", bar);

    for (i = 0; i < strlen(bar) / 2 + 1; i++) {
        printf("compare %c and %c \n", bar[i], bar[strlen(bar) - 1 - i]);
        if (bar[i] == bar[strlen(bar) - 1 - i]) {
            continue;
        }
        else {
            is_palindrome = 0;
        }
    }

    if (is_palindrome == 1) {
        printf("%s is a palindrome\n", bar);
    }
    else {
        printf("%s is not a palindrome\n", bar);
    }
}


void palindrome_string_B() {
    char check[100];
    char bar[100];

    printf("please enter the sentence: \n");
    scanf("%s", bar);

    strcpy(check, bar);
//  strrev(check);

    if (strcmp(check, bar) == 0) {
        printf("%s is a palindrome\n", bar);
    }
    else {
        printf("%s is not a palindrome\n", bar);
    }
}


void palindrome_number_A() {
    int n;
    int reverse = 0;
    int temp;

    printf("please enter a number\n");
    scanf("%d", &n);

    temp = n;

    printf("temp = %d  reverse = %d\n", temp, reverse);
    while (temp != 0) {
        reverse = reverse * 10;
        reverse = reverse + temp % 10;
        temp = temp / 10;
        printf("temp = %d  reverse = %d\n", temp, reverse);
    }

    if (n == reverse)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
}


void palindrome_number_B() {
    int n;
    int a;

    printf("please enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        a = n % 10;
        n = n / 10;
        printf("%2d", a);
    }
}

























