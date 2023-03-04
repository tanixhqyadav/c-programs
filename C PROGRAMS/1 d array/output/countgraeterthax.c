#include<stdio.h>
int main(){
    int n,x,c=0;
    printf("enter size of your array");
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>x){c++;}
    }
    printf("number more than x are%d",c);
   
    return 0;
}
