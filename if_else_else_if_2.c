int main() {
    int a = 1, b = 2;
    float c = 1.5;
    char d= 'c';
    if(d == 'x')
        printf("d eh um caractere x\n");
    else
        printf("d nao eh um caractere x\n");
    if(c == a)
        printf("c eh igual a a\n");
    else if(c == b)
        printf("c eh igual a b\n");
    else if(c > a)
        printf("c eh maior que a\n");
    else if (b > a)
        printf("b eh maior que a\n");
    else
        printf("Nao faco ideia do que testar\n");
    return 0;
}

