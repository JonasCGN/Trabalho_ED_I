void fazerPedido(PEDIDOS *pedido,ORGANIZACAO* organizacao,CLIENTE *cliente, int *i){
    (pedido +(*i))->id_pedidos= (*i) + 1;
    // listar itens
    
    int nPO;
    int nPC;

    printf("Digite o valor do pedido: ");
    scanf("%f", &(pedido+(*i))->valor_pedido);

    printf("Digite a quantidade de pedidos feitos:");
    scanf("%d", &(pedido+(*i))->pedidos_efetuados);

    alocacaoItemPedido(&((pedido+(*i))->item), (pedido+(*i))->pedidos_efetuados);

    fflush(stdin);

    for(int j=0;j<(pedido+(*i))->pedidos_efetuados;j++){
        printf("Digite o pedido %d:",j+1);
        gets((pedido+(*i))->item[j]);
    }

    printf("Digite o id do cliente: ");
    scanf("%d", &nPC);

    mostrarclientes(nPC-1,cliente,2);

    printf("Digite o id da organizacao: ");
    scanf("%d", &nPO);

    listarOrganizacao(organizacao,nPO-1,2);

    printf("Digite o id do funcionario: ");
    scanf("%d", &(pedido+(*i))->id_funcionario);

    (pedido+(*i))->id_do_cliente = nPC;
    (pedido+(*i))->id_da_organizacao = nPO;

    (organizacao+(nPO - 1))->pedidos_efetuados[((organizacao+(nPO - 1))->nP)] = (pedido+(*i));
    
    (cliente+(nPC-1))->pedidos[(cliente+(nPC-1))->nP] = (pedido+(*i));

    ((organizacao+(nPO - 1))->nP)++;
    ((cliente+(nPC-1))->nP)++;

    (*i)++;
}

