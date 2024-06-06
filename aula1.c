
#include <stdio.h>
#include <stdlib.h>

// ponteiro armazena o endereço de memoria de uma variavel 

// * quando for declarar a variavel ele serve para informar que essa variavel vai ser um ponteiro 
// * quando for utilizar fora da declaração da variavel  é para usar o valor da variavel


// & é utilizado quando quer usar o endereço de uma variavel 
// O ponteiro pode ser usado para alterar o valor da variavel 

// todo vetor e matrix é tratado como um ponteiro 
int main() {

    int *p; 
    int x;

    x = 10;
    p = &x;
    printf("%d\n", p);
    printf("%d\n", x);
                            // nesse caso o ponteiro *p foi apontado para o endereço de memoria da variavel  X 
                             // então ao  trocar o valor do endereço de memoria de p eu estou alterando o valor da variavel X
    *p = 40;
    printf("%d", x);



    return 0;

}
