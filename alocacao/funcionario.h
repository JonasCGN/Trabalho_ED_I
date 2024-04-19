void alocarfuncionario(FUNCIONARIO **funcionario,int i){
    *funcionario = (FUNCIONARIO*)calloc(i, sizeof(FUNCIONARIO));
    if(*funcionario == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
}

void realocafuncionario(FUNCIONARIO **funcionario,int i){
    *funcionario = (FUNCIONARIO*)realloc(*funcionario, i * sizeof(FUNCIONARIO));
    if(*funcionario == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
}

void liberarFuncionario(FUNCIONARIO *funcionario){
    free(funcionario);
}

void alocaMatFucionario(FUNCIONARIO ***funcionario,int qtd){
    *funcionario = (FUNCIONARIO**)calloc(qtd, sizeof(FUNCIONARIO*));
    
    for(int i=0;i<qtd;i++){
        (*funcionario)[i] = (FUNCIONARIO*)calloc(1, sizeof(FUNCIONARIO));
    }
}

void realocaMatFucionario(FUNCIONARIO ***funcionario,int qtd){
    *funcionario = (FUNCIONARIO**)realloc(*funcionario,qtd * sizeof(FUNCIONARIO*));

    *funcionario[qtd-1] = (FUNCIONARIO*)realloc(*funcionario,sizeof(FUNCIONARIO));
}

void liberarFuncionarioOrg(FUNCIONARIO **funcionario,int qtd){
    for(int i=0;i<qtd;i++)
        free(funcionario[i]);
    free(funcionario);
}