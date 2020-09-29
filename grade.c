#include<stdio.h>
int main()
{
    int per;
    while(1)
    {printf("Enter your percentage:\n");
    scanf("%d",&per);
    if(per>80)
    {
        printf("A grade!");
    }
    else if(per>=70&&per<80)
        printf("B grade!");
    else if(per>=60&&per<70)
        printf("C grade!");
    else if(per>=45&&per<60)
        printf("D grade!");
    else if(per<45)
        printf("You are Fail!");}
}
