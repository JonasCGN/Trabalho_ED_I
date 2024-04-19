CLIENTE* realocaCliente(CLIENTE *cliente,int i){
    cliente = (CLIENTE*)realloc(cliente, i * sizeof(CLIENTE));

    if(cliente == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }

    return cliente;
}

void liberarCliente(CLIENTE *cliente){
    free(cliente);
}