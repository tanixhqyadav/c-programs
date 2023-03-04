#include<stdio.h>
int main(){
    int n,x,c=0,sum=0,i,k;
    printf("enter size of your array");
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<i+1;k++){
            for(int j=0;j<k+1;k++){//this can be done using hashmap
                if(a[i]+a[k]+a[j]==x){c++;
                }
                }
                }
    }
    printf("pair having sum as x are:%d",c);
   
    return 0;
}

