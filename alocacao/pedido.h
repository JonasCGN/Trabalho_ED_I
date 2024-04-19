void alocacaoPedido(PEDIDOS **pedido){
    *pedido = (PEDIDOS*)calloc(1, sizeof(PEDIDOS));
}

void alocacaoItemPedido(char ***str,int qtd){
    *str = (char**)calloc(qtd, sizeof(char*));
    
    for(int i=0;i<qtd;i++){
        (*str)[i] = (char*)calloc(25, sizeof(char));
    }
}

void alocaMatPedido(PEDIDOS ***pedidos,int qtd){
    *pedidos = (PEDIDOS**)calloc(qtd, sizeof(PEDIDOS*));
    
    for(int i=0;i<qtd;i++){
        (*pedidos)[i] = (PEDIDOS*)calloc(1, sizeof(PEDIDOS));
    }
}

void realocaPedido(PEDIDOS **pedido,int qtdP){
    *pedido = (PEDIDOS*)realloc(*pedido,qtdP * sizeof(PEDIDOS));
}

void liberarPedido(PEDIDOS *pedido){
    free(pedido);
}