void cadastrarCliente(CLIENTE *cliente,int *i){
int sup = 0;
    alocaPessoa(&((cliente+(*i))->pessoa));

    (cliente+(*i))->pessoa->id = (*i)+1;

    printf("Digite o nome do cliente %d: ", (*i)+1);
    gets((cliente+(*i))->pessoa->nome);

    fflush(stdin);
    
    printf("Digite a idade do cliente: ");
    scanf("%d", &sup);
    
    do{
        printf(" APENSAS MAIOR DE IDADE!!!\n");
        printf("Digite a idade do cliente: ");
        scanf("%d", &sup);
    } while (sup <18);
    (cliente+(*i))->pessoa->idade  = sup;
    
    fflush(stdin);

    printf("Digite o limite de credito do cliente: ");
    scanf("%f", &(cliente+(*i))->limite_de_credito);
    
    fflush(stdin);
    
    (*i)++;
<<<<<<< HEAD
=======
   
>>>>>>> edcb76a50bec0b8b2e3c60fd470fa18bcaad1283
}

void mostrarclientes(int qtdc, CLIENTE * cliente){
    
    printf("----------------------------------------------\n");
    printf("|Lista de Clientes  \n");
     printf("----------------------------------------------\n");
    for(int i = 0; i < qtdc-1; i++){
        printf("|Cliente %d: \n",i + 1);
        printf("|ID: %d\n",cliente[i].pessoa->id);
        printf("|Nome: %s\n",cliente[i].pessoa->nome);
        printf("|Idade: %d\n",cliente[i].pessoa->idade);
        printf("|Limite de credito: %.2f\n",cliente[i].limite_de_credito);
        printf("----------------------------------------------\n");
        printf("\n");
    }
}