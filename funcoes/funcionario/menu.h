void menuFuncionario(FUNCIONARIO *funcinario,ORGANIZACAO *organizacao,int *f,int *oF,int qtdF,int qtdO,int qtdOF){
    int opc;

    do{
        printf("---------------------------\n");
        printf("|0 - Voltar menu principal|\n|1 - Cadastrar Funcionario|\n|2 - Mostrar Funcionario  |\n---------------------------\n");
        scanf("%d", &opc);

        fflush(stdin);

        system("cls||clear");

        switch (opc){
            case 1:
                cadastrarFuncionario(funcinario,organizacao,f,oF,qtdO,qtdOF);
            break;

            case 2:
                mostarfuncionario(qtdF,funcinario);
            break;
            
            default:
                printf("Opcao Invalida!");
            break;
        }
    }while(opc > 0);

}