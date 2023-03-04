#include<stdio.h>
#include<math.h>
int main()
{
int n,d=0,v,sum=0,t;
printf("enter the integer");
scanf("%d",&n);
t=n;
while(n)
{
n=n/10;
d++;
}
n=t;
while(n){
v=n%10;
sum=sum+pow(v,d);
n=n/10;
}
if(t==sum)
{
printf("it is arm strong");
}
else{
printf("not armstrong");
} 
return 0;
}
