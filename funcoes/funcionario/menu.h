void menuFuncionario(FUNCIONARIO *funcinario,ORGANIZACAO *organizacao,int *f,int *oF,int qtdF,int qtdO,int qtdOF){
    int opc;

    printf("1 - Cadastrar Funcionario\n2 - Mostrar Funcionario\n");
    scanf("%d", &opc);
    
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
}