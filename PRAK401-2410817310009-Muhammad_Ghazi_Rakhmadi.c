#include <stdio.h>

int main() {
    int kelipatan, i;
    char simbol;

    printf("Input : ");
    scanf("%d %c", &kelipatan, &simbol);

    for (i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }   
}
}