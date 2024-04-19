#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "./estrutura/estruturas.h"
#include "./alocacao/alocacao.h"
#include "./funcoes/menu/menu_principal.h"

int main(){
    CLIENTE *cliente;
    FUNCIONARIO *funcionario;
    ORGANIZACAO *organizacao;
    PEDIDOS *pedidos;

    int f=0,o=0,c=0,p,qtdC=10,qtdF=10,qtdP = 10,qtdO=10;

    cliente = (CLIENTE*)calloc(qtdC,sizeof(CLIENTE));
    funcionario = (FUNCIONARIO*)calloc(qtdF,sizeof(FUNCIONARIO));
    organizacao = (ORGANIZACAO*)calloc(qtdO,sizeof(ORGANIZACAO));
    pedidos = (PEDIDOS*)calloc(qtdP, sizeof(PEDIDOS));

    menu(cliente,funcionario,organizacao,pedidos,&c,&f,&o,&p,&qtdC,&qtdF,&qtdP,&qtdO);
    
    for(int i = 0;i < qtdO;i++){
        for(int j = 0; j < (organizacao+i)->quant_funcionario; j++)
            liberaPessoa((organizacao+i)->funcionario[j]->pessoa);

        liberarFuncionarioOrg((organizacao+i)->funcionario,(organizacao+i)->quant_funcionario);
    }

    liberarOrganizacao(organizacao);

    liberaPessoa(funcionario->pessoa);
    liberarFuncionario(funcionario);
    
    liberaPessoa(cliente->pessoa);
    liberarCliente(cliente);

    free(pedidos);

    return 0;
}