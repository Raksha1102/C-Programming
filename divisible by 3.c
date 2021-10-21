#include <stdio.h>

void main()
{
  int a[6];
  int i,n,count=0;
  printf("enter the array element\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
  {
  printf(" %d ",a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]%3==0)
      count++;
  }
  printf("count=%d",count);
}
  
