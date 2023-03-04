#include <stdio.h>

int main()
{
   int n,v,f=0;
   printf("enter the integer");
   scanf("%d",&n);
   while(n!=0){
     v=n%10;
     f=(f*10)+v;
     n=n/10;
     }
   printf("%d",f);
   

    return 0;
}

