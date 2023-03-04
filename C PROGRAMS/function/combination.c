#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;  
    }
    return fact;
}
int combination( int u,int r)
{
    int h=factorial(u)/(factorial(r)*factorial(u-r));
    return h;
}

int main()
{
   int n,r;
   printf("enter n");
   scanf("%d",&n);
   printf("enter r");
   scanf("%d",&r);
   int e=combination(n,r);
   printf("combination=%d",e);
   

    return 0;
}

