#include <stdio.h>

int main() {
    int baris, kelipatan, total = 0;

    printf("Input: ");
    scanf("%d %d", &baris, &kelipatan);

    for (int i = 1; i <= baris; i++) {
        int jumlahBaris = 0;
        
        printf("(");
        for (int j = i; j >= 1; j--) { 
            int nilai = j * kelipatan;
            jumlahBaris += nilai;
            printf("%d * %d", j, kelipatan);  
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(") = %d\n", jumlahBaris);  
        total += jumlahBaris;             
    }
    printf("%d\n", total);
}