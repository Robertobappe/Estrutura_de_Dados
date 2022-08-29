#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    k=10;
    for(i=0, j=k; i<3 && j>0; i++, j-=2){
        //fazer algo
        printf("%d %d\n", i,j);
    }
}