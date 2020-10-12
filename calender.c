//C program to print calender
#include<stdio.h>
#include<string.h>
int main()
{
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char*p[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"},check_month[10];
    int yr,rfyr=1990,lp=0,total_days,i,row,column,x=1,check=0,k;
    int check_day,check_year;
    printf("Enter the year>:\n");
    scanf("%d",&yr);
    for(i=1990;i<=yr;i++)
        {
            if((i%4==0))
              lp++;

        }
    if(yr%4==0&&yr%100==0||yr%400==0)
    {
        day[1]=29;
    }

    total_days=(yr-rfyr)*365+lp;
    k=total_days;
    for(i=0;i<=11;i++)
    {
       printf("\n----------%s %d----------\n",p[i],yr);
       if(i==0)
       {
           total_days=total_days;
       }
       else
       total_days=total_days+day[i];
     check=total_days%7;
       printf("MON TUE WED THU FRI SAT SUN\n\n");
       x=1;
       for(row=1;row<=7;row++)
       {
          for(column=1;column<=7&&x<=day[i];column++)
          {
              if(row==1&&column<=check)
              {
                  printf("    ");
              }
             else
             {printf("%3d ",x);
             x++;}

          }
          printf("\n");
       }
       printf("\nHave a nice day!\n");

    }
     printf("Enter day,month and year you want to search\n");
     scanf("%d%s%d",&check_day,check_month,&check_year);
     for(i=0;i<=11;i++)
    {

       if(i==0)
       {
           k=k;
       }
       else
       k=k+day[i];
    }
     check=(k+check_day)%7;
     switch(check)
     {
        case 0:
        printf("MONDAY");
        break;
        case 1:
        printf("TUESDAY");
        break;
        case 2:
        printf("WEDNESDAY");
        break;
        case 3:
        printf("THURSDAY");
        break;
        case 4:
        printf("FRIDAY");
        break;
        case 5:
        printf("SATURDAY");
        break;
        case 6:
        printf("SUNDAY");
        break;


     }



}


