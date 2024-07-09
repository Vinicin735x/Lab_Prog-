// Primeiro exercício:
int main()
{
    int v[20], i, maior, menor, media;
    float soma;

    printf("Informe 20 numeros inteiros. ");
    for(i=0; i < 20; i++){
        printf("Insira o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
    maior = menor = media = v[0];
    for(i=1; i<20; i++){
        if(v[i]> maior){
            maior = v[i];
        }
        if(v[i]< menor){
            menor = v[i];
        }
        soma += v[i];
    }
    printf("Maior valor: %d\nMenor valor: %d\nMédia: %f", maior, menor, soma/20);

    return 0;
}
// Segundo exercício:
int main()
{
    int v[30], i;
    v[0] = 0;
    v[1] = 1;

    for(i=2; i<30; i++){
        v[i] = v[i-1] + v[i-2];
    }
    for(i=0; i<30; i++){
        printf("%d ", v[i]);
    }
    return 0;
}

