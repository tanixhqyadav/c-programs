#include <stdio.h>
int diameter(int n){
    return 2*n;
}
float circum(float t){
    return 2*3.14*t;
}
float area(float h){
    return 3.14*h*h;
}

int main()
{ 
    int u;
    printf("enter your number");
    scanf("%d",&u);
    printf("DIAMETER=%d\nCIRCUM=%f\nAREA=%f\n",diameter(u),circum(u),area(u));
    return 0;
}

