void cadastrarCliente(CLIENTE *cliente,int *i){

    (cliente+(*i))->pessoa->id = (*i)+1;

    printf("Digite o nome do cliente:");
    gets((cliente+(*i))->pessoa->nome);
    
    printf("Digite a idade do cliente:");
    scanf("%d",&(cliente+(*i))->pessoa->idade);
    
    fflush(stdin);

    printf("Digite o limite de credito do cliente:");
    scanf("%f", &(cliente+(*i))->limite_de_credito);
    
    fflush(stdin);
    
    (*i)++;
    
    /*
        Registrar pedidos
    */
}

void mostrarclientes(int qtdc, CLIENTE * cliente){
    
    printf("----------------------------------------------\n");
    printf("Lista de Clientes: \n");
<<<<<<< HEAD
    printf("----------------------------------------------\n");
    for(int i = 0; i < qtdc; i++){
=======

    for(int i = 0; i < qtdc-1; i++){
>>>>>>> a64eb1d337c9fb4844d234f4032bf01b2a60a9d7
        printf("Cliente %d: \n",i + 1);
        printf(" ID: %d\n",cliente[i].pessoa->id);
        printf(" Nome: %s\n",cliente[i].pessoa->nome);
        printf(" Idade: %d\n",cliente[i].pessoa->idade);
        printf(" Limite de credito: %.2f\n",cliente[i].limite_de_credito);
        printf("----------------------------------------------\n");
        printf("\n");
    }
}