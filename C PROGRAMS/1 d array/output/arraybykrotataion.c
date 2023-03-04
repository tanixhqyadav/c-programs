#include<stdio.h>
int main(){
    int n,x;
    printf("enter size of your array");
    scanf("%d",&n);
    printf("enter no of rotation");
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=x;i++){
        int temp=a[i];
        a[i]=a[n-x];
        a[n-x]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);}
    
   
    return 0;
}


