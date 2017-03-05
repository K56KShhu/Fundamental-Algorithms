#include<stdio.h>
#define SIZE 5
void showArray(int ar[]);
void swap(int *x, int *y);
void BubbleSort1(int ar[]);
void BubbleSort2(int ar[]);
void SelectSort(int ar[]);
void QuickSort(int ar[], int start, int end);

int main(void) {
    int a[SIZE] = { 2, 7, 3, 1, 6 };

    QuickSort(a, 0, SIZE);

    return 0;
}

void showArray(int ar[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%3d", ar[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort1(int ar[]) {
    int i, j;
    int temp;
    int times = 1;
    
    //SIZE = 5
    for (j = 0; j < SIZE - 1; j++){
        printf("%d times \n", times++);
        for (i = 0; i < SIZE - j - 1; i++) {
        printf("compare a[%d] and a[%d]\n", i, i + 1);
            if (ar[i] > ar[i + 1]) {
                temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
            }
        }
    }

    showArray(ar);
}


void BubbleSort2(int ar[]) {
    int i, j;
    int temp;
    
    for (i = SIZE - 1; 0 < i; i--) {
        for (j = 0; j < i; j++) {
            if (ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    showArray(ar);
}


void SelectSort(int ar[]) {
    int i, j;
    int temp;

    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (ar[i] > ar[j]) {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
    showArray(ar);
}


void QuickSort(int ar[], int start, int end) {
    if (start >= end)
        return;
    int mid = ar[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (ar[left] < mid && left < right)
            left++;
        while (ar[right] >= mid && left < right)
            right--;
        swap(&ar[left], &ar[right]);
    }
    if (ar[left] >= ar[end])
        swap(&ar[left], &ar[end]);
    else
        left++;
    if (left) {
        QuickSort(ar, start, left - 1);
    }
    QuickSort(ar, left + 1, end);

    showArray(ar);
}

    





















