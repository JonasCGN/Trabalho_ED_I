#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastrarFuncionario(FUNCIONARIO *Funcionario, ORGANIZACAO *organizacao,int i){
    (Funcionario + i)->pessoa->id = i;
    printf("Digite o nome do funcionario");
    gets((Funcionario + i)->pessoa->nome);

    printf("Digite a idade do funcionario");
    gets((Funcionario + i)->pessoa->idade);

    printf("Digite o seu salario: ");
    scanf("%d",&(Funcionario + i)->salario);

    printf("Digite o tipo de funcionario");
    scanf("%d",&(Funcionario +i)->tipo);// incrementar o if do tipo

    // listar organizações 
    printf("Digite o id da organização");
    scanf(("%d",&(Funcionario + i)->id_organizacao));
    
}