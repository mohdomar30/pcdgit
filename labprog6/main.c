#include <stdio.h>
#include<math.h>
float sin1(float sinx,float term,float x)
{
        term=x;
         int i=3;
        while(fabs(term)>0.0001)
    {
        term=(-term*x*x/(i*i-1));
        sinx=sinx+term;
        i=i+2;
        
    }    
        return sinx;
    
}
int main()
{
    float deg,x,term,sinx=0;
    int c;
    printf("enter the degree\n");
    scanf("%f",&deg);
    x=(deg*3.14)/180;
    term=x;
    sinx=x;
    c=sin1(sinx,term,x);
    printf("the value of sinx is %f",sinx);
    return 0;
}
