#include <stdio.h>

int main()
{
   int n=6,m=4;
   for(int i=1;i<=4;i++){
       for(int j=1;j<=6;j++)
       {
           
        if(j==1||i==1&&j==6||i==4)
        {
        printf("*");
        }
        else
        {
            printf(" ");
        }
           
       }
       printf("\n");
   }

    return 0;
}

