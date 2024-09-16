#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string1[101], string2[102]; // Mendeklarasikan variabel
    
    scanf("%s", string1); // input string
    scanf("%s", string2); // input string
    
    int length1 = strlen(string1); // Menghitung panjang string
    int length2 = strlen(string2); // Menghitung panjang string
    
    if (length1 != length2) { // Mengecek apakah panjang kedua string berbeda 
        printf("BERBEDA\n");
    } else { // Jika panjang sama, dilakukan pengecekan apakah keduanya identik
        if(strcmp(string1, string2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

        
    return 0;
}
