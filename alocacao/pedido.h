void alocacaoPedido(PEDIDOS **pedido){
    *pedido = (PEDIDOS*)calloc(1, sizeof(PEDIDOS));
}

void liberarPedido(PEDIDOS *pedido){
    free(pedido);
}