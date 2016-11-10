#include<stdio.h>
#include<math.h>
unsigned int right(unsigned int x,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(x%2==0)
			x=x>>1;
			else
		{
			x=x>>1;
			x+=pow(2,31);
		}
	
		return x;
}
}
int main()
{
	unsigned int x,result;
	int n;
	printf("enter an unsigned integer<=65536\n");
	scanf("%u",&x);
	printf("rotate %u how many times:\n",x);
	scanf("%d",&n);
	result=right(x,n);
	printf("right(%u,%d)=%u\n",x,n,result);
	return 0;
}		
