#include <stdio.h>

int main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pro =-1;
    for(int i=0;i<n;i++){
        if (pro<a[i]){
            pro=a[i];
        }
    }
    printf("maximumu no in array=%d",pro);

    return 0;
}


