#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, array[5];
    printf("The size of integer in this compiler is %lu\n", sizeof(int));
    for(i=0; i<5; i++)
        printf("Address arr[%d] is %p\n", &array[i]);
    return 0;
}