#include <stdio.h>

int main (void){

    printf("Numeros pares de 1 a 50: \n");
    for(int i=1; i<=50; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}