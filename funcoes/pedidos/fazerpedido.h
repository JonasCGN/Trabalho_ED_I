void fazerPedido(PEDIDOS *pedido, int *i){
    (pedido +(*i))->id_pedidos= (*i) +1;
    // listar itens

    printf("Digite o valor do pedido: ");
    scanf("%f", &(pedido+(*i))->valor_pedido);

    printf("Digite a quantidade de pedidos feitos:");
    scanf("%d", &(pedido+(*i))->pedidos_efetuados);

    alocacaoItemPedido(&((pedido+(*i))->item), (pedido+(*i))->pedidos_efetuados);

    for(int j=0;j<(pedido+(*i))->pedidos_efetuados;j++){
        printf("Digite o pedido %d:",j+1);
        gets((pedido+(*i))->item[j]);
    }

    printf("Digite o id do cliente: ");
    scanf("%d", &(pedido+(*i))->id_do_cliente);

    printf("Digite o id da organização: ");
    scanf("%d", &(pedido+(*i))->id_da_organizacao);

    printf("Digite o id do funcionario: ");
    scanf("%d", &(pedido+(*i))->id_funcionario);

    (*i)++;
}

void listapedidos(PEDIDOS * pedido,int qtd){

    printf("----------------------------------------------\n");
    printf("Lista de pedidos efetuados: \n");

    for(int i = 0; i < qtd; i++){
        printf("|ID do pedido: %d\n",(pedido+i)->id_pedidos);

        for(int j = 0;j < (pedido+i)->pedidos_efetuados;j++)
            printf("|Item %d: %s\n",j+1,(pedido+i)->item[j]);

        printf("|valor do pedido: %.2f\n",(pedido+i)->valor_pedido);
        printf("|ID do cliente: %d\n",(pedido+i)->id_do_cliente);
        printf("|ID do funcionario: %d\n",(pedido+i)->id_funcionario);
        printf("|ID da organizacao %d\n", (pedido+i)->id_da_organizacao);
        printf("----------------------------------------------\n");
        printf("\n");
    }
}
