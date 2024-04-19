#include "../pedidos/fazerpedido.h"
#include "../cliente/cadastro.h"
#include "../cliente/menu.h"
#include "../organizacao/cadastro.h"
#include "../organizacao/menu.h"
#include "../funcionario/cadastro.h"
#include "../funcionario/menu.h"


void menu(CLIENTE *cliente,FUNCIONARIO *funcionario,ORGANIZACAO *organizcao,PEDIDOS *pedidos,int *f,int *o,int *c,int *oF,int *qtdC,int *qtdF,int *qtdO,int *qtdOF){ 
    int op;

    do{

        printf("BEM VINDO AO SISTEMA!!\n");
        printf("1 - Menu Cliente\n2 - Menu Funcionario \n3 - Menu Organizcao:");
        scanf("%d",&op);

        fflush(stdin);
        
        system("cls||clear");

        switch (op){
            case 1:
                menuCliente(cliente,c,*qtdC,pedidos);
            break;
            
            break;  
            case 2:
                menuFuncionario(funcionario,organizcao,f,oF,*qtdF,*qtdO,*qtdOF);
            break;
            
            case 3:
                menuOrganizacao(organizcao,o,*qtdO);
            break;

            default:
                printf("Opcao invalida!");
            break;
        }   
    }while(op > 0);

}