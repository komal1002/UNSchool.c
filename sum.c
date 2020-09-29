#include<stdio.h>
int main()
{
    int num=0,sum=0;
    do{
       printf("Enter a number:\n");
       scanf("%d",&num);
       sum=sum+num;
   }while(num!=0);
   printf("Sum of all these numbers=%d",sum);
}
