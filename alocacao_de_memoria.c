#include <stdio.h>
#include <stdlib.h>


// malloc - aloca um bloco de bytes em memoria 


// free(): - libera o espaço de memoria alocado a um ponteiro 
// sizeof - procura a quantidade de bytes necessario de um tipo de dado para a maquina 

int main(){
    
    int *ptr;

    printf("Endereco: %p\n", ptr);
    ptr = (int*) malloc(sizeof(int));
    printf("Endereco: %p \n Valor: %d\n\n", ptr, *ptr);
    
    *ptr = 10;
    printf("Endereco: %p \n Valor: %d\n\n", ptr, *ptr);


    int x;
    x = 20;                                         
    ptr = &x;                                                                       
    printf("Endereco: %p \n Valor: %d\n\n", ptr, *ptr);                 // o lixo da memoria existente persiste porque a funcao malloc nao faz tratamento

    ptr = (int *) malloc(sizeof(int));          
    printf("Endereco: %p \n Valor: %d\n\n", ptr, *ptr);

    system("pause");
    return 0;
}