#include <stdio.h>
#include <stdlib.h>
#include "Lista Dinamica.h"

//Arquivo Lista Dinâmica.h
struct aluno{
    int id;
    char nome[30];
    char empresa[20];
    char departamento[15];
    int fone[10];
    int cel[11];
    int email[20];
};

typedef struct elemento* Lista;

Lista criaLista();

void liberaLista(Listali);


//Arquivo Lista Dinâmica.c

struct elemento{
    struct aluno dados; //Cria o campo de dados da lista
    struct elemento prox;
};
typedef struct elemento Elem;

ListacriaLista(){
    Lista li;
    li = (Lista) malloc(sizeof(Lista));
    if(li != NULL){
        li = NULL;
    }
    return li;
}

void liberaLista(Listali){
    if(li != NULL){
        Elem* no;
        while((li) != NULL){
            no =li;
            li = (li) -> prox;
            free(no);
        }
        free(li);
    }
}

//Arquivo principal main

int main(){
    Lista li; //Ponteiro para ponteiro (ponteiro "li" aponta para Lista, que por sua vez aponta para "struct elemento")

    li = criaLista();

    liberaLista(li);

    FILE *arquivo;

    arquivo = fopen("BancoD.bin", "wb");

    if(arquivo != NULL){
        printf("Arquivo aberto");
    }else{
        printf("Arquivo não aberto");
    }

    printf("Insira o código do cliente");
    scanf("%d", &cliente.id);
    printf("Insira o nome do cliente");
    scanf("%c", &cliente.nome);
    printf("Insira a empresa do cliente");
    scanf("%c", &cliente.empresa);
    printf("Insira o departamento do cliente");
    scanf("%c", &cliente.departamento);
    printf("Insira o telefone do cliente");
    scanf("%d", &cliente.fone);
    printf("Insira o celular do cliente");
    scanf("%d", &cliente.cel);
    printf("Insira o e-mail do cliente");
    scanf("%d", &cliente.email);
}
