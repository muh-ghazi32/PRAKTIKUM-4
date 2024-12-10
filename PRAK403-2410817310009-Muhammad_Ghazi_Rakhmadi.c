#include <stdio.h>

int main() {
    int a, b;

    printf("Input: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (int i = a, j = b; i >= b && j <= a; i--, j++) {
            printf("%d %d", i, j);
            if (i != b) { 
                printf(" - ");
            }
        }
    } 
    else if (b > a) {
        for (int i = a, j = b; i <= b && j >= a; i++, j--) {
            printf("%d %d", i, j);
            if (i != b) { 
                printf(" - ");
            }
        }
    }
}