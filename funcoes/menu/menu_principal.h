#include "../pedidos/fazerpedido.h"
#include "../cliente/cadastro.h"
#include "../cliente/menu.h"
#include "../organizacao/cadastro.h"
#include "../organizacao/menu.h"
#include "../funcionario/cadastro.h"
#include "../funcionario/menu.h"


void menu(CLIENTE *cliente,FUNCIONARIO *funcionario,ORGANIZACAO *organizacao,PEDIDOS *pedidos,int *c,int *f,int *o,int *p,int *qtdC,int *qtdF,int *qtdP,int *qtdO){ 
    int op;

    do{

        printf("BEM VINDO AO SISTEMA!!\n");
        printf("1 - Menu Cliente\n2 - Menu Funcionario \n3 - Menu Organizcao:");
        scanf("%d",&op);

        fflush(stdin);
        
        system("cls||clear");

        switch (op){
            case 1:
                menuCliente(cliente,pedidos,c,p,qtdC,*qtdP);
            break;
            
            case 2:
                menuFuncionario(funcionario,organizacao,f,*qtdF,*qtdO);
            break;
            
            case 3:
                menuOrganizacao(organizacao,o,qtdO);
            break;

            default:
                printf("Opcao invalida!");
            break;
        }   
    }while(op > 0);

}