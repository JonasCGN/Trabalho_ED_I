void cadastrarOrganizacao(ORGANIZACAO *organizacao,int *o){
    char opc;
    
    (organizacao+(*o))->id = (*o)+1;

    printf("Digite o nome da organizacao: ");
    gets((organizacao+(*o))->nome);

    printf("Digite o faturamento da organizacao: ");
    scanf("%f",&(organizacao+(*o))->faturamento);

    printf("Quantas funcionarios tem na organizacao: ");
    scanf("%d", &((organizacao+(*o))->quant_funcionario));
   
    printf("Quantas pedidos quer salvar na organizacao:");
    scanf("%d", &((organizacao+(*o))->quant_pedidos));

    (organizacao+(*o))->nF = 0;
    (organizacao+(*o))->nP = 0;

    alocaMatFucionario(&((organizacao+(*o))->funcionario),((organizacao+(*o))->quant_funcionario));
    alocaMatPedido(&((organizacao+(*o))->pedidos_efetuados),((organizacao+(*o))->quant_pedidos));

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
    (*o)++;
}
