// Primeiro exercício
int main()
{
    int num1, num2;

    printf("Informe o primeiro: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O primeiro numero é maior");
    } else if (num2 > num1) {
        printf("O segundo numero é maior");
    } else {
        printf("Os dois numeros são iguais");
    }
    return 0;
}
// Segundo exercício:
int main()
{
    int A, B;

    printf("Informe o inteiro A: ");
    scanf("%d", &A);
    printf("Informe o inteiro B: ");
    scanf("%d", &B);

    if (A % B == 0){
        printf("A é divisível por B");
    } else {
        printf("Os numeros não são divisíveis");
    }
    return 0;
}
// Terceiro exercício:
int main()
{
    int X, Y, Z;

    printf("Informe o inteiro X: ");
    scanf("%d", &X);
    printf("Informe o inteiro Y: ");
    scanf("%d", &Y);
    printf("Informe o inteiro z: ");
    scanf("%d", &Z);

    if (X + Y == Z){
        printf("A soma de X + Y é igual o valor de Z");
    } else if (X + Y > Z) {
        printf("A soma de X+Y é maior que o valor de Z");
    } else {
        printf("A soma de X + Y é menor que o valor de Z");
    }
    return 0;
}
// Quarto exercício:
int main()
{
    int velocidadadeAV, velocidadeMOT, multa = 5, valorm;

    printf("Informe a velocidade máxima da avenida: ");
    scanf("%d", &velocidadadeAV);
    printf("Informe a velocidade do motorista: ");
    scanf("%d", &velocidadeMOT);

    if (velocidadadeAV < velocidadeMOT){
        valorm = multa * (velocidadeMOT - velocidadadeAV);
        printf("O motorista pagará de multa: %d reais\n ", valorm);
    } else {
        printf("Não haverá multa para o motorista");
    }
    return 0;
}
// Quinto exercício:
int main()
{
    int salario, horastr, valorh;

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horastr);
    printf("Informe o valor da hora trabalhada em reais: ");
    scanf("%d", &valorh);

    if (horastr > 40 && horastr <= 60){
        salario = (horastr * valorh) * 1.5;
        printf("O salário é: %d\n", salario);
    } else if (horastr > 60) {
        salario = (horastr * valorh) * 2;
        printf("O salário é: %d\n", salario);
    } else (horastr < 40); {
        salario = (horastr * valorh);
        printf("O valor do salário é: %d", salario);
    }

    return 0;
}
// Sexto exercício:
int main()
{

   int placarA, placarB, palpiteA, palpiteB, pontos = 0;

    printf("Insira o placar real para time A:");
   scanf("%d ", &placarA);

    printf("Insira o placar real para time B:");
   scanf("%d ", &placarB);

   printf("Insira seu palpite para o time A:");
   scanf("%d", &palpiteA) ;

   printf("Insira seu palpite para o time B:");
   scanf("%d", &palpiteB);

   if(placarA == palpiteA){
   pontos += 5;
   }
   if(placarB == palpiteB){
   pontos +=5;
   }
   if((placarA > placarB && palpiteA > palpiteB) ||
      (placarB > placarA && palpiteB > palpiteA) ||
      (placarA == placarB && palpiteA == palpiteB) ){
      pontos+= 10;
      }
    printf("Você marcou %d pontos", pontos);

    return 0;
}
// Sétimo exercício:
int main()
{
    float pesoA, alturaA, imc;
    printf("Informe o peso do adulto em Kg: ");
    scanf("%f", &pesoA );
    printf("Informe a altura do adulto: ");
    scanf("%f", &alturaA);


    imc = pesoA / (alturaA * alturaA);
    if (imc < 18.5){
        printf("Abaixo do peso");
    }else if
        (imc > 18.5 && imc < 25){
        printf("Peso normal");
    }else if
        (imc > 25 && imc < 30){
        printf("Acima do peso");
    }else{
        printf("Obeso");
    }
    return 0;
}
// Oitavo exercício:
int main() {
    float altura;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if(sexo == 'M') {
        printf("Seu peso ideal é: %.2f\n", (72.7 * altura) - 58);
    } else if(sexo == 'F') {
        printf("Seu peso ideal é: %.2f\n", (62.1 * altura) - 44.7);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}
