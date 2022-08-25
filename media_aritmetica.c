#include <stdio.h>

int main()
{
    float numero1, numero2, media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    media = (numero1 + numero2)/2;
    printf("A media eh = %f", media);
    return 0;
}


