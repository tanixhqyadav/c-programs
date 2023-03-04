#include <stdio.h>

int main()
{
    int n;
    printf("enter your first number");
    scanf("%d",&n);
     int v;
    printf("enter your second number");
    scanf("%d",&v);
    printf("before swap%d,%d\n",n,v);
    int temp;
    temp=n;
    n=v;
    v=temp;
    printf("after swap%d,%d",n,v);
    

    return 0;
}


