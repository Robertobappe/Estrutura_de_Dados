#include <stdio.h>
#include <stdlib.h>

int main(){
    int option, a=1;
    scanf("%d", &option);
    switch (option) {
        case 1: printf("Escolheu a 1\n");
            break;
            //Não pode ser uma variável
            //case a: printf("Escolheu a 2\n");
        case 2: printf("Escolheu a 2\n");
            break;
        case 3: printf("Escolheu a 3\n");
            break;
        default: printf("Não existe essa opção\n");
            //Não precisa de break já que é o fim. Mas pode colocar
            //break;
    }
    return 0;
}



