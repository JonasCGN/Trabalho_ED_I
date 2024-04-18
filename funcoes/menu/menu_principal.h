#include "../cliente/cadastro.h"
#include "../cliente/menu.h"
#include "../organizacao/cadastro.h"
#include "../organizacao/menu.h"
#include "../funcionario/cadastro.h"
#include "../funcionario/menu.h"
#include "../pedidos/fazerpedido.h"

<<<<<<< HEAD
void menu(CLIENTE *cliente,FUNCIONARIO *funcionario,ORGANIZACAO *organizcao,int *f,int *o,int *c,int *oF,int *qtdC,int *qtdF,int *qtdO,int *qtdOF){ 
=======
void menu(CLIENTE *cliente,FUNCIONARIO *funcionario,ORGANIZACAO *organizcao,PEDIDOS *pedido){ 
    int qtdC = 0, qtdF = 0, qtdO =0;
>>>>>>> 794fd4a99560ce0911159c4dc18bbaecc935968e
    int op;

    printf("BEM VINDO AO SISTEMA!!\n");
    printf("1 - Menu Cliente\n2 - Menu Funcionario \n3 - Menu Organizcao:");
    scanf("%d",&op);
    
    switch (op){
        case 1:
<<<<<<< HEAD
            menuCliente(cliente,c,*qtdC);
        break;
=======
            menuCliente(cliente,qtdC);
            fazerPedido(pedido,qtdC);        
>>>>>>> 794fd4a99560ce0911159c4dc18bbaecc935968e
        
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
    
}