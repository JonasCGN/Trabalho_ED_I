void fazerPedido(PEDIDOS *pedido,ORGANIZACAO* organizacao,CLIENTE *cliente, int *i){
    (pedido +(*i))->id_pedidos= (*i) +1;
    // listar itens
    
    int nPO = (organizacao+((pedido+(*i))->id_da_organizacao-1))->nP;
    int nPC = (cliente+((pedido+(*i))->id_do_cliente-1))->nP;

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
    scanf("%d", &(pedido+(*i))->id_do_cliente);

    printf("Digite o id da organização: ");
    scanf("%d", &(pedido+(*i))->id_da_organizacao);

    printf("Digite o id do funcionario: ");
    scanf("%d", &(pedido+(*i))->id_funcionario);

    
    (organizacao+((pedido+(*i))->id_da_organizacao-1))->pedidos_efetuados[nPO] = (pedido+(*i));
    (cliente+((pedido+(*i))->id_do_cliente-1))->pedidos[nPC] = (pedido+(*i));
   
    ((organizacao+((pedido+(*i))->id_da_organizacao-1))->nP)++;
    ((cliente+((pedido+(*i))->id_do_cliente-1))->nP)++;
   
    (*i)++;
}

void listapedidos(PEDIDOS *pedido,int qtd){

    printf("----------------------------------------------\n");
    printf("Lista de pedidos efetuados: \n");

    for(int i = 0; i < qtd-1; i++){
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

void listarpedidosorg(ORGANIZACAO *organizacao, int idorg){        
    for(int i=0;i<(organizacao+(idorg-1))->nP;i++){
        printf("Nome dos pedidos:");

        printf("Id do pedido: %d",(organizacao+(idorg-1))->pedidos_efetuados[i]->id_pedidos);
        
        for(int j=0;j < ((organizacao+(idorg-1))->pedidos_efetuados[i]->pedidos_efetuados); j++){
            printf("Pedido %d", j+1);
            printf("Nome: %s",(organizacao+(idorg-1))->pedidos_efetuados[i]->item[j]);
        }

        printf("Valor do pedido: %.2f",(organizacao+(idorg-1))->pedidos_efetuados[i]->valor_pedido);

        printf("Id do cliente: %d",(organizacao+(idorg-1))->pedidos_efetuados[i]->id_do_cliente);
        
        printf("Id da organizacao: %d",(organizacao+(idorg-1))->pedidos_efetuados[i]->id_da_organizacao);
        
        printf("Id do funcionario: %d",(organizacao+(idorg-1))->pedidos_efetuados[i]->id_funcionario);

    }
}

void listarPedidosCliente(CLIENTE *cliente, int idcliente){        
    for(int i=0;i<(cliente+(idcliente-1))->nP;i++){
        printf("Nome dos pedidos:");
        printf("Id do pedido: %d",(cliente+(idcliente-1))->pedidos[i]->id_pedidos);
        
        for(int j=0;j < ((cliente+(idcliente-1))->pedidos[i]->pedidos_efetuados); j++){
            printf("Pedido %d", j+1);
            printf("Nome: %s",(cliente+(idcliente-1))->pedidos[i]->item[j]);
        }

        printf("Valor do pedido: %.2f",(cliente+(idcliente-1))->pedidos[i]->valor_pedido);
        printf("Id do cliente: %d",(cliente+(idcliente-1))->pedidos[i]->id_do_cliente);
        printf("Id da organizacao: %d",(cliente+(idcliente-1))->pedidos[i]->id_da_organizacao);    
        printf("Id do funcionario: %d",(cliente+(idcliente-1))->pedidos[i]->id_funcionario);
    }

}
