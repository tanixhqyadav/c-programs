#include <stdio.h>
int minimum(int a,int b){
    return (a>b) ? a : b;
}
int hcf(int a,int b){
    int hcg;
    for (int i=1;i<=minimum(a,b);i++){
        if(a%i==0 && b%i==0){
        hcg=i;}
    }
    return hcg;
}
int main()
{
    int n,m;
    printf("enter any two number");
    scanf("%d%d",&n,&m);
    int gcd=hcf(n,m);
    printf("HCF OF %d and %d is=%d",n,m,gcd);
    return 0;
}

