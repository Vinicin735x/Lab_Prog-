int main() {
    int numeros[20];  
    int soma_impares = 0;  
    int count_impares = 0;  

    printf("Digite 20 numeros naturais:\n");
    
    for (int i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < 20; i++) {
        if (numeros[i] % 2 != 0) {
            soma_impares += numeros[i];
            count_impares++;
        }
    }
    
    if (count_impares > 0) {
        float media_impares = (float) soma_impares / count_impares;
        printf("A media aritmetica dos numeros impares digitados e: %.2f\n", media_impares);
    } else {
        printf("Nenhum numero impar foi digitado.\n");
    }

    return 0;
}

int main() {
    float x, y, z;

    printf("Digite os valores dos lados do triangulo (X, Y, Z): ");
    scanf("%f %f %f", &x, &y, &z);

    if (x > 0 && y > 0 && z > 0 &&
        x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            printf("Os lados formam um triangulo escaleno.\n");
        }

    } else {
        printf("Os valores fornecidos nao formam um triangulo.\n");
    }

    return 0;
}

int main() {
    int idade;

    printf("Digite a idade do estudante: ");
    scanf("%d", &idade);

    if (idade >= 3 && idade <= 6) {
        printf("Classificacao: educacao infantil\n");
    } else if (idade >= 7 && idade <= 11) {
        printf("Classificacao: educacao basica\n");
    } else if (idade >= 12 && idade <= 15) {
        printf("Classificacao: ensino fundamental\n");
    } else if (idade >= 16 && idade <= 18) {
        printf("Classificacao: ensino medio\n");
    } else if (idade > 18) {
        printf("Classificacao: ensino superior\n");
    } else {
        printf("Idade invalida\n");
    }

    return 0;
}

int main() {
    float salario_atual, salario_reajustado;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 2000) {
        salario_reajustado = salario_atual * 1.17; 
    } else if (salario_atual > 2000 && salario_atual <= 2800) {
        salario_reajustado = salario_atual * 1.13; 
    } else if (salario_atual > 2800 && salario_atual <= 3500) {
        salario_reajustado = salario_atual * 1.08; 
    } else if (salario_atual > 3500) {
        salario_reajustado = salario_atual * 1.05; 
    } else {
        printf("Valor de salario invalido.\n");
        return 0;
    }
    printf("Salario reajustado: %.2f reais\n", salario_reajustado);

    return 0;
}

