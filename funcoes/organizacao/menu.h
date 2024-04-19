void menuOrganizacao(ORGANIZACAO *organizacao,int *o,int *qtdO){
    int opc,n;

    do{
        printf("-------------------------------------\n");
        printf("0 - Voltar menu principal\n-------------------------------------\n1 - Cadastrar Organizacao\n-------------------------------------\n2 - Mostrar Organizacao\n-------------------------------------\n3 - Listar Funcionarios Organizacao\n-------------------------------------\n4 - Listar Pedidos da Organizacao\n-------------------------------------\n");
        scanf("%d", &opc);
        
        fflush(stdin);

        system("cls||clear");
        
        switch (opc){
            case 1:
                if(*qtdO > *o)
                    cadastrarOrganizacao(organizacao, o);
                else
                    printf("Nao eh possivel cadastrar!");
                // *qtdO += 1;
                // realocaOrganizacao(&organizacao,*qtdO);
            break;

            case 2:
                listarOrganizacao(organizacao,*o,1);
            break;

            case 3:
                listarFuncionariosOrganizacao(organizacao,*o);
            break;

            case 4:

                printf("Digite o id da org:");
                scanf("%d", &n);
                listarpedidosorg(organizacao,n-1);
            break;
            
            default:
                printf("\n");
            break;
        }
    }while(opc > 0);
}