#include "./cliente.h"
#include "./funcionario.h"
#include "./organizacao.h"
#include "./pedido.h"
#include "./pessoa.h"

void alocacaoCliente(CLIENTE **cliente,int i);
void alocarfuncionario(FUNCIONARIO **funcionario,int i);
void realocafuncionario(FUNCIONARIO **funcionario,int i);
void realocaOrganizacao(ORGANIZACAO **organizacao, int qtdO);
void alocacaoPedido(PEDIDOS **pedido);
void alocaPessoa(PESSOA **pessoa);