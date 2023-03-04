#include<stdio.h>
int main(){
    int min,max,i,j,count;
    printf("enter min no");
    scanf("%d",&min);
    printf("enter max no");
    scanf("%d",&max);
    for(int i=min;i<=max;i++)
    {
        count=0;
        for (int j=1;j<=i;j++){
            if(i%j==0)
            count++;
        }
            if (count==2)
            printf(" %d, ",i);
        
    }
    return 0;
    }
    

