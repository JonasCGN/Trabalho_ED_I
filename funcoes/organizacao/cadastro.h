void cadastrarOrganizacao(ORGANIZACAO *organizacao,int i){
    char opc;
    
    (organizacao+i)->id = i+1;

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


}

void listarOrganizacao(ORGANIZACAO* organizacao, int qtd){
    
    for(int i=0;i<qtd;i++){

        printf("Organizacao %d: \n",i + 1);
        printf(" ID da organizacao: %d\n",organizacao[i].id);
        printf(" Nome: %s\n",organizacao[i].nome);
        printf(" Faturamento da organização: %.2f\n",organizacao[i].faturamento);
        //faturamento
        if(organizacao[i].tipo == 0){
            printf(" Tipo da organizacao: Publica");
        }else{
            printf(" Tipo da organizacao: Privada");
        }
        printf("\n");
    }

}