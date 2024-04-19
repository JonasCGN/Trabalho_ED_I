void realocaOrganizacao(ORGANIZACAO **organizacao, int qtdO){
    *organizacao = (ORGANIZACAO*)realloc(*organizacao,qtdO * sizeof(ORGANIZACAO));
    
    if ((*organizacao) == NULL){
        printf("Erro ao alocar!!");
        exit(1);
    }
}

void liberarOrganizacao(ORGANIZACAO *organizacao){
    free(organizacao);
}