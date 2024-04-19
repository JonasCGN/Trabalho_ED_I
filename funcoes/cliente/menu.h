void menuCliente(CLIENTE *cliente, PEDIDOS *pedidos,ORGANIZACAO *organizacao,int *c,int *p,int qtdC,int qtdP){
    int opc,n;

    do{
        printf("---------------------------\n");
        printf("0 - Voltar menu principal\n---------------------------\n1 - Cadastrar Cliente\n---------------------------\n2 - Mostrar Clientes\n---------------------------\n3 - Fazer pedido\n---------------------------\n4 - Lista pedidos\n---------------------------\n5 - Lista pedido cliente\n---------------------------\n");
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
                mostrarclientes(*c,cliente,1);
            break;

            case 3:
                if(qtdP > *p)
                    fazerPedido(pedidos,organizacao,cliente,p);
                else
                    printf("Nao eh possivel cadastrar!");
            break;

            case 4:
                listapedidos(pedidos,*p);
            break;

            case 5:
                printf("Digite o id do cliente:");
                scanf("%d", &n);
                listarPedidosCliente(cliente,n-1);
            break;

            default:
                printf("\n");
            break;
        }
    }while(opc > 0);

}