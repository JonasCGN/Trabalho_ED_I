void menuCliente(CLIENTE *cliente,int *i,int qtdC){
    int opc;

    do{
        printf("1 - Cadastrar Cliente\n2 - Mostrar Clientes\n");
        scanf("%d", &opc);
        
        fflush(stdin);
        
        system("cls||clear");
        
        switch (opc){
            case 1:
                cadastrarCliente(cliente,i);
            break;

            case 2:
                mostrarclientes(qtdC,cliente);
            break;
            
            default:
                printf("Opcao invalida!");
            break;
        }
    }while(opc > 0);

}