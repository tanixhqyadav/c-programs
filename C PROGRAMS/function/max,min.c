#include <stdio.h>
int maxmin(int a,int b)
{
    if (a<b){
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int u,v;
    printf("enter any two number");
    scanf("%d %d",&u,&v);
    if(maxmin(u,v)==1){
        printf("MINIMUM=%d",u);  
    }
    else {
        printf("MAXIMUM=%d",v);
    }
    

    return 0;
}

