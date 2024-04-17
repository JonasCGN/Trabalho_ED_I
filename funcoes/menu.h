#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#include "./cliente/cadastro.h"
#include "./organizacao/cadastro.h"
#include "./funcionario/cadastro.h"

void listarOrganizacao(ORGANIZACAO* organizacao, int qtd){
    
    printf("Id Da Organizacao \t Nome da Organizacao\t");
    for(int i=0;i<qtd;i++){
        printf("%d \t\t %s",(organizacao+i)->id,(organizacao+i)->nome);
    }

}

void listarFuncionarios(FUNCIONARIO *funcionario,int qtd){
    printf("Id \t Nome\t Idade");
    for(int i=0;i<qtd;i++){
        printf("%d \t\t %s \t %d",(funcionario+i)->pessoa->id,(funcionario+i)->pessoa->nome,(funcionario+i)->pessoa->idade);
    }
    
}

void menu(){ 
    int qtdC = 10, qtdF = 10;
    int op;

    FUNCIONARIO* funcionario;
    ORGANIZACAO* organizacao;
    CLIENTE* cliente;
    

    printf("BEM VINDO AO SISTEMA!!\n");
    printf(" Digite 1 para fazer seu cadastro\n Digite 2 para entrar no sistema geral \n Digite 3 para sair do programa:");
    scanf("%d",&op);
    
    switch (op){
        case 1 :
            //cadastrarFuncionario();
            //cadastrarCliente();
            break;
        case 2 :
            // incrementar função do sistema privado( dicionar senha)
        default:
            break;
    }   
    
}