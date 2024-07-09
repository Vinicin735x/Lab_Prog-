#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros;
    
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    
    printf("Decimetros %.2f\n", metros*10);
    printf("Centimetros %2.f\n", metros*100);
    printf("Milimetros %2.f\n", metros*1000);
    return 0;
}
// Segundo exercício abaixo:

int main()
{
    int duracao, horas, segundos, minutos;

    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    minutos = (duracao % 3600)/60;
    segundos = (duracao % 3600)%60;
    printf("%d horas %d minutos %d segundos", horas, minutos, segundos);
    return 0;

}
// Terceiro exercício abaixo:

int main()
{
    float num1, num2, num3, num4, num5, num6, med1, med2, somamed;

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%f", &num3);
    printf("Digite o valor do quarto numero: ");
    scanf("%f", &num4);
    printf("Digite o valor do quinto numero: ");
    scanf("%f", &num5);
    printf("Digite o valor do sexto numero: ");
    scanf("%f", &num6);

    med1 = (num1 + num2 + num3) / 3;
    printf("A media dos 3 primeiros é: %.1f\n", med1);
    med2 = (num4 + num5 + num6) / 3;
    printf("A media dos 3 ultimos é: %.1f\n", med2);
    somamed = (med1 + med2);
    printf("A soma das medias é: %.1f\n", somamed);
    return 0;
}
// Quarto exercício abaixo:
int main()
{
    int numero, sucessor, antecessor;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    printf("O sucessor desse numero é: %d\n", sucessor);
    antecessor = numero - 1;
    printf("O antecessor desse numero é: %d\n", antecessor);
    return 0;
}
// Quinto exercício abaixo:
int main()
{
    int horas, velocidademed, desempenho = 15, distancia, consumo;

    printf("Informe o tempo da viagem em horas: ");
    scanf("%d", &horas);
    printf("Informe a velocidade media em km/h: ");
    scanf("%d", &velocidademed);

    distancia = horas * velocidademed;
    consumo = distancia / desempenho;
    printf("O consumo dessa viagem foi de: %d", consumo);
    return 0;
}
// Sexto exercício abaixo:
int main()
{
    int qtd_lampadas;
    float tamanho_comodo;
    
    printf("Informe o tamanho do comodo em metros quadrados: ");
    scanf("%f", &tamanho_comodo);
    
    qtd_lampadas = ((tamanho_comodo * 15)/ 60);
    printf(“A quantidade de lampadas necessarias sao: %d\n”, qtdlampadas”);
    return 0;
}
// Sétimo exercício abaixo:
int main()
{
    int valor_haula, numero_aulas, salariob  ;
    float desconto, salariol;

    printf("Informe a o valor da hora/aula: ");
    scanf("%d", &valor_haula);
    printf("Informe o numero de aulas dadas: ");
    scanf("%d", &numero_aulas);
    printf("Informe o percentual de desconto: ");
    scanf("%f", &desconto);

    salariob = valor_haula * numero_aulas;
    salariol = salariob - (salariob *(desconto / 100));
    printf("O valor do salario liquido é: %.2f\n", salariol);

    return 0;
}
// Oitavo exercício abaixo:
int main()
{
int v0, angG;
float aceleracaoG = 9.81, angR, trajetoria;

printf("Informe a velocidade inicial do lançamento em m/s: ");
scanf("%d", &v0);
printf("Informe o ângulo do lançamento em graus: ");
scanf("%d", &angG); angR = (angG * 3.14) / 180;

trajetoria = ((v0 * v0) (sin(angR) * 2)) / aceleracaoG;
printf("A trajetória calculada é igual a: %2.f", trajetoria);
return 0;
}


