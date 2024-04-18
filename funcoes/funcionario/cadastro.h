void cadastrarFuncionario(FUNCIONARIO *funcionario, ORGANIZACAO *organizacao,int i,int qtd){
    int n;
    
    (funcionario + i)->pessoa->id = i+1;

    printf("Digite o nome do funcionario");
    gets((funcionario + i)->pessoa->nome);

    printf("Digite a idade do funcionario");
    scanf("%d", &(funcionario + i)->pessoa->idade);

    printf("Digite o seu salario: ");
    scanf("%f",&(funcionario + i)->salario);

    do{
        printf("Digite o tipo de funcionario:");
        printf("1 - Gerente\n2 - Supervisor\n3 - Vendedor");
        scanf("%d",&n);
    }while(n < 1 || n > 3);

    (funcionario +i)->tipo = n-1;

    listarOrganizacao(organizacao,qtd); 
    
    printf("Digite o id da organização");
    scanf("%d",&(funcionario + i)->id_organizacao);

    (organizacao+i)->funcionario = (funcionario + i);
}

void mostarfuncionario(int qtdf, FUNCIONARIO *funcionarios){
    
    printf("Lista de Funcionarios: \n");
    for(int i = 0; i < qtdf; i++){
        printf("Funcionario %d: \n",i + 1);
        printf(" ID: %d\n",funcionarios[i].pessoa->id);
        printf(" Nome: %s\n",funcionarios[i].pessoa->nome);
        printf(" Idade: %d\n",funcionarios[i].pessoa->idade);
        printf(" Salario: %.2f\n",funcionarios[i].salario);
        printf(" ID da organizacao: %d\n",funcionarios[i].id_organizacao);

        if(funcionarios[i].tipo == 0){
            printf("Tipo: Gerente\n");
        }else if (funcionarios[i].tipo == 1)
        {
          printf("Tipo: Supervisor\n");
        }else{
            printf("Tipo: Vendedor\n");
        }

        printf("\n");
    }
}