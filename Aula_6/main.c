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
