void menuCliente(CLIENTE *cliente, PEDIDOS *pedidos,int *c,int *p,int qtdC,int qtdP){
    int opc;

    do{
        printf("---------------------------\n");
        printf("|0 - Voltar menu principal|\n|1 - Cadastrar Cliente    |\n|2 - Mostrar Clientes     |\n|3 - Fazer pedido         |\n---------------------------\n");
        scanf("%d", &opc);
        fflush(stdin);
        
        system("cls||clear");
        
        switch (opc){
            case 1:
                if (qtdC > *c)
                    cadastrarCliente(cliente,c);
                else
                    printf("Nao eh possivel cadastrar!");
                // *qtdC += 1;
                // cliente  = realocaCliente(cliente,*qtdC);
            break;

            case 2:
                mostrarclientes(*c,cliente);
            break;

            case 3:
                fazerPedido(pedidos,p);
            break;

            case 4:
                listapedidos(pedidos,qtdP);
            break;

            default:
                printf("Opcao invalida!");
            break;
        }
    }while(opc > 0);

}