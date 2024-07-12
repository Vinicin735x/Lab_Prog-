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