#include <stdio.h>
#include <string.h>
void reverse_A();
void reverse_B();

int main(void) {

    reverse_B();

    return 0;
}


void reverse_A() {
    char s[50] = "abcde";
    char r[50];

    for (unsigned int i = 0; i < strlen(s); i++) {
        r[i] = s[strlen(s) - 1 - i];
    }

    printf("%s\n", r);
}

void reverse_B() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse_B();
        printf("%c", c);
    }
}

