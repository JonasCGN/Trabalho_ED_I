
void fazerPedido(PEDIDOS *pedido, int i){
    (pedido +i)->id_pedidos= i +1;
    // listar itens
    
    printf("Digite o nome do seu pedido:");
    gets((pedido +i)->iten);

    printf("Digite o valor do pedido :");
    scanf("%f", &(pedido+i)->valor_pedido);

    (pedido+i)->pedidos_efetuados +=1;

    printf("Digite o id do cliente :");
    scanf("%d", &(pedido+i)->id_do_cliente);

    printf("Digite o id da organização :");
    scanf("%d", &(pedido+i)->id_da_organização);

    printf("Digite o id do funcionario:");
    scanf("%d", &(pedido+i)->id_funcionrio);

}

void listapedidos(PEDIDOS * pedido){
    printf("Lista de pedidos efetuados: \n");

    int j = (pedido->pedidos_efetuados);//pega a quantidade de pedidos efetuados
    for(int i = 0; i < j; i++){
        printf(" Item: %s\n",pedido->iten);
        printf(" ID do pedido: %d\n",pedido->id_pedidos);
        printf(" valor do pedido: %.2f\n",pedido->valor_pedido);
        printf(" ID do cliente: %d\n",pedido->id_do_cliente);
        printf(" ID do funcionario: %d\n",pedido->id_funcionrio);
        printf(" ID da organizacao: %d\n",pedido->id_da_organização);
        printf("\n");
    }
}
