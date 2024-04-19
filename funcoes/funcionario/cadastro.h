void cadastrarFuncionario(FUNCIONARIO *funcionario, ORGANIZACAO *organizacao,int *f,int qtdO){
    int n,id,o;
    
    alocaPessoa(&((funcionario+(*f))->pessoa));

    (funcionario + (*f))->pessoa->id = (*f)+1;

    printf("Digite o nome do funcionario: ");
    gets((funcionario + (*f))->pessoa->nome);

    printf("Digite a idade do funcionario: ");
    scanf("%d", &(funcionario + (*f))->pessoa->idade);

    printf("Digite o seu salario: ");
    scanf("%f",&(funcionario + (*f))->salario);

    do{
        printf("Digite o tipo de funcionario: ");
        printf("\n1 - Gerente\n2 - Supervisor\n3 - Vendedor");
        scanf("%d",&n);
    }while(n < 1 || n > 3);

    (funcionario + (*f))->tipo = n - 1;

    /*
    Nao esta exibindo corretamente
    */
    listarOrganizacao(organizacao,qtdO);
    
    printf("Digite o id da organizacao: ");
    scanf("%d",&id);

    for(int i=0;i<qtdO;i++){
        if((organizacao+i)->id == id){
            o = i;
            (funcionario+(*f))->id_organizacao = id;
            break;
        }
    }

    (organizacao + o)->funcionario[(organizacao+o)->n] = (funcionario+(*f));

    ((organizacao+o)->n)++;

    (*f)++;

    if((organizacao+o)->n >= ((organizacao+o)->quant_funcionario)){
        ((organizacao+o)->quant_funcionario)++;
        realocaMatFucionario(&((organizacao+o)->funcionario), ((organizacao+o)->quant_funcionario));
    }
}

void mostarfuncionario(int qtdf, FUNCIONARIO *funcionarios){

    printf("----------------------------------------------\n");
    printf("|Lista de Funcionarios: \n");
    for(int i = 0; i < qtdf; i++){
        printf("|Funcionario %d: \n",i + 1);
        printf("|ID: %d\n",funcionarios[i].pessoa->id);
        printf("|Nome: %s\n",funcionarios[i].pessoa->nome);
        printf("|Idade: %d\n",funcionarios[i].pessoa->idade);
        printf("|Salario: %.2f\n",funcionarios[i].salario);
        printf("|ID da organizacao: %d\n",funcionarios[i].id_organizacao);
        if(funcionarios[i].tipo == 0){
            printf("|Tipo: Gerente\n");
        }else if (funcionarios[i].tipo == 1)
        {
          printf("|Tipo: Supervisor\n");
        }else{
            printf("|Tipo: Vendedor\n");
        }
         printf("----------------------------------------------\n");
        printf("\n");
    }
}