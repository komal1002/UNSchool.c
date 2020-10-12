#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void checkwinner(int m,int n)
{
   if(m==1&&n==2||m==2&&n==3||m==3&&n==1)
       printf("\nComputer wins");
    else if(m==1&&n==3||m==2&&n==1||m==3&&n==2)
       printf("\nYou won");
    else
        printf("\nBoth are equal so no winner!");

}
int main()
{
    char*p[3]={"Rock","Paper","Scissor"},name[10];
    int player_choice,computer_choice;
     printf("Enter your name>>:");
        gets(name);
        printf("%s let's play Rock-Paper-Scissor game!\n",name);
    while(1)
    {
        printf("\n1.Rock\n2.Paper\n3.Scissor\n4.Exit");
        printf("\n\nEnter your choice %s>>:",name);
        scanf("%d",&player_choice);
        if(player_choice==4)
           exit(0);
        printf("You have choose %s",p[player_choice-1]);
        srand(time(NULL));
        printf("\nComputer makes choice>>:%d",computer_choice=rand()%3+1);
        printf("\nComputer have choose %s",p[computer_choice-1]);
        checkwinner(player_choice,computer_choice);
        printf("\n\n");
 }
}
