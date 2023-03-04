#include<stdio.h>
int main(){
    int n,x;
    printf("enter size of your array");
    scanf("%d",&n);
    printf("enter no for search");
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++){
        if(a[i]==x){
            printf("%d is present at this %d",x,i);
            break;
        }
       else {printf("not present in the array");
           break;
       }
    }
    
   
    return 0;
}

