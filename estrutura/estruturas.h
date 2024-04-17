typedef struct{

}PEDIDOS;

typedef struct{

}PEDIDOS_EFETUADOS;

typedef struct{
    int id;
    char nome[50];
    int idade;
}PESSOA;

typedef struct{
    PESSOA *pessoa;
    int tipo;
    float salario;
    int id_organizacao;
}FUNCIONARIO;

typedef struct{
    PESSOA *pessoa;
    float limite_de_credito;
    PEDIDOS *pedidos;
}CLIENTE;

typedef struct{
    int id;
    FUNCIONARIO *funcionario;
    char nome[50];
    float faturamento;
    PEDIDOS_EFETUADOS *pedidos_efetuados;
    int tipo;
}ORGANIZACAO;