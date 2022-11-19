#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int *p;

int main()
{
    p = (int *)malloc(100 * sizeof(int)); // dynamic memory allocation 
    
    for(int i = 0; i < 100; i++)
    {
        p[i] = i;
        printf("i = %d, p[i] = %d\n",i, p[i]);
    }
    free(p);
    return 0;
}
