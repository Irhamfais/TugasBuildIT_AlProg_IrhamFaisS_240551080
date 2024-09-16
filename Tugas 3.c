#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_prime(long long N){ // Fungsi untuk melakukan pengecekan apakah N merupakan bilangan prima
    if(N < 2){
        return 0; // Jika N kurang dari 2 maka bukan bilangan prima
    }
    if(N == 2){
        return 1; // 2 adalah bilangan prima
    }
    if(N % 2 == 0){
        return 0; // bilangan genap selain 2 bukan bilangan prima
    }
    
    
    for(long long i = 3; i * i <= N; i += 2){ // Melakukan pengecekan bilangan ganjil dari 3 hingga akar kuadrat dari N
        if(N % i == 0){
            return 0; // Jika terdapat sebuah pembagi, maka N bukan bilangan prima
        }
    }
    return 1; // Jika tidak terdapat sebuah pembagi, maka N adalah bilangan prima
}

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (is_prime(N)){
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
       
    return 0;
}