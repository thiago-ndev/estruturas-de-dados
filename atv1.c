#include <stdio.h>
#include <stdlib.h>


int main(){
    int *x;

    x = (int*) malloc(sizeof(int));
    *x = 10;
    
    printf("Endereco: %d\n valor: %d\n", x, *x);

}