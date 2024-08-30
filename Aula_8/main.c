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
// Segundo exercício
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livros{
    int codigo;
    char titulo[30];
    char autor[30];
    char estilo[30];
    float preco;
};


int main()
{
    struct livros livro[50];
    int opcao, qtd= 0, i, flag;
    char resultado[30];
    do{
         system("cls");
        printf("+-------------------------------------------+\n");
        printf("|            SISTEMA BIBLIOTECARIO          |\n");
        printf("+-------------------------------------------+\n\n\n");
        printf("+-----------------MENU DE OPÇÕES------------+\n");
        printf("|                                           |\n");
        printf("| 1 - Cadastrar livro                       |\n");
        printf("| 2 - Exibir todos os livros                |\n");
        printf("| 3 - Listar livros do autor                |\n");
        printf("| 4 - Informar título                       |\n");
        printf("| 5 - Informar estilo                       |\n");
        printf("| 6 - Exibir preço médio                    |\n");
        printf("| 9 - Sair                                  |\n");
        printf("|                                           |\n");
        printf("+-------------------------------------------+\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|            CADASTRAR LIVRO                |\n");
                printf("+-------------------------------------------+\n\n\n");
                printf("codigo: %d\n", qtd+1 );
                livro[qtd].codigo = qtd+1;
                printf("Titulo do livro: ");
                scanf(" %s[^\n]s", &livro[qtd].titulo);
                printf("Nome do autor: ");
                scanf(" %s[^\n]s", &livro[qtd].autor);
                printf("Estilo do livro: ");
                scanf(" %s[^\n]s", &livro[qtd].estilo);
                printf("Preço do livro: ");
                scanf("%f", &livro[qtd].preco);
                qtd++;
                break;
            case 2:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|            EXIBIR TODOS OS LIVROS         |\n");
                printf("+-------------------------------------------+\n\n");
                printf("+------+------------------------------+\n");
                printf("|           NOME DO LIVRO             |\n");
                printf("+------+------------------------------+\n");
                for(i=0; i<qtd; i++){
                    printf("%s\n", livro[i].titulo);
                }
                printf("+------+------------------------------+\n");
                scanf("%d", &flag);
                break;
             case 3:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|            LIVROS DO AUTOR                |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe o nome do autor: ");
                scanf(" %s[^\n]", resultado);

                int found = 0;
                for (i = 0; i < qtd; i++) {
                    if (strcmp(resultado, livro[i].autor) == 0) {
                        if (!found) {
                            printf("+--------+------------------------------+------------------------------+------------------------------+--------+\n");
                            printf("| CÓDIGO |            TÍTULO             |            ESTILO             |            PREÇO                    |\n");
                            printf("+--------+------------------------------+------------------------------+------------------------------+--------+\n");
                            found = 1;
                        }
                        printf("| %6d | %-28s | %-28s | %8.2f |\n", livro[i].codigo, livro[i].titulo, livro[i].estilo, livro[i].preco);
                    }
                }
                if (!found) {
                    printf("Nenhum livro encontrado para o autor \"%s\".\n", resultado);
                } else {
                    printf("+--------+------------------------------+------------------------------+------------------------------+--------+\n");
                }

                getchar();
                getchar();
                break;
            case 4:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|           CONSULTAR TÍTULO                |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe o título do livro: ");
                scanf(" %s[^\n]", resultado);

                found = 0;
                for (i = 0; i < qtd; i++) {
                    if (strcmp(resultado, livro[i].titulo) == 0) {
                        printf("\nLivro encontrado:\n");
                        printf("Autor: %s\n", livro[i].autor);
                        printf("Estilo: %s\n", livro[i].estilo);
                        printf("Preço: %.2f\n", livro[i].preco);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nNenhum livro encontrado com o título \"%s\".\n", resultado);
                }

                getchar();
                getchar();
                break;

             case 5:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|          CONSULTAR ESTILO                 |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe o estilo do livro: ");
                scanf(" %s[^\n]", resultado);

                found = 0;
                for (i = 0; i < qtd; i++) {
                    if (strcmp(resultado, livro[i].estilo) == 0) {
                        if (!found) {
                            printf("+------------------------------+------------------------------+------------------------------+\n");
                            printf("|            AUTOR             |            TÍTULO            |            PREÇO             |\n");
                            printf("+------------------------------+------------------------------+------------------------------+\n");
                            found = 1;
                        }
                        printf("| %-28s | %-28s | %8.2f |\n", livro[i].autor, livro[i].titulo, livro[i].preco);
                    }
                }
                if (!found) {
                    printf("\nNenhum livro encontrado com o estilo \"%s\".\n", resultado);
                } else {
                    printf("+------------------------------+------------------------------+------------------------------+\n");
                }

                getchar();
                getchar();
                break;

             case 6:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|          EXIBIR PREÇO MÉDIO               |\n");
                printf("+-------------------------------------------+\n\n");

                float soma = 0;
                for (i = 0; i < qtd; i++) {
                    soma += livro[i].preco;
                }

                if (qtd > 0) {
                    printf("Preço médio dos livros cadastrados: %.2f\n", soma / qtd);
                } else {
                    printf("Nenhum livro cadastrado.\n");
                }

                getchar();
                getchar();
                break;
        }
    } while(opcao != 9);
}
// Terceiro exercicio
#include <stdio.h>
#include <string.h>

