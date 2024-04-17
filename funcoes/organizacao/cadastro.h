#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastrarOrganizacao(ORGANIZACAO *organizacao, FUNCIONARIO *funcionario,int i){
    char opc;
    int id;
    
    printf("Digite o nome da organizacao:");
    gets((organizacao+i)->nome);

    printf("Digite o id da organizacao:");
    scanf("%d",&(organizacao+i)->id);
    
    printf("Digite o faturamento da organização :");
    scanf("%f",&(organizacao+i)->faturamento);

    // pedidos efetuados pela org
    
    
    printf("Qual o tipo da sua organizacao:\n1 - Publico\n 2 - Privado");
    
    opc = getche();
    
    switch (opc){
        case '1':
            (organizacao+i)->tipo = 0;
            break;
        
        case '2':
            (organizacao+i)->tipo = 1;
        break;
        
        default:
            printf("Opcao invalida!");
        break;
        
    }

    /*
    Listar funcionarios
    */

}