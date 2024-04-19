void cadastrarCliente(CLIENTE *cliente,int *i){
    int sup = 0;
    
    alocaPessoa(&((cliente+(*i))->pessoa));

    (cliente+(*i))->pessoa->id = (*i)+1;

    printf("Digite o nome do cliente %d: ", (*i)+1);
    gets((cliente+(*i))->pessoa->nome);

    fflush(stdin);
    
    printf("Digite a idade do cliente: ");
    scanf("%d", &sup);
    
    do{
        printf(" APENSAS MAIOR DE IDADE!!!\n");
        printf("Digite a idade do cliente: ");
        scanf("%d", &sup);
    } while (sup < 18);
    (cliente+(*i))->pessoa->idade  = sup;
    
    fflush(stdin);

    printf("Digite o limite de credito do cliente: ");
    scanf("%f", &(cliente+(*i))->limite_de_credito);
    
    printf("Digite a quantidade de pedido:");
    scanf("%d", &(cliente+(*i))->quat_pedidos);

    (cliente+(*i))->nP = 0;

    alocaMatPedido(&((cliente+(*i))->pedidos), (cliente+(*i))->quat_pedidos);

    fflush(stdin);
    
    (*i)++;
}

