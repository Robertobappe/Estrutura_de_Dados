#include <stdio.h>

int main()
{
    int x = 10; //inteiro x
    char y = 'a'; //caracter c
    float z;
    // implicita conversão de y para int
    x = x + y;
    printf("x = %d\n", x);
    // implicita conversão de x para float
    z = x + 1.0;
    printf("z = %f", z);
    return 0;
}


