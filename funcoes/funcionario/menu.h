void menuFuncionario(FUNCIONARIO *funcinario,ORGANIZACAO *organizacao,int *f,int qtdF,int qtdO){
    int opc;

    do{
        printf("---------------------------\n");
        printf("0 - Voltar menu principal\n---------------------------\n1 - Cadastrar Funcionario\n---------------------------\n2 - Mostrar Funcionario\n---------------------------\n");
        scanf("%d", &opc);

        fflush(stdin);

        system("cls||clear");

        switch (opc){
            case 1:
                if (qtdF > *f)
                    cadastrarFuncionario(funcinario,organizacao,f,qtdO);
                else
                    printf("Nao eh possivel cadastrar!");
                // qtdF += 1;
                // realocafuncionario(&(funcinario),qtdF);
            break;

            case 2:
                mostarfuncionario(*f,funcinario);
            break;
            
            default:
                printf("\n");
            break;
        }
    }while(opc > 0);

}