#include <stdio.h>
#include <stdlib.h>

// Função que converte o tempo em segundos para horas, minutos e segundos
void tempo( int segundos, int *hora, int *minutos, int *segrestantes){
*hora = segundos / 3600; // Calcula as horas
segundos %= 3600; // Atualiza segundos com o restante
*minutos = segundos / 60; // Calcula os minutos
*segrestantes = segundos % 60; // Calcula os segundos restantes
}




int main()
{
    int temposeg, hora, minutos, segundos;
    printf("Informe um tempo em segundos: ");
    scanf("%d", &temposeg);
    tempo(temposeg, &hora, &minutos, &segundos);
    printf("O tempo calculado é de: %d horas, %d muinutos, %d segundos\n ", hora, minutos, segundos);

    return 0;
}
// Segundo exercício
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}


int main()
{
    int a, b;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    troca(&a, &b); // é aqui que a troca é realizada
    printf("Depois da troca a = %d, b = %d\n", a , b);
return 0;
}
// Terceiro exercício
#include <stdio.h>
#include <stdlib.h>
void Raizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrtf(delta)) / (2 * a);
        float x2 = (-b - sqrtf(delta)) / (2 * a);
        printf("Raízes distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Uma única raiz: x = %.2f\n", x);
    } else {
        printf("Esta equação não possui raízes reais.\n");
    }
}

int main() {
    float a, b, c;
    printf("Digite os coeficientes (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    Raizes(a, b, c);

    return 0;
}
// Quarto exercício
#include <stdio.h>
#include <stdlib.h>
void Duracao(int horaInicio, int minutoInicio, int horaFim, int minutoFim) {
    int minutosInicio = horaInicio * 60 + minutoInicio;
    int minutosFim = horaFim * 60 + minutoFim;

    int diferencaMinutos = (minutosFim - minutosInicio + 24 * 60) % (24 * 60);
    int duracaoHoras = diferencaMinutos / 60;
    int duracaoMinutos = diferencaMinutos % 60;

    printf("Duração do jogo: %dh %dm\n", duracaoHoras, duracaoMinutos);
}

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;

    printf("Digite a hora de início (horas minutos): ");
    scanf("%d %d", &horaInicio, &minutoInicio);

    printf("Digite a hora de término (horas minutos): ");
    scanf("%d %d", &horaFim, &minutoFim);

     Duracao(horaInicio, minutoInicio, horaFim, minutoFim);

    return 0;
}
