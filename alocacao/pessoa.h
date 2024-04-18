void alocaPessoa(PESSOA **pessoa){
    *pessoa = calloc(1,sizeof(PESSOA));
    if (pessoa == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
    
}