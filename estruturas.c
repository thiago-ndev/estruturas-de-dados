
#include <stdio.h>
#include <stdlib.h>

int main(){
    struct fraction {
        int numerator;
        int denominator;                        // cria uma estrutura de fraction 
        float value;
    };

    struct fraction metade;                     // cria uma variavel que recebe a estrutura fraction 
    metade.numerator = 1;                       // define valores 
    metade.denominator = 2;         
    metade.value = metade.numerator / metade.denominator;


    struct livro {
        float nota1;
        float nota2;
        float nota3;
        float nota4;
    };


    struct livro aluno_notas[40];

    aluno_notas[0].nota1 = 15;
    aluno_notas[1].nota1 = 0;
    aluno_notas[2].nota1 = 1;
    aluno_notas[3].nota1 = 2;
   

    aluno_notas[0].nota2 = 0;
    aluno_notas[1].nota2 = 10;
    aluno_notas[2].nota2 = 5;
    aluno_notas[3].nota2 = 7;

    aluno_notas[0].nota3 = 0;
    aluno_notas[1].nota3 = 10;
    aluno_notas[2].nota3 = 5;
    aluno_notas[3].nota3 = 7;

    aluno_notas[0].nota4 = 0;
    aluno_notas[1].nota4 = 10;
    aluno_notas[2].nota4 = 5;
    aluno_notas[3].nota4 = 7;


    printf("%f\n", aluno_notas[0].nota1);
    
}