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
    int pedidos_efetuados;
    char **item;
    float valor_pedido;
    int id_do_cliente;
    int id_da_organizacao;
    int id_funcionario; 
}PEDIDOS;

typedef struct{
    int id;
    int nF;
    int quant_funcionario ;
    FUNCIONARIO **funcionario;
    char nome[50];
    float faturamento;
    int tipo;
    int nP;
    int quant_pedidos ;
    PEDIDOS **pedidos_efetuados;
}ORGANIZACAO;

typedef struct{
    PESSOA *pessoa;
    float limite_de_credito;
    int nP;
    int quat_pedidos;
    PEDIDOS **pedidos;
}CLIENTE;