struct carro {
    char marca[30];
    int ano;
    char cor[30];
    float preco;
};

int main() {
    struct carro vetcarros[20];
    int qtd = 0, opcao, i;
    float preco_informado;
    char marca_informada[30], cor_informada[30];
    int ano_informado;
    int found;

    do {
        system("cls");
        printf("+-------------------------------------------+\n");
        printf("|              REVENDEDORA DE CARROS        |\n");
        printf("+-------------------------------------------+\n\n");
        printf("+-------------------MENU--------------------+\n");
        printf("| 1 - Inserir veículo                       |\n");
        printf("| 2 - Listar carros por preço               |\n");
        printf("| 3 - Listar carros por marca               |\n");
        printf("| 4 - Verificar existência de carro         |\n");
        printf("| 9 - Sair                                  |\n");
        printf("+-------------------------------------------+\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtd < 20) {
                    system("cls");
                    printf("+-------------------------------------------+\n");
                    printf("|            INSERIR VEÍCULO                |\n");
                    printf("+-------------------------------------------+\n\n");
                    printf("Marca: ");
                    scanf(" %s[^\n]s", vetcarros[qtd].marca);
                    printf("Ano: ");
                    scanf("%d", &vetcarros[qtd].ano);
                    printf("Cor: ");
                    scanf(" %s[^\n]s", vetcarros[qtd].cor);
                    printf("Preço: ");
                    scanf("%f", &vetcarros[qtd].preco);
                    qtd++;
                } else {
                    printf("O vetor de carros está cheio.\n");
                }
                getchar();
                getchar();
                break;

            case 2:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|            LISTAR POR PREÇO               |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe o preço máximo: ");
                scanf("%f", &preco_informado);

                found = 0;
                for (i = 0; i < qtd; i++) {
                    if (vetcarros[i].preco <= preco_informado) {
                        if (!found) {
                            printf("+------------------------------+------------------------------+------+\n");
                            printf("|           MARCA              |             COR              |  ANO |\n");
                            printf("+------------------------------+------------------------------+------+\n");
                            found = 1;
                        }
                        printf("| %-28s | %-28s | %4d |\n", vetcarros[i].marca, vetcarros[i].cor, vetcarros[i].ano);
                    }
                }
                if (!found) {
                    printf("\nNenhum carro encontrado com preço igual ou menor que %.2f.\n", preco_informado);
                } else {
                    printf("+------------------------------+------------------------------+------+\n");
                }

                getchar();
                getchar();
                break;

            case 3:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|            LISTAR POR MARCA               |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe a marca: ");
                scanf(" %s[^\n]s", marca_informada);

                found = 0;
                for (i = 0; i < qtd; i++) {
                    if (strcmp(marca_informada, vetcarros[i].marca) == 0) {
                        if (!found) {
                            printf("+------+------------------------------+------------------------------+--------+\n");
                            printf("|  ANO |             COR               |            PREÇO             |\n");
                            printf("+------+------------------------------+------------------------------+--------+\n");
                            found = 1;
                        }
                        printf("| %4d | %-28s | %8.2f |\n", vetcarros[i].ano, vetcarros[i].cor, vetcarros[i].preco);
                    }
                }
                if (!found) {
                    printf("\nNenhum carro encontrado da marca \"%s\".\n", marca_informada);
                } else {
                    printf("+------+------------------------------+------------------------------+--------+\n");
                }

                getchar();
                getchar();
                break;

            case 4:
                system("cls");
                printf("+-------------------------------------------+\n");
                printf("|          VERIFICAR EXISTÊNCIA             |\n");
                printf("+-------------------------------------------+\n\n");
                printf("Informe a marca: ");
                scanf(" %s[^\n]s", marca_informada);
                printf("Informe o ano: ");
                scanf("%d", &ano_informado);
                printf("Informe a cor: ");
                scanf(" %s[^\n]s", cor_informada);

                found = 0;
                for (i = 0; i < qtd; i++) {
                    if (strcmp(marca_informada, vetcarros[i].marca) == 0 &&
                        vetcarros[i].ano == ano_informado &&
                        strcmp(cor_informada, vetcarros[i].cor) == 0) {
                        printf("\nCarro encontrado:\n");
                        printf("Preço: %.2f\n", vetcarros[i].preco);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nNenhum carro encontrado com as características informadas.\n");
                }

                getchar();
                getchar();
                break;
        }
    } while(opcao != 9);

    return 0;
}
// Quarto exercicio
#include <stdio.h>

