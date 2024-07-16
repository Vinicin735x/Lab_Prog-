// Primeiro exercício da revisão pré-prova. 
int main()
{
    int idadeMo, idadeFM, idadeC, somaid;
    // Declaração das variáveis e armazená-las.
    printf("Informe a idade da Monica: ");
    scanf("%d", &idadeMo);
    printf("Informe a idade do filho do meio: ");
    scanf("%d", &idadeFM);
    printf("Informe a idade do filho caçula: ");
    scanf("%d", &idadeC);
    // Definição das restrições de idade 
    while(idadeMo < 40 || idadeMo > 110){
        printf("Idade inválida\n");
        printf("Informe outra idade para a Mônica: ");
        scanf("%d", &idadeMo);
    };
    while(idadeFM < 1 || idadeFM > idadeMo){
        printf("Idade inválida\n");
        printf("Informe outra idade para o filho do meio: ");
        scanf("%d", &idadeFM);
    };
    while(idadeC <= 1 || idadeC > idadeFM || idadeFM == idadeC){
        printf("Idade inválida!\n");
        printf("Informe outra idade para o filho caçula: ");
        scanf("%d", &idadeC);
    }
    // Cálculo para descobrimento da idade do filho mais velho
    somaid = idadeMo - (idadeFM + idadeC);
    printf("A idade do filho mais velho é: %d\n", somaid);
    scanf("%d", somaid);
    return 0;
}
// Atividade 2

int main()
{
    int cor[4], i, j;
    srand(time(NULL));
    for(j=0; j <20; j++){
        
    for(i=0; i<4; i++){
        cor[i] = rand() % 9 + 1;
    }
    
    if(((cor[0] == cor[2]) && ((cor[1] != cor[0] && cor[1]  != cor[3] &&
    cor[2] != cor[1]) && cor[2] != cor[3]) && cor[1] != cor[3]) ||
    ((cor[1] == cor[3]) && ((cor[1] != cor[0]) && cor[1] != cor[2]) &&
    cor[3] != cor[0] && cor[3] != cor[2] && cor[0] != cor[2])){
        printf("%d %d %d %d coral verdadeira\n", cor[0], cor[1], cor[2], cor[3]);
    }else if((cor[0] == cor[3]) && (cor[0] != cor[1] && cor[0] != cor[2] &&
              cor[3] != cor[1] && cor[3] != cor[2] && cor[1] != cor[2])){
        printf("%d %d %d %d coral verdadeira\n", cor[0], cor[1], cor[2], cor[3]);
    }else{
        printf("%d %d %d %d coral falsa\n", cor[0], cor[1], cor[2], cor[3]);
    }
    }
    return 0; 
}
// Atividade 3:

int main()
{
    char frase[100], resposta[100] = " ";
    int pos = 0;
    printf("digite: ");
    scanf("%s[^\n]s", &frase);
    for(int i = 0; i < 100; i++){
        if(frase[i] != 'p'){
            resposta[pos] = frase[i];
            pos++
        }else if(((frase[i] == 'p') || frase[i] =='p') && (frase[i-1] =='p') && frase[i + 1] == 'p'){
            resposta[pos] = frase[i];
            pos++;
        }
    }
    printf("%s", resposta);
    return 0;
}