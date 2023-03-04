#include <stdio.h>

int main()
{
   int n=8;
   int *x=&n;
   int **g=&x;
    printf("double pointer>%d",(**g));
    return 0;
}

