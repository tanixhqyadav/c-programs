#include <stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
     *b=c;
    return;
}

int main()
{
    int u=2;
    int v=9;
    swap(&u,&v);
    printf("after swapping:>>>>>>>>>\n");
    printf("1st value(u):%d\n",u);
     printf("2nd value(v):%d\n",v);
    

    return 0;
}

