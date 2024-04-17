#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void listarOrganizacao(ORGANIZACAO* organizacao, int qtd){
    
    printf("Id Da Organizacao \t Nome da Organizacao\t");
    for(int i=0;i<qtd;i++){
        printf("%d \t\t %s",(organizacao+i)->id,(organizacao+i)->nome);
    }

}

void listarFuncionarios(FUNCIONARIO *funcionario,int qtd){
    printf("Id \t Nome\t Idade");
    for(int i=0;i<qtd;i++){
        printf("%d \t\t %s \t %d",(funcionario+i)->pessoa->id,(funcionario+i)->pessoa->nome,(funcionario+i)->pessoa->idade);
    }
    
}

void cadastrarOrganizacao(ORGANIZACAO *organizacao, FUNCIONARIO *funcionario,int i){
    char opc;
    int id;
    
    printf("Digite o nome da organizacao:");
    gets((organizacao+i)->nome);

    printf("Digite o id da organizacao:");
    scanf("%d",&(organizacao+i)->id);
    
    printf("Digite o faturamento da organização :");
    scanf("%f",&(organizacao+i)->faturamento);

    // pedidos efetuados pela org
    
    
    printf("Qual o tipo da sua organizacao:\n1 - Publico\n 2 - Privado");
    
    opc = getche();
    
    switch (opc){
        case '1':
            (organizacao+i)->tipo = 0;
            break;
        
        case '2':
            (organizacao+i)->tipo = 1;
        break;
        
        default:
            printf("Opcao invalida!");
        break;
        
    }

    /*
    Listar funcionarios
    */

}

void cadastrarCliente(CLIENTE *cliente,int i){
    (cliente+i)->pessoa->id = i+1;
    printf("Digite o nome do cliente:");
    gets((cliente+i)->pessoa->nome);
    
    printf("Digite a idade do cliente:");
    gets((cliente+i)->pessoa->idade);
    
    printf("Digite o limite de credito do cliente:");
    scanf("%d", &(cliente+i)->limite_de_credito);
    
    /*
    Registrar pedidos
    */
}

void cadastrarFuncionario(FUNCIONARIO *Funcionario, ORGANIZACAO *organizacao,int i){
    (Funcionario + i)->pessoa->id = i;
    printf("Digite o nome do funcionario");
    gets((Funcionario + i)->pessoa->nome);

    printf("Digite a idade do funcionario");
    gets((Funcionario + i)->pessoa->idade);

    printf("Digite o seu salario: ");
    scanf("%d",&(Funcionario + i)->salario);

    printf("Digite o tipo de funcionario");
    scanf("%d",&(Funcionario +i)->tipo);// incrementar o if do tipo

    // listar organizações 
    printf("Digite o id da organização");
    scanf(("%d",&(Funcionario + i)->id_organizacao));
    
}

void menu(){ 
    int qtdC = 10, qtdF = 10;
    int op;

    FUNCIONARIO* funcionario;
    ORGANIZACAO* organizacao;
    CLIENTE* cliente;
    

    printf("BEM VINDO AO SISTEMA!!\n");
    printf(" Digite 1 para fazer seu cadastro\n Digite 2 para entrar no sistema geral \n Digite 3 para sair do programa:");
    scanf("%d",&op);
    
    switch (op){
        case 1 :
            //cadastrarFuncionario();
            //cadastrarCliente();
            break;
        case 2 :
            // incrementar função do sistema privado( dicionar senha)
        default:
            break;
    }   
    
}