struct gado {
    int codigo;
    float quantidadeLeite;
    float quantidadeAlimento;
    int mesNascimento;
    int anoNascimento;
    char abate; // 'S' para sim, 'N' para não
};

int main() {
    struct gado mimosas[2000];
    int qtd = 0, opcao, i;
    int anoAtual = 2024;  // Supondo que o ano atual seja 2024
    float totalLeite = 0, totalAlimento = 0;
    float totalLeiteAposAbate = 0, totalAlimentoAposAbate = 0;
    int totalAbate = 0;

    do {
        system("cls");
        printf("+-------------------------------------------+\n");
        printf("|            CONTROLE DA FAZENDA            |\n");
        printf("+-------------------------------------------+\n\n");
        printf("+-------------------MENU--------------------+\n");
        printf("| 1 - Incluir dados                         |\n");
        printf("| 2 - Quantidade total de leite             |\n");
        printf("| 3 - Quantidade total de alimento          |\n");
        printf("| 4 - Leite produzido após abate            |\n");
        printf("| 5 - Alimento consumido após abate         |\n");
        printf("| 6 - Número de cabeças para abate          |\n");
        printf("| 9 - Sair                                  |\n");
        printf("+-------------------------------------------+\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtd < 2000) {
                    system("cls");
                    printf("+-------------------------------------------+\n");
                    printf("|              INCLUIR DADOS                |\n");
                    printf("+-------------------------------------------+\n\n");
                    printf("Código: ");
                    scanf("%d", &mimosas[qtd].codigo);
                    printf("Quantidade de leite (litros/semana): ");
                    scanf("%f", &mimosas[qtd].quantidadeLeite);
                    printf("Quantidade de alimento (kg/semana): ");
                    scanf("%f", &mimosas[qtd].quantidadeAlimento);
                    printf("Data de nascimento (mes e ano): ");
                    scanf("%d %d", &mimosas[qtd].mesNascimento, &mimosas[qtd].anoNascimento);

                    int idade = anoAtual - mimosas[qtd].anoNascimento;

                    // Verifica se vai para o abate
                    if (idade > 5 || 
                        mimosas[qtd].quantidadeLeite < 40 ||
                        (mimosas[qtd].quantidadeLeite >= 50 && mimosas[qtd].quantidadeLeite <= 70 && mimosas[qtd].quantidadeAlimento > 80)) {
                        mimosas[qtd].abate = 'S';
                    } else {
                        mimosas[qtd].abate = 'N';
                    }

                    qtd++;
                } else {
                    printf("O vetor de mimosas está cheio.\n");
                }
                getchar();
                getchar();
                break;

            case 2:
                totalLeite = 0;
                for (i = 0; i < qtd; i++) {
                    totalLeite += mimosas[i].quantidadeLeite;
                }
                printf("\nQuantidade total de leite produzida por semana: %.2f litros\n", totalLeite);
                getchar();
                getchar();
                break;

            case 3:
                totalAlimento = 0;
                for (i = 0; i < qtd; i++) {
                    totalAlimento += mimosas[i].quantidadeAlimento;
                }
                printf("\nQuantidade total de alimento consumido por semana: %.2f kg\n", totalAlimento);
                getchar();
                getchar();
                break;

            case 4:
                totalLeiteAposAbate = 0;
                for (i = 0; i < qtd; i++) {
                    if (mimosas[i].abate == 'N') {
                        totalLeiteAposAbate += mimosas[i].quantidadeLeite;
                    }
                }
                printf("\nQuantidade de leite que vai ser produzido por semana após o abate: %.2f litros\n", totalLeiteAposAbate);
                getchar();
                getchar();
                break;

            case 5:
                totalAlimentoAposAbate = 0;
                for (i = 0; i < qtd; i++) {
                    if (mimosas[i].abate == 'N') {
                        totalAlimentoAposAbate += mimosas[i].quantidadeAlimento;
                    }
                }
                printf("\nQuantidade de alimento que vai ser consumido por semana após o abate: %.2f kg\n", totalAlimentoAposAbate);
                getchar();
                getchar();
                break;

            case 6:
                totalAbate = 0;
                for (i = 0; i < qtd; i++) {
                    if (mimosas[i].abate == 'S') {
                        totalAbate++;
                    }
                }
                printf("\nNúmero de cabeças de gado que irão para o abate: %d\n", totalAbate);
                getchar();
                getchar();
                break;
        }
    } while(opcao != 9);

    return 0;
}

