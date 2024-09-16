#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    scanf("%d", &n); // Membaca bilangan
    
    int *arr = (int *)malloc(n * sizeof(int)); // Alokasi dinamis untuk array
    
    for(int i = 0; i < n; i++) { // Membaca bilangan-bilangan
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare); // Mengurutkan bilangan menggunakan qsort
    
    for(int i = 0; i < n; i++){ // Menampilkan hasil setelah diurutkan
        printf("%d\n", arr[i]); // Mencetak angka di setiap baris baru
    }
  
    return 0;
}