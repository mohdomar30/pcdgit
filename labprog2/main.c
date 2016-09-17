#include<stdio.h>
int main()
{
        int num,temp,rev=0,digit;
        printf("enter a valid integer\n");
        scanf("%d",&num);   
        temp=num;
        while(num!=0)
        {
                digit=num%10;
                rev=rev*10+digit;
                num=num/10; 
        }        
        if(temp==rev)
         printf("\n the no is a palindrome");
         else
         printf("\n no is not a palindrome");
         return 0;
        
}
