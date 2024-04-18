#include "../cliente/cadastro.h"
#include "../cliente/menu.h"
#include "../organizacao/cadastro.h"
#include "../organizacao/menu.h"
#include "../funcionario/cadastro.h"
#include "../funcionario/menu.h"





void menu(CLIENTE *cliente,FUNCIONARIO *funcionario,ORGANIZACAO *organizcao){ 
    int qtdC = 0, qtdF = 0, qtdO =0;
    int op;

    printf("BEM VINDO AO SISTEMA!!\n");
    printf("1 - Menu Cliente\n2 - Menu Funcionario \n3 - Menu Organizcao:");
    scanf("%d",&op);
    
    switch (op){
        case 1:
            menuCliente(cliente,qtdC);
        break;
        
        case 2:
            menuFuncionario(funcionario,organizcao,qtdF,qtdO);
        break;
        
        case 3:
            menuOrganizacao(organizcao,funcionario,qtdO);
        break;

        default:
            printf("Opcao invalida!");
        break;
    }   
    
}