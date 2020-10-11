//C program to store employee information using structure
#include<stdio.h>
struct employee
{
    char name[10];
    char id[10];
    int exp;
    int salary;
}e[5];
int main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("\nEnter your name>:");
        gets(e[i].name);
        fflush(stdin);
        printf("Enter your id>:");
        gets(e[i].id);
        printf("Enter your experience>:");
        scanf("%d",&e[i].exp);
        printf("\nEnter your salary>:");
        scanf("%d",&e[i].salary);
        fflush(stdin);
    }
    for(i=0;i<=4;i++)
    {
        printf("\n-------------****--------------\n");
        printf("\nName>:");
        puts(e[i].name);
        printf("Employee id>:");
        puts(e[i].id);
        printf("Experience>:");
        printf("%d",e[i].exp);
        printf("\nSalary>:");
        printf("%d",e[i].salary);
    }
    return 0;
}
