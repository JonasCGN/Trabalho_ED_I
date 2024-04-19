void menuCliente(CLIENTE *cliente,int *i,int qtdC){
    int opc;

    do{
        printf("---------------------------\n");
        printf("|0 - Voltar menu principal|\n|1 - Cadastrar Cliente    |\n|2 - Mostrar Clientes     |\n---------------------------\n");
        scanf("%d", &opc);
        fflush(stdin);
        
        system("cls||clear");
        
        switch (opc){
            case 1:
                cadastrarCliente(cliente,i);
<<<<<<< HEAD
                qtdC += 1;
                realocaCliente(&(cliente),qtdC);
=======
                
>>>>>>> 7d8affa913abcc7e2305d6ae9852daec4f841609
            break;

            case 2:
                mostrarclientes(qtdC,cliente);
            break;
            
            default:
                
                printf("Opcao invalida!");
               
            break;
        }
    }while(opc > 0);

}