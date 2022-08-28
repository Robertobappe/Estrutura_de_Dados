#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 5, n2 = 10, max, min;
    max = (n1 > n2) ? n1 : n2;
    min = (n1 < n2) ? n1 : n2;
    //equivalente a:
    //min = (n1 > n2) ? n2 : n1;
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}



