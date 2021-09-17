#include <stdio.h>
int main()
{
  int n,i,pos,e;
  printf("ENter the size of an array\n");
  scanf("%d",&n);
  int a[n];
  printf("ENter the elements of an array\n");
  for(i=0;i<n;i++)
  { 
    scanf("%d",&a[i]);
  }
  printf("Enter the position\n");
  scanf("%d",&pos);
  printf("Enter the element to be added\n");
  scanf("%d",&e);
  if(pos>n)
  printf("\n Incorrect Position\n");
  else
  {
    for(i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];
     
    a[pos-1]=e;
    printf("\nFinal Array\n");
    for(i=0;i<=n;i++)
    printf("%d\n",a[i]);
  }
  return 0;
}


