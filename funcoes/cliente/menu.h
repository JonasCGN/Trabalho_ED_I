void menuCliente(CLIENTE *cliente,int *i,int qtdC, PEDIDOS *pedidos){
    int opc;
    int numero_pedido = pedidos->pedidos_efetuados;

    do{
        printf("---------------------------\n");
        printf("|0 - Voltar menu principal|\n|1 - Cadastrar Cliente    |\n|2 - Mostrar Clientes     |\n|3 - Fazer pedido         |\n---------------------------\n");
        scanf("%d", &opc);
        fflush(stdin);
        
        system("cls||clear");
        
        switch (opc){
            case 1:
                cadastrarCliente(cliente,i);
                qtdC += 1;
                realocaCliente(&(cliente),qtdC);
            break;

            case 2:
                mostrarclientes(qtdC,cliente);
            break;

            case 3:
                fazerPedido(pedidos,numero_pedido);
            break;

            default:
                
                printf("Opcao invalida!");
               
            break;
        }
    }while(opc > 0);

}