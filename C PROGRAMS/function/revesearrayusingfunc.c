
// function to reverse an Array  
#include<stdio.h>
void reverse ( int arr [ 10 ] , int n )  
{  
  int i , tmp ;  
  for(i=0;i<n/2;i++)  
  {  
    tmp=arr[i];  
    arr[i]=arr[n-1-i];  
    arr[n-1-i]=tmp;  
  }  
}  
int main()
{  
  int arr[100],i,size;  
  printf("enter size of array");  
  scanf ( "%d",&size);  
  printf ( " enter the elements of the array : " );  
  for (i=0;i<size;i++)  
    scanf("%d",&arr[i]);  
  reverse(arr,size);  
  printf("After reversing the array:");  
  for(i=0;i<size;i++)  
  {  
    printf("%d",arr[i]);  
  }  
  return 0;  
}  
