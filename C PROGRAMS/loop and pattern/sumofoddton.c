#include <stdio.h>

int main()
{
    int n,sum=0,i=1;
    scanf("%d",&n);
    printf("sum of all even numbersfrom 1 to n\n");
    while(i<=n)
    {
    if (i%2==1)
    {
     sum=sum+i;   
    }
     i++;
    }
        printf("%d",sum);
    
    return 0;
}

