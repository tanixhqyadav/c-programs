#include<stdio.h>
int prime(int n){
     int c=0;
     for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
        if(c==2)
        return 1;
        else
        return 0;
     }
}
int main(){
    for(int i=1;i<50;i++){
    if(prime(i)){
        printf("%d",i);
    }
    }
    return 0;
}