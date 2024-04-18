void menuOrganizacao(ORGANIZACAO *organizacao,int *o,int qtdO){
    int opc;

    printf("1 - Cadastrar Organizacao\n2 - Mostrar Organizacao\n");
    scanf("%d", &opc);
    
    switch (opc){
        case '1':
            cadastrarOrganizacao(organizacao, o);
        break;

        case '2':
            listarOrganizacao(organizacao,qtdO);
        break;
        
        default:

        break;
    }
}