#include <stdio.h>

int main() {
    int input;
    printf("Input: ");
    scanf("%d", &input);

    printf("");
    for (int i = 1; i <= input; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    for (int i = input; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}