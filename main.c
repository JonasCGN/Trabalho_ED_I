#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "./estrutura/estruturas.h"
#include "./funcoes/funcao.h"

/*
PESSOA
Nome, ID, Idade

CLIENTE - 
PESSOA,Limite_de_Credito, PEDIDOS

PEDIDOS 

FUNCIONARIO -
PESSOA,Tipo_Funcionario [3][10] = {"Gerente", "Supervisor", "Vendedor"]

0-Gerente
1- Supervisor
2 - Vendedor

ORGANIZACAO
FUNCIONARIOS*, Nome, ID, Faturamento, PEDIDOS_EFETUADOS*, TIPO_ORGANIZACAO

TIPO_ORGANIZACAO
Tipo[2][10] = {"Publica", "Privada"}
0 -Publica
1 - Privada
*/




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

int main(){

    return 0;
}