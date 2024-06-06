
#include <stdio.h>
#include <stdlib.h>

int xi = 10;
int *ptr_xi = &xi;

    
    void imprimir(){
        printf("valor de xi = %d\n", xi);
        printf("valor de &xi = %p\n", &xi);
        printf("valor de ptr_xi = %p \n", ptr_xi);
        printf("valor de *ptr_xi = %d \n\n", *ptr_xi);

    };

int main(){

    imprimir();
    *ptr_xi = 20;
    imprimir();
    xi = 30;
    imprimir();

    int var = 12;

    printf("%d \n", ptr_xi);
    
}

// winmergge