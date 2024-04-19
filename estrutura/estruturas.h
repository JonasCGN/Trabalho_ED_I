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
    int id_pedidos;
    char item[50];
    float valor_pedido;
    int pedidos_efetuados;
    int id_do_cliente;
    int id_da_organizacao;
    int id_funcionario; 
}PEDIDOS;

typedef struct{
    int id;
    int quant_funcionario ;
    FUNCIONARIO *funcionario;
    char nome[50];
    float faturamento;
    int tipo;
    PEDIDOS *pedidos_efetuados;
}ORGANIZACAO;

typedef struct{
    PESSOA *pessoa;
    float limite_de_credito;
    PEDIDOS *pedidos;
}CLIENTE;
