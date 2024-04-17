#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastrarCliente(CLIENTE *cliente,int i){
    (cliente+i)->pessoa->id = i+1;
    printf("Digite o nome do cliente:");
    gets((cliente+i)->pessoa->nome);
    
    printf("Digite a idade do cliente:");
    gets((cliente+i)->pessoa->idade);
    
    printf("Digite o limite de credito do cliente:");
    scanf("%d", &(cliente+i)->limite_de_credito);
    
    /*
    Registrar pedidos
    */
}