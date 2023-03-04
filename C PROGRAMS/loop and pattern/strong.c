#include <stdio.h>

int main()
{
    int n,fact,m,sum=0,v;
    printf("enter the integer");
    scanf("%d",&n);
    m=n;
    while(n>0){
        v=n%10;
        fact=1;
        for(int i=1;i<=v;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    
    if(sum==m){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }

    return 0;
}

