#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d %d\n", i, j);
        }
        printf("------\n");
    }
    return 0;
}