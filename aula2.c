#include <stdio.h>
#include <string.h>
#include <stdlib.h>


# define tamanho 5 

char s[20];
struct tpilha {
    char dados[tamanho][20];
    int ini;
    int fim;
};


struct tfila {
    char dados[tamanho][20];
    int ini;
    int fim;
};

struct tpilha pilha;
struct tfila fila; 


void push (char *tarefa);
void pop(); 



int main(){
    push("Desenhar circulo");
    for (int i=0; i<tamanho; i++){
        printf("%s, ", pilha.dados[i]);
    }
    printf("\n");
    
    return 0;
}



void pilha_Sair(){

} 

void push(char *tarefa){
    strcpy(pilha.dados[pilha.fim], tarefa);
    pilha.fim++;

}


void pilha_entrar(){
    if (pilha.fim == tamanho) {
        printf("\n A pilha está cheia, impossível empilhar!\n\n");
        system("pause");
    }
    else {
        printf("Digite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}