#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n&1){
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}