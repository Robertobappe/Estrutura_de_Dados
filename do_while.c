#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j;
    i = 0;
    j = 10;
    do {
        //fazer alog
        printf("%d %d\n", i, j);
        i++;
        j -= i;
    } while (i < 3 && j > 0);
    return 0;

}