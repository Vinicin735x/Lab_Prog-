//Primeiero exercicio
#include <stdio.h>
#include <stdlib.h>
// Criação da struct Conta Bancaria
struct ContaBancaria{
    int unsigned numero;
    char nome[30];
    int unsigned tipo;
    float saldo;
};


int main()
{
    struct ContaBancaria contas[50]; // Declaração do vetor Contas do tipo da estrutura definida acima, de tamanho 50
    int qtdcontas = 0, opcao, numero, conta, flag, i;
    float saldo, valor;

    do{ //criação do menu principal, onde será exibido ao usuário as opções disponíveis
        system("cls");
        printf("MENU CONTA BANCARIA - BANCO X\n");
        printf("==== ===== ======== = ===== = \n\n");
        printf("Opção 1 - Criar uma nova conta\n");
        printf("Opção 2 - Fazer um depósito\n");
        printf("Opção 3 - Fazer um saque\n");
        printf("Opção 4 - Saldo de um cliente\n");
        printf("Opção 5 - Montante Montante total de R$ do banco\n");
        printf("Opção 7 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            system("cls");
            printf("CRIAÇÃO DA CONTA\n\n");
            printf("Numero da conta: %d\n", qtdcontas + 1);
            contas[qtdcontas].numero = qtdcontas + 1; //acesso ao campo numero da conta específica no índice do qtd contas do array contas
            printf("Nome do cliente: ");
            scanf("%s", &contas[qtdcontas].nome); //Aqui, estamos passando o endereço do campo nome da estrutura ContaBancaria para armazenar o nome do cliente lido pelo scanf.
            printf("Informe o tipo da conta (1 - Conta corrente e 2 - Conta poupança): ");
            scanf("%d", &contas[qtdcontas].tipo);
            contas[qtdcontas].saldo = 0;
            qtdcontas++;
            break;
        case 2:
            system("cls");
            flag = 0; // verifica a existencia da conta
            printf("FAZER UM DEPÓSITO\n");
            printf("Informe a conta a depositar: ");
            scanf("%d", &conta);
            for(i = 0; i < qtdcontas; i++){ //loop que percorre todas as contas, então, quando a conta for igual a conta a qual se deseja fazer o deposito flag da sinal de positivo
                if(conta == contas[i].numero){
                    flag = 1;
                    printf("Cliente %s\n", contas[i].nome);
                    printf("Valor do depósito: ");
                    scanf("%f", &valor);
                    contas[i].saldo += valor;
                    printf("Depósito realizado com sucesso!!");
                }
            }
            if(flag == 0){
                printf("Conta bancária não encontrada!");
            }
            break;
        case 3:
            system("cls");
             flag = 0; // verifica a existencia da conta
            printf("FAZER UM SAQUE\n");
            printf("Informe a conta a sacar: ");
            scanf("%d", &conta);
            for(i = 0; i < qtdcontas; i++){
                if(conta == contas[i].numero){
                    flag = 1;
                    printf("Cliente %s\n", contas[i].nome);
                    printf("Valor do saque: ");
                    scanf("%f", &valor);
                    if (contas[i].saldo - valor < 0){
                        printf("Saldo insuficiente\n");
                    } else {
                        contas[i].saldo -= valor;
                        printf("Saque realizado com sucesso!!\n\n");
                    }
                }
            }
            if(flag == 0){
                printf("Conta bancária não encontrada!");
            }
            break;

        }

    } while (opcao != 7);

    return 0;
}

