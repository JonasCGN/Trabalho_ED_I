void menuCliente(CLIENTE *cliente,int i){
    char opc;

    printf("1 - Cadastrar Cliente\n2 - Mostrar Clientes\n");
    opc = getche();
    
    switch (opc){
        case '1':
            cadastrarCliente(cliente,i);
        break;

        case '2':

        break;
        
        default:

        break;
    }
}