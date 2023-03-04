#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],pro=1;
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
      pro=pro*arr[i];
  }
   printf("%d",pro);

    return 0;
}

