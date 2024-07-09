// Primeiro exercício:
int main()
{
    int v;

    for ( v = 12; v <=450; v++){
        if (v%3 == 0){
            printf("%d ", v);
        }
    }
    return 0;
}
// Segundo exercício:
int main() {
    int i, num, max, min, sum = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for(i = 0; i < 10; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &num);

        if(i == 0) {
            max = num;
            min = num;
        }

        if(num > max) {
            max = num;
        }

        if(num < min) {
            min = num;
        }

        sum += num;
    }

    media = sum / 10.0;

    printf("O maior número é: %d\n", max);
    printf("O menor número é: %d\n", min);
    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
// Terceiro exercício:
int main() {
    int num, i, m = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i) {
        if(num%i == 0) {
            m = 1;
        }
    }

    if (num == 1) {
        printf("1 não é primo.");
    }
    else {
        if (m == 0)
            printf("%d é um número primo.", num);
        else
            printf("%d não é um número primo.", num);
    }

    return 0;
}
// Quarto exercício:
int main() {
    int i, j, d;
    for(i = 10; i < 600; i++){
        d = 0;
    for(j = 10; j < i; j++){
        if(i % j ==0){
            d = 1;
        }
    }
    if( d == 0){
        printf("%d ", i);
    }
    }

    return 0;
}
// Quinto exercício:
int main (){

   int a, b, z, x, y;

     printf("Informe os valor de A:");
      scanf(" %d", &a);
     printf("Informe o valor de B:");
      scanf(" %d",&b);

      while (b<=a){
      printf("O valor de B deve ser maior que o A, informe novamente B:");
        scanf("%d", &b);
      }

      printf("Informe o valor de Z:");
        scanf("%d", &z);

      while (z <= b){
      printf("O valor de Z deve ser maior que o de B, informe novamente Z:");
       scanf("%d",&z);
      }

   
        for (x = a; x <= b; x++) {
        for (y = a; y <= b; y++) {
            if (x + y == z) {
      printf("Dois números inteiros que somados resultam em %d são: %d e %d\n", z, x, y);
                return 0;

        }
      }
    }

    printf("Não foi possível encontrar dois números inteiros no intervalo [%d-%d] que somados resultem em %d.\n", a, b, z);

    return 0;
}
// Sexto exercício:
int mdc(int a, int b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main() {
    int num1, num2;

    do {
        printf("Digite dois números (0 e 0 para sair): ");
        scanf("%d %d", &num1, &num2);

        if(num1 != 0 && num2 != 0) {
            printf("O MDC de %d e %d é %d\n", num1, num2, mdc(num1, num2));
        }
    } while(num1 != 0 && num2 != 0);

    return 0;
}
// Sétimo exercício:
void fatPrimos(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2)
        printf ("%d ", n);
}

int main() {
    int num;

    do {
        printf("Digite um número maior que 50 e menor que 1000: ");
        scanf("%d", &num);

        if(num > 50 && num < 1000) {
            printf("Os fatores primos de %d são: ", num);
            fatPrimos(num);
            printf("\n");
        }
    } while(num <= 50 || num >= 1000);

    return 0;
}

