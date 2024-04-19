void menuCliente(CLIENTE *cliente,int *i,int qtdC){
    char opc;

    printf("1 - Cadastrar Cliente\n2 - Mostrar Clientes\n");
    opc = getche();
    
    system("cls||clear");
    
    switch (opc){
        case '1':
            cadastrarCliente(cliente,i);
        break;

        case '2':
            mostrarclientes(qtdC,cliente);
        break;
        
        default:
            printf("Opcao invalida!");
        break;
    }
}