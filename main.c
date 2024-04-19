#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "./estrutura/estruturas.h"
#include "./alocacao/alocacao.h"
#include "./funcoes/menu/menu_principal.h"
// não esta cadastrando mais de um cliente
int main(){
    CLIENTE *cliente;
    FUNCIONARIO *funcionario;
    ORGANIZACAO *organizacao;
    PEDIDOS *pedidos;

    int f=0,o=0,c=0,oF,qtdC=2,qtdF=2,qtdO=2,qtdOF=2;

    cliente = (CLIENTE*)malloc(qtdC*sizeof(CLIENTE));
    funcionario = (FUNCIONARIO*)malloc(qtdF*sizeof(FUNCIONARIO));
    organizacao = (ORGANIZACAO*)malloc(qtdO*sizeof(ORGANIZACAO));
    pedidos = (PEDIDOS*)malloc(sizeof(PEDIDOS));

    menu(cliente,funcionario,organizacao,&f,&o,&c,&oF,&qtdC,&qtdF,&qtdO,&qtdOF);
    
    liberaPessoa(organizacao->funcionario->pessoa);
    liberarFuncionario(organizacao->funcionario);
    liberarOrganizacao(organizacao);

    liberaPessoa(funcionario->pessoa);
    liberarFuncionario(funcionario);
    
    liberaPessoa(cliente->pessoa);
    liberarCliente(cliente);

    free(pedidos);

    return 0;
}