#include <stdio.h>

int main()
{
   int n=25;
   int *x=&n;
   *x=7;
   printf("%d",n);
    

    return 0;
}

