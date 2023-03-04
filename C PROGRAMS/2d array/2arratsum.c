#include<stdio.h>
int main()
{
    int r;
    printf("enter the no of rows");
    scanf("%d",&r);
    int c;
    printf("enter the no of colums");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("This is your array");
    return 0;
}
