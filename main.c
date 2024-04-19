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

    int f=0,o=0,c=0,p,qtdC=1,qtdF=1,qtdP = 1,qtdO=1;

    cliente = (CLIENTE*)malloc(qtdC*sizeof(CLIENTE));
    funcionario = (FUNCIONARIO*)malloc(qtdF*sizeof(FUNCIONARIO));
    organizacao = (ORGANIZACAO*)malloc(qtdO*sizeof(ORGANIZACAO));
    pedidos = (PEDIDOS*)malloc(qtdP * sizeof(PEDIDOS));

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