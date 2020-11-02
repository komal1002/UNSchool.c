//C program to implement rock,paper,scissor game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int checkwinner(int m,int n)
{
    if(m==1&&n==2||m==2&&n==3||m==3&&n==1)
        {printf("\nComputer wins");
        return(1);
        }
    else if(m==1&&n==3||m==2&&n==1||m==3&&n==2)
        {printf("\nYou won");
        return 2;}
    else
        {printf("\nBoth are equal so no winner!");
        return 0;}

}
int main()
{
    char*p[3]= {"Rock","Paper","Scissor"},name[10];
    int player_choice,computer_choice,i=1,computer_score=0,player_score=0,check;
    printf("Enter your name>>:");
    gets(name);
    printf("%s Only three trials are allowed in this game\n",name);
    printf("%s let's play Rock-Paper-Scissor game!\n",name);
    while(i<=3)
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
        check=checkwinner(player_choice,computer_choice);
        if(check==1)
        {
           computer_score++;
        }
        else if(check==2)
        {
           player_score++;
        }
        printf("\n\n");
        i++;
    }
    printf("\n\n%s your score ::%d\nComputer has score ::%d",name,player_score,computer_score);
    if(player_score>computer_score)
        printf("\n%c Congrags!%s you won the game.",3,name);
        else
         printf("\nSorry!%s you lost.\nTry again",name);
    return 0;
}
