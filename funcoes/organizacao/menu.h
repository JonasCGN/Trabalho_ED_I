void menuOrganizacao(ORGANIZACAO *organizacao,int *o,int *qtdO){
    int opc;

    do{
        printf("---------------------------\n");
        printf("|0 -Voltar menu principal  |\n|1 - Cadastrar Organizacao |\n|2 - Mostrar Organizacao   |\n|3 - Listar Funcionarios Organizacao|");
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
                listarOrganizacao(organizacao,*o);
            break;

            case 3:
                listarFuncionariosOrganizacao(organizacao,*o);
            break;
            
            default:
                printf("Opcao Invalida!");
            break;
        }
    }while(opc > 0);
}