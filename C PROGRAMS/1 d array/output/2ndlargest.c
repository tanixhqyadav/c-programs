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
    for(int i=0;i<n;i++){
        if (a[0]<a[i]&&a[i]>a[0]){
            a[0]=a[i];
        }
    }
    printf("maximumu no in array=%d",a[i]);

    return 0;
}

