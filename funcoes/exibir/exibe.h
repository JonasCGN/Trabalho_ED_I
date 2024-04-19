void listarOrganizacao(ORGANIZACAO* organizacao, int qtdo,int opc){
    
    if(opc == 1){
        printf("----------------------------------------------\n");
        printf("Lista de organizacoes: \n");
        printf("----------------------------------------------\n");
        for(int i=0;i < qtdo ;i++){
        
            printf("Organizacao %d: \n",i + 1);
            printf("\n");
            printf("ID da organizacao: %d\n",organizacao[i].id);
            printf("Nome: %s\n",organizacao[i].nome);
            printf("Faturamento da organizacao: %.2f\n",organizacao[i].faturamento);
            printf("Quantidade de Funcionario: %d\n",organizacao[i].quant_funcionario);
            //faturamento
            if(organizacao[i].tipo == 0){
                printf("Tipo da organizacao: Publica\n");
            }else{
                printf("Tipo da organizacao: Privada\n");
            }

            printf("----------------------------------------------\n");
            printf("\n");
        }
    }else{
        printf("Organizacao %d: \n",qtdo + 1);
        printf("\n");
        printf("ID da organizacao: %d\n",organizacao[qtdo].id);
        printf("Nome: %s\n",organizacao[qtdo].nome);
        printf("Faturamento da organizacao: %.2f\n",organizacao[qtdo].faturamento);
        printf("Quantidade de Funcionario: %d\n",organizacao[qtdo].quant_funcionario);
        //faturamento
        if(organizacao[qtdo].tipo == 0){
            printf("Tipo da organizacao: Publica\n");
        }else{
            printf("Tipo da organizacao: Privada\n");
        }

        printf("----------------------------------------------\n");
    }
    

}

void mostrarclientes(int qtdc, CLIENTE * cliente,int opc){
    if(opc == 1){
        printf("----------------------------------------------\n");
        printf("Lista de Clientes  \n");
        printf("----------------------------------------------\n");
        for(int i = 0; i < qtdc; i++){

            printf("Cliente %d: \n",i + 1);
            printf("\n");
            printf("ID: %d\n",cliente[i].pessoa->id);
            printf("Nome: %s\n",cliente[i].pessoa->nome);
            printf("Idade: %d\n",cliente[i].pessoa->idade);
            printf("Limite de credito: %.2f\n",cliente[i].limite_de_credito);
            printf("----------------------------------------------\n");
            printf("\n");
        }
    }else{
        printf("Cliente %d: \n",qtdc + 1);
        printf("ID: %d\n",cliente[qtdc].pessoa->id);
        printf("Nome: %s\n",cliente[qtdc].pessoa->nome);
        printf("Idade: %d\n",cliente[qtdc].pessoa->idade);
        printf("Limite de credito: %.2f\n",cliente[qtdc].limite_de_credito);
        printf("----------------------------------------------\n");
        printf("\n");
    }
    

}

void listarFuncionariosOrganizacao(ORGANIZACAO* organizacao, int qtdo){
    
    printf("----------------------------------------------\n");
    for(int i=0;i < qtdo ;i++){
        printf("Funcionarios da organizacao: %d\n",i+1);
        printf("\n");
        for(int j=0;j<(organizacao+i)->nF;j++){

            printf("Funcionario %d\n", j+1);
            printf("\n");
            printf("Nome: %s\n", (organizacao+i)->funcionario[j]->pessoa->nome);
            printf("Idade: %d\n", (organizacao+i)->funcionario[j]->pessoa->idade);
            printf("Id: %d\n", (organizacao+i)->funcionario[j]->pessoa->id);
            if((organizacao+i)->funcionario[j]->tipo == 0)
                printf("Funcao: Gerente\n");
            else if((organizacao+i)->funcionario[j]->tipo == 1)
                printf("Funcao: Supervisor\n");
            else if((organizacao+i)->funcionario[j]->tipo == 2)
                printf("Funcao: Vendedor\n");
                
        }
        printf("----------------------------------------------\n");
    }
}

void listapedidos(PEDIDOS *pedido,int qtd){

    printf("----------------------------------------------\n");
    printf("Lista de pedidos efetuados: \n");
    printf("----------------------------------------------\n");
    for(int i = 0; i < qtd; i++){
        printf("ID do pedido: %d\n",(pedido+i)->id_pedidos);

        for(int j = 0;j < (pedido+i)->pedidos_efetuados;j++)
            printf("Item %d: %s\n",j+1,(pedido+i)->item[j]);

        printf("valor do pedido: %.2f\n",(pedido+i)->valor_pedido);
        printf("ID do cliente: %d\n",(pedido+i)->id_do_cliente);
        printf("ID do funcionario: %d\n",(pedido+i)->id_funcionario);
        printf("ID da organizacao %d\n", (pedido+i)->id_da_organizacao);
        printf("----------------------------------------------\n");
        printf("\n");
    }
}

void listarpedidosorg(ORGANIZACAO *organizacao, int idorg){      
    printf("----------------------------------------------\n");
    for(int i=0;i<(organizacao+idorg)->nP;i++){
        printf("Informacao dos pedidos vinculados a essa organizacao:\n");
        printf("----------------------------------------------\n");
        
        printf("Id do pedido: %d\n",(organizacao+idorg)->pedidos_efetuados[i]->id_pedidos);
        
        for(int j=0;j < ((organizacao+idorg)->pedidos_efetuados[i]->pedidos_efetuados); j++){
            printf("Item: %s",(organizacao+idorg)->pedidos_efetuados[i]->item[j]);
        }

        printf("Valor do pedido: %.2f\n",(organizacao+idorg)->pedidos_efetuados[i]->valor_pedido);

        printf("Id do cliente: %d\n",(organizacao+idorg)->pedidos_efetuados[i]->id_do_cliente);
        
        printf("Id da organizacao: %d\n",(organizacao+idorg)->pedidos_efetuados[i]->id_da_organizacao);
        
        printf("Id do funcionario: %d\n",(organizacao+(idorg))->pedidos_efetuados[i]->id_funcionario);
        printf("----------------------------------------------\n");

    }
}

void listarPedidosCliente(CLIENTE *cliente, int idcliente){        

    for(int i=0;i < (cliente+idcliente)->nP;i++){
        printf("----------------------------------------------\n");
        printf("Informacao do pedido:\n");
         printf("----------------------------------------------\n");
        printf("Id do pedido: %d\n",(cliente+idcliente)->pedidos[i]->id_pedidos);
        
        for(int j=0;j < ((cliente+idcliente)->pedidos[i]->pedidos_efetuados); j++){
            printf("Item comprado: %s\n",(cliente+idcliente)->pedidos[i]->item[j]);
        }

        printf("Valor do pedido: %.2f\n",(cliente+idcliente)->pedidos[i]->valor_pedido);
        printf("Id do cliente: %d\n",(cliente+idcliente)->pedidos[i]->id_do_cliente);
        printf("Id da organizacao: %d\n",(cliente+idcliente)->pedidos[i]->id_da_organizacao);    
        printf("Id do funcionario: %d\n",(cliente+idcliente)->pedidos[i]->id_funcionario);
         printf("----------------------------------------------\n");
    }

}
