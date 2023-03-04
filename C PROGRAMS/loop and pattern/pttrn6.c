#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  int a=1;
        
            
            for(int j=1;j<=i;j++)
            {
             int d;
            d=a+64;
            char ch =(char)d;
            a++;
            if(n%i==1)
            {
                printf("%d",j);
            }
            else{
            printf("%c",ch);
            }
            }
        
        printf("\n");
    }
    return 0;
}

