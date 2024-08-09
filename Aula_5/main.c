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
// Terceiro exercício
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[8][5], menorValor = 15, pMenorValor[8 * 5][2];
    int k = 0; // Contador para a posição no vetor pMenorValor

    srand(time(NULL));
    
    // Inicializar pMenorValor com -1
    for (int i = 0; i < 8 * 5; i++) {
        pMenorValor[i][0] = -1;
        pMenorValor[i][1] = -1;
    }

    // Preencher a matriz e encontrar o menor valor
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            m[i][j] = rand() % 15 + 1;
            if (m[i][j] < menorValor) {
                menorValor = m[i][j];
                k = 0; // Reiniciar o contador
                pMenorValor[k][0] = i;
                pMenorValor[k][1] = j;
                k++;
            } else if (m[i][j] == menorValor) {
                pMenorValor[k][0] = i;
                pMenorValor[k][1] = j;
                k++;
            }
        }
    }

    // Imprimir a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    // Imprimir o menor valor e suas posições
    printf("\nMenor valor: %d\n", menorValor);
    printf("Posições: ");
    for (int i = 0; i < k; i++) {
        if (pMenorValor[i][0] != -1) {
            printf("(%d, %d) ", pMenorValor[i][0], pMenorValor[i][1]);
        }
    }
    printf("\n");

    return 0;
}
// Quarto exercício
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[9][8],i, j, somaI=0, numI=0;
    srand(time(NULL));
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            m[i][j] = rand() % 30 + 1;
        }
    }
    
    printf("Matriz gerada:\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            if (m[i][j] % 2 != 0) {
                somaI += m[i][j];
                numI++;
            }
        }
    }
    float media = (float)somaI/ numI;
    printf("\nMédia dos valores ímpares: %.2f\n", media);
return 0;
 }

// Quinto exercício
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[6][8], B[8][7], C[6][7], i, j, k;
    
    srand(time(NULL));
    
    // Preenchendo a matriz A
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 8; j++) {
            A[i][j] = rand() % 10 + 1;
        }
    }
    
    // Preenchendo a matriz B
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 7; j++) {
            B[i][j] = rand() % 10 + 1;
        }
    }
    
    // Calculando a matriz C como o produto de A e B
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            C[i][j] = 0;
            for (k = 0; k < 8; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Imprimindo a matriz A
    printf("Matriz A:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 8; j++) {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }
    
    // Imprimindo a matriz B
    printf("\nMatriz B:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 7; j++) {
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }
    
    // Imprimindo a matriz C
    printf("\nMatriz C:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
// Sexto exercício
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[10][15], i, j, S[10][15], menor;
    
    srand(time(NULL));
    
    // Preenchendo a matriz M com valores aleatórios
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            M[i][j] = rand() % 10 + 1;
        }
    }
    
    // Imprimindo a matriz M
    printf("Matriz M:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("%2d ", M[i][j]);
        }
        printf("\n");
    }
    
    // Calculando a matriz S
    for (i = 0; i < 10; i++) {
        menor = M[i][0];  // Inicializa o menor valor como o primeiro elemento da linha
        for (j = 1; j < 15; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
            }
        }
        for (j = 0; j < 15; j++) {
            S[i][j] = M[i][j] * menor;
        }
    }
    
    // Imprimindo a matriz S
    printf("\nMatriz S:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("%2d ", S[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

