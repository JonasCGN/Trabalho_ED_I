void menuFuncionario(FUNCIONARIO *funcinario,ORGANIZACAO *organizacao,int i,int qtd){
    int opc;

    printf("1 - Cadastrar Funcionario\n2 - Mostrar Funcionario\n");
    scanf("%d", &opc);
    
    switch (opc){
        case 1:
            cadastrarFuncionario(funcinario,organizacao,i,qtd);
        break;

        case 2:
            
        break;
        
        default:
            printf("Opcao Invalida!");
        break;
    }
}