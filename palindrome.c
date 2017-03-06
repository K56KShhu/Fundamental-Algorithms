#include<stdio.h>
#include<string.h>
void palindrome_string_A();
void palindrome_string_B();
void palindrome_number();


int main(void) {

    palindrome_number();

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


void palindrome_number() {
    int origin;
    int rev = 0;
    int temp;

    printf("please enter a number: ");
    scanf("%d", &origin);
    temp = origin;

    while (temp != 0) {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }

    if (rev == origin) {
        printf("%d is a palindrome number\n", origin);
    }
    else {
        printf("%d is not a palindrome number\n", origin);
    }
}

























