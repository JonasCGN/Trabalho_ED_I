void alocarfuncionario(FUNCIONARIO **funcionario,int i){
    *funcionario = (FUNCIONARIO*)calloc(i, sizeof(FUNCIONARIO));
    if(funcionario == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
}

void realocafuncionario(FUNCIONARIO **funcionario,int i){
    *funcionario = (FUNCIONARIO*)realloc(*funcionario, i * sizeof(FUNCIONARIO));
    if(funcionario == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
}

