#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m[10][10], n[10][10], s[10][10];
   int i, j;

   srand(time(NULL));
   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        n[i][j] = (rand()%50)+1;
        m[i][j] = (rand()%50)+1;
        s[i][j] = n[i][j] + m[i][j];
    }
   }
   printf("Matriz N                               Matriz M\n");
   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        printf("%3d", n[i][j]);
    }
    printf("   ");
    for(j=0; j<10; j++){
        printf("%3d", m[i][j]);
    }
    printf("\n");
   }
   printf("\nMatriz S\n");
   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        printf("%3d", s[i][j]);
    }
    printf("\n");
   }
return 0;
}
// Segundo exercício 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[12][12], somaPrincipal = 0, somaSecundaria = 0, i, j;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com a hora atual

    printf("Matriz gerada:\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            m[i][j] = rand() % 50 + 1; // Gera números aleatórios entre 1 e 50
            printf("%3d ", m[i][j]); // Imprime cada elemento da matriz
        }
        printf("\n"); // Nova linha após imprimir uma linha da matriz
    }

    // Soma da diagonal principal
    for (i = 0; i < 12; i++) {
        somaPrincipal += m[i][i]; // Soma dos elementos onde os índices da linha e coluna são iguais
    }

    // Soma da diagonal secundária
    for (i = 0; i < 12; i++) {
        somaSecundaria += m[i][12 - 1 - i]; // Soma dos elementos onde a coluna é 12 - 1 - índice da linha
    }

    printf("\nSoma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaSecundaria);

    return 0;
}

