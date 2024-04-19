void menuOrganizacao(ORGANIZACAO *organizacao,int *o,int qtdO){
    int opc;

    do{
        printf("---------------------------\n");
        printf("|0 -Voltar menu principal  |\n|1 - Cadastrar Organizacao |\n|2 - Mostrar Organizacao   |\n");
        scanf("%d", &opc);
        
        fflush(stdin);

        system("cls||clear");
        
        switch (opc){
            case 1:
                cadastrarOrganizacao(organizacao, o);
                qtdO += 1;
                realocaOrganizacao(&(organizacao),qtdO);
            break;

            case 2:
                listarOrganizacao(organizacao,qtdO);
            break;
            
            default:
                printf("Opcao Invalida!");
            break;
        }
    }while(opc > 0);
}