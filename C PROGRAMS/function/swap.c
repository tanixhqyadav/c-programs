#include <stdio.h>
void swap(int a,int b){
    int c;
    a=c;
    b=a;
    c=b;
    return;
    }
int main()
{   int n,m;
    printf("enter two number");
    scanf("%d%d",&n,&m);
    swap(n,m);
    printf("1st value:%d\n",n);
    printf("2nd value:%d\n",m);
    
    

    return 0;
}

