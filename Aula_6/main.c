// Primeiro exercício
#include <stdio.h>
#include <stdlib.h>

// Criação da função q1 que recebe como parâmetro os seguintes valores (notas)
float q1(float nota1, float nota2, float nota3, char tipo){
    //se o tipo for igual a "a", o programa retorna a média aritmética
    if(tipo == 'a'|| 'A'){
        return(nota1 + nota2 + nota3) / 3;
        // se o tipo for igual a "p", o programa retorna a média ponderada
    }else if (tipo == 'p'|| 'P'){
        return(nota1*5, nota2*3, nota3*2);
    } else{
        return 0;
    }
}



int main()
{
    // Declaração das variáveis
    float nota1, nota2, nota3;
    char tipo;
    // O programa solicita ao usuário informar os valores desejados
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
     printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
     printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe o tipo desejado: ");
    scanf("%s", &tipo);

    // Por fim, o programa exibe na tela a média conforme os dados passados
    printf("Média de notas: %.1f", q1(nota1, nota2, nota3, tipo));
    return 0;
}
// Segundo exercício
#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // Se o número é divisível por qualquer número entre 2 e numero/2, não é primo
        }
    }

    return true; // Se nenhuma divisão foi exata, o número é primo
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número natural maior que zero: ");
    scanf("%d", &numero);

    // Verifica se o número é primo e exibe a mensagem correspondente
    if (ehPrimo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
// Terceiro exercício
#include <stdio.h>

// Função que calcula a soma dos dígitos de um número
int somaDigitos(int numero) {
    int soma = 0;

    // Enquanto o número não for 0
    while (numero > 0) {
        soma += numero % 10; // Adiciona o dígito menos significativo à soma
        numero /= 10;        // Remove o dígito menos significativo
    }

    return soma;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número natural
    printf("Digite um número natural: ");
    scanf("%d", &numero);

    // Calcula e exibe a soma dos dígitos
    int resultado = somaDigitos(numero);
    printf("A soma dos dígitos de %d é %d.\n", numero, resultado);

    return 0;
}
// Quarto exercício
#include <stdio.h>

// Função que calcula o peso ideal com base na altura e sexo
float calcularPesoIdeal(float altura, char sexo) {
    if (sexo == 'm' || sexo == 'M') {
        return 72.7 * altura - 58; // Fórmula para homens
    } else if (sexo == 'f' || sexo == 'F') {
        return 62.1 * altura - 44.7; // Fórmula para mulheres
    } else {
        printf("Sexo inválido.\n");
        return -1; // Retorna um valor inválido se o sexo não for 'm' ou 'f'
    }
}

int main() {
    float altura;
    char sexo;

    // Solicita ao usuário que insira a altura e o sexo
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (m para masculino, f para feminino): ");
    scanf(" %c", &sexo);

    // Calcula o peso ideal
    float pesoIdeal = calcularPesoIdeal(altura, sexo);

    // Verifica se o sexo é válido e exibe o peso ideal
    if (pesoIdeal != -1) {
        printf("O peso ideal para uma pessoa de sexo '%c' com altura %.2f m é %.2f kg.\n", sexo, altura, pesoIdeal);
    }

    return 0;
}
// Quinto exercício
#include <stdio.h>

// Função que verifica se X, Y, Z formam um triângulo e determina o tipo
const char* verificarTriangulo(float X, float Y, float Z) {
    // Verifica se satisfaz a condição de existência de um triângulo
    if (X < Y + Z && Y < X + Z && Z < X + Y) {
        // Identifica o tipo de triângulo
        if (X == Y && Y == Z) {
            return "Equilátero"; // Todos os lados são iguais
        } else if (X == Y || Y == Z || X == Z) {
            return "Isósceles"; // Dois lados são iguais
        } else {
            return "Escaleno"; // Todos os lados são diferentes
        }
    } else {
        return "Não é um triângulo"; // Não satisfaz a condição de existência de um triângulo
    }
}

int main() {
    float X, Y, Z;

    // Solicita ao usuário que insira os comprimentos dos lados
    printf("Digite os comprimentos dos lados do triângulo (X Y Z): ");
    scanf("%f %f %f", &X, &Y, &Z);

    // Verifica o tipo de triângulo
    const char* tipoTriangulo = verificarTriangulo(X, Y, Z);

    // Exibe o resultado
    printf("Resultado: %s\n", tipoTriangulo);

    return 0;
}
// Sexto exercício
#include <stdio.h>

// Função que calcula a quantidade de divisores de um número
int contarDivisores(int numero) {
    int contagem = 0;

    // Itera de 1 até o próprio número para encontrar divisores
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contagem++; // Incrementa a contagem se 'i' for divisor de 'numero'
        }
    }

    return contagem;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro e positivo
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero > 0) {
        // Calcula e exibe a quantidade de divisores
        int resultado = contarDivisores(numero);
        printf("O número %d tem %d divisores.\n", numero, resultado);
    } else {
        printf("Por favor, insira um número inteiro e positivo.\n");
    }

    return 0;
}
