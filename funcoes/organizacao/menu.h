void menuOrganizacao(ORGANIZACAO *organizacao, FUNCIONARIO *funcionario,int i){
    int opc;

    printf("1 - Cadastrar Organizacao\n2 - Mostrar Organizacao\n");
    scanf("%d", &opc);
    
    switch (opc){
        case '1':
            cadastrarOrganizacao(organizacao, funcionario, i);
        break;

        case '2':

        break;
        
        default:

        break;
    }
}