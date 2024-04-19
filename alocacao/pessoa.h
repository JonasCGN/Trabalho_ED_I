void alocaPessoa(PESSOA **pessoa){
    *pessoa = calloc(1,sizeof(PESSOA));
    if (*pessoa == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
    
}

void liberaPessoa(PESSOA *pessoa){
    free(pessoa);
}