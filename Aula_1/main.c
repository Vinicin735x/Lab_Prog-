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
