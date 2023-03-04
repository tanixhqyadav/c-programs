#include <stdio.h>
int even(int n){

        return  (n%2==0);
}

int main()
{
    int v;
    printf("enter your number");
    scanf("%d",&v);
    if (even(v)){
        printf("it is even %d",v);
    }
    else{
        printf("odd");
    }
    
    return 0;
}

