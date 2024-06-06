#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Constantes 
#define tamanho 5

// Estrutura da pilha 
struct tpilha {
    int dados[tamanho];
    int ini;
    int fim;
};

// variaveis globais 

struct tpilha pilha; 
int op;

// prototipacoes 

void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();


// funcao principal
int main(){

    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while(op != 0){
        system("cls");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op){
            case 1:
            pilha_entrar();
        break;
        case 2:
            pilha_sair();
        break;
        }
    }
    return 0;
}


void pilha_entrar(){
    if (pilha.fim == tamanho){
        printf("\nA pilha está cheia\n\n");
        system("pause");
    }
    else {
        printf("\n Digite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}


void pilha_sair(){
    if (pilha.ini == pilha.fim){
        printf("\n A pilha está vazia");
        system("pause");

    } else {
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}


void pilha_mostrar(){
    int i;
    printf("[  ");
    for (i=0; i < tamanho; i++){
        printf("%d ",pilha.dados[i]);
    }
    printf("]\n\n");
}


void  menu_mostrar(){
    printf("\n Escolha uma opcão: \n");
    printf(" 1 - Empilhar\n");
    printf(" 2 - desempilhar \n");
    printf(" 0 - sair \n");
}
