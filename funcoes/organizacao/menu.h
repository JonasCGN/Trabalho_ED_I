void menuOrganizacao(ORGANIZACAO *organizacao,int i){
    int opc;

    printf("1 - Cadastrar Organizacao\n2 - Mostrar Organizacao\n");
    scanf("%d", &opc);
    
    switch (opc){
        case '1':
            cadastrarOrganizacao(organizacao, i);
        break;

        case '2':

        break;
        
        default:

        break;
    }
}