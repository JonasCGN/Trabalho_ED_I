void cadastrarOrganizacao(ORGANIZACAO *organizacao,int *o){
    char opc;
    
    (organizacao+(*o))->id = (*o)+1;

    printf("Digite o nome da organizacao: ");
    gets((organizacao+(*o))->nome);

    printf("Digite o faturamento da organizacao: ");
    scanf("%f",&(organizacao+(*o))->faturamento);

    printf("Quantas funcionarios tem na organizacao: ");
    scanf("%d", &((organizacao+(*o))->quant_funcionario)); // lembrar de sempre que um funcionario usar o id da organização esse numero incrementar 
    // ideia em vez de pedir pra digitar esse valo ele ser incrmentado sozinho na hora que o funcionario
    // se cadastrar nessa empresa isso ser um vetor dentro da struct de organzação 
   
    
    (organizacao+(*o))->n = 0;

    alocaMatFucionario(&((organizacao+(*o))->funcionario),((organizacao+(*o))->quant_funcionario));

    printf("Qual o tipo da sua organizacao:\n1 - Publico\n2 - Privado\n");
    opc = getche();
    
    switch (opc){
        case '1':
            (organizacao+(*o))->tipo = 0;
        break;
        
        case '2':
            (organizacao+(*o))->tipo = 1;
        break;
        
        default:
            printf("Opcao invalida!");
        break;
        
    }
}

void listarOrganizacao(ORGANIZACAO* organizacao, int qtdo){
    
    printf("----------------------------------------------\n");
    printf("|Lista de organizacoes: \n");
    for(int i=0;i < qtdo-1 ;i++){
    
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

}