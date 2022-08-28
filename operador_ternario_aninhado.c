#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 5, n2 = 10, max, min;
    int n3 = 8;
    //max = (n1>n2) ? (n1>n3) ? n1 : n3 : n2;
    max = (n1>n2)
          ? (n1>n3)
            ? n1
            : n3
          : n2;
    printf("Max out of three: %d", max);
    return 0;
}



