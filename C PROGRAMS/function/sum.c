#include <stdio.h>
int add(int g,int h){
    return g+h;
}

int main()
{
    int a,b;
    printf("enter two digit");
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
    return 0;
}
//void means returning nothing 
//and int means function returning value in int type 
//int  main is a function which is important thats why code inside it is preferly to be done first
//in this function (int a,int b) are called parameters and arguements 
