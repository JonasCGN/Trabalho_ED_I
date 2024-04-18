#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "./estrutura/estruturas.h"
#include "./alocacao/cliente.h"
#include "./alocacao/funcionario.h"
#include "./alocacao/organizacao.h"
#include "./alocacao/pedido.h"
#include "./alocacao/pessoa.h"
#include "./funcoes/menu/menu_principal.h"

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

/*
qtd = quantidade
qtdC = quantidade cliente
qtdO = quantidade Organizacao 
*/

int main(){
    CLIENTE *cliente;
    FUNCIONARIO *funcionario;
    ORGANIZACAO *organizacao;

    cliente = (CLIENTE*)malloc(2*sizeof(CLIENTE));
    funcionario = (FUNCIONARIO*)malloc(2*sizeof(FUNCIONARIO));
    organizacao = (ORGANIZACAO*)malloc(2*sizeof(ORGANIZACAO));
    
    int f=0,o=0,c=0,oF,qtdC,qtdF,qtdO,qtdOF;

    menu(cliente,funcionario,organizacao,&f,&o,&c,&oF,&qtdC,&qtdF,&qtdO,&qtdOF);

    
    return 0;
}