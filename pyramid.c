#include <stdio.h>
int main(void) {
    int i, j, r;
    int rows;

    printf("please enter the rows: ");
    scanf("%d", &rows);

    for (r = 0; r < rows; r++) {
        for (i = rows; i > r; i--) {
            printf(" ");
        }
        for (j = 0; j < r; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (r = 0; r < rows; r++) {
        for (i = 0; i < r; i++) {
            printf(" ");
        }
        for (j = rows; j > r; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

