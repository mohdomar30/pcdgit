#include<stdio.h>
#include<math.h>
int main()
{
  float n,s;
  int i;
  printf("\n enter the number to find square root\n");
  scanf("%f",&n);
  if(n>0)
  {
    s=n/2;
    for(i=o;i<n;i++)
    {
      s=(s+(n/s))/2;
      printf("sqr root of %f is %f\n",n,s);
    }
    else
      printf("\n not possible to find the root");
      return 0;
}      
      
