#include "../exibir/exibe.h"
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
        printf("---------------------------\n");
        printf("BEM VINDO AO SISTEMA!!\n");
        printf("---------------------------\n");
        printf("1 - Menu Cliente\n---------------------------\n2 - Menu Funcionario \n---------------------------\n3 - Menu Organizcao\n---------------------------\n");
        scanf("%d",&op);

        fflush(stdin);
        
        system("cls||clear");

        switch (op){
            case 1:
                menuCliente(cliente,pedidos,organizacao,c,p,*qtdC,*qtdP);
            break;
            
            case 2:
                menuFuncionario(funcionario,organizacao,f,*qtdF,*o);
            break;
            
            case 3:
                menuOrganizacao(organizacao,o,qtdO);
            break;

            default:
                printf("\n");
            break;
        }   
    }while(op > 0);
    for(int i=0;i<*qtdO;i++)
        for(int j=0;j < (organizacao+i)->nP; j++)
            liberarMatPedido((organizacao+i)->pedidos_efetuados,(organizacao+i)->quant_pedidos);

    for(int i=0;i < *qtdO;i++)
        for(int j=0;j<(cliente+i)->nP;j++)
            liberarMatPedido((cliente+i)->pedidos,(cliente+i)->quat_pedidos);

}