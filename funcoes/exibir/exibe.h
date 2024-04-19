void listarOrganizacao(ORGANIZACAO* organizacao, int qtdo,int opc){
    
    if(opc == 1){
        printf("----------------------------------------------\n");
        printf("|Lista de organizacoes: \n");
        for(int i=0;i < qtdo ;i++){
        
            printf("|Organizacao %d: \n",i + 1);
            printf("|ID da organizacao: %d\n",organizacao[i].id);
            printf("|Nome: %s\n",organizacao[i].nome);
            printf("|Faturamento da organizacao: %.2f\n",organizacao[i].faturamento);
            printf("|Quantidade de Funcionario: %d\n",organizacao[i].quant_funcionario);
            //faturamento
            if(organizacao[i].tipo == 0){
                printf("|Tipo da organizacao: Publica\n");
            }else{
                printf("|Tipo da organizacao: Privada\n");
            }

            printf("----------------------------------------------\n");
            printf("\n");
        }
    }else{
        printf("|Organizacao %d: \n",qtdo + 1);
        printf("|ID da organizacao: %d\n",organizacao[qtdo].id);
        printf("|Nome: %s\n",organizacao[qtdo].nome);
        printf("|Faturamento da organizacao: %.2f\n",organizacao[qtdo].faturamento);
        printf("|Quantidade de Funcionario: %d\n",organizacao[qtdo].quant_funcionario);
        //faturamento
        if(organizacao[qtdo].tipo == 0){
            printf("|Tipo da organizacao: Publica\n");
        }else{
            printf("|Tipo da organizacao: Privada\n");
        }

        printf("----------------------------------------------\n");
    }
    

}

void mostrarclientes(int qtdc, CLIENTE * cliente,int opc){
    if(opc == 1){
        printf("----------------------------------------------\n");
        printf("|Lista de Clientes  \n");
        printf("----------------------------------------------\n");
        for(int i = 0; i < qtdc; i++){

            printf("|Cliente %d: \n",i + 1);
            printf("|ID: %d\n",cliente[i].pessoa->id);
            printf("|Nome: %s\n",cliente[i].pessoa->nome);
            printf("|Idade: %d\n",cliente[i].pessoa->idade);
            printf("|Limite de credito: %.2f\n",cliente[i].limite_de_credito);
            printf("----------------------------------------------\n");
            printf("\n");
        }
    }else{
        printf("|Cliente %d: \n",qtdc + 1);
        printf("|ID: %d\n",cliente[qtdc].pessoa->id);
        printf("|Nome: %s\n",cliente[qtdc].pessoa->nome);
        printf("|Idade: %d\n",cliente[qtdc].pessoa->idade);
        printf("|Limite de credito: %.2f\n",cliente[qtdc].limite_de_credito);
        printf("----------------------------------------------\n");
        printf("\n");
    }
    

}

void listarFuncionariosOrganizacao(ORGANIZACAO* organizacao, int qtdo){
    
    printf("----------------------------------------------\n");
    printf("|Lista de organizacoes: \n");
    for(int i=0;i < qtdo ;i++){
        printf("Funcionarios da organizacao %d\n",i+1);
        for(int j=0;j<(organizacao+i)->nF;j++){

            printf("Funcionario %d\n", j+1);
            printf("Nome: %s\n", (organizacao+i)->funcionario[j]->pessoa->nome);
            printf("Idade: %d\n", (organizacao+i)->funcionario[j]->pessoa->idade);
            printf("Id: %d\n", (organizacao+i)->funcionario[j]->pessoa->id);
            if((organizacao+i)->funcionario[j]->tipo == 0)
                printf("Funcao: Gerente");
            else if((organizacao+i)->funcionario[j]->tipo == 1)
                printf("Funcao: Supervisor");
            else if((organizacao+i)->funcionario[j]->tipo == 2)
                printf("Funcao: Vendedor");
                
        }
        printf("----------------------------------------------\n");
    }
}