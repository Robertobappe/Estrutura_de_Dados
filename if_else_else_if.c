int main() {
    int a = 1;
    float b = 0.4;

    if (1 == 1){
        printf("1 eh igual a 1, eh verdade!\n");
    }
    if (a != 1){
        printf("1 não eh diferente de 1, eh falso e nao serei impresso :\n");
    }
    if (1 > 0.4)
        printf("1 eh maior que 0.4, eh verdade!\n");
    if(a < b)
        printf("1 nao eh menor que 0.4, eh falso e nao serei impresso :\n");
    if(a <= b || a >= b)
        printf("Uma das duas tem que ser verdade\n");
    if(a == 1 && b == 0.4)
        printf("Os dois tem que ser verdade, por isso fui impresso\n");
    if(0.2 < 0.5) {
        printf("Tambem pode ser um bloco de codigo e nao so uma linha\n");
        a = 0;
    }
     return 0;
}

