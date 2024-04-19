void cadastrarOrganizacao(ORGANIZACAO *organizacao,int *o){
    char opc;
    int qtd;
    
    (organizacao+(*o))->id = (*o)+1;

    printf("Digite o nome da organizacao:");
    gets((organizacao+(*o))->nome);

    printf("Digite o faturamento da organizacao:");
    scanf("%f",&(organizacao+(*o))->faturamento);

    printf("Quantas funcionarios tem na organizacao:");
    scanf("%d", &qtd);
    
    alocarfuncionario(&((organizacao+(*o))->funcionario),qtd);

    // pedidos efetuados pela org

    printf("Qual o tipo da sua organizacao:\n1 - Publico\n2 - Privado");
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

void listarOrganizacao(ORGANIZACAO* organizacao, int qtd){
    
    for(int i=0;i < qtd-1 ;i++){

        printf("Organizacao %d: \n",i + 1);
        printf("ID da organizacao: %d\n",organizacao[i].id);
        printf("Nome: %s\n",organizacao[i].nome);
        printf("Faturamento da organização: %.2f\n",organizacao[i].faturamento);
        //faturamento
        if(organizacao[i].tipo == 0){
            printf("Tipo da organizacao: Publica");
        }else{
            printf("Tipo da organizacao: Privada");
        }
        printf("\n");
    }

}