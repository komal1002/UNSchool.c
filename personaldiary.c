#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct record
{
    struct date
    {
        int d;
        int m;
        int yr;

    }d1;
    struct time
    {
        int hour;
        int min;
    }t1;
    char name[10];
    char place[10];
    int duration;
    char notice[15];
}r[10];
 int num=12345;
int pass(void);
int pass(void)
{
    int pass;
    printf("Enter password?");
    scanf("%d",&pass);
    if(num==pass)
    return(1);
    else
        return 0;

}
void add(void);
void add(void)
{
    char ch='y';
    FILE*fp;
    int i=0;
    fp=fopen("new.txt","a");
    while(ch!='n')
   {
       printf("Enter date of record[dd-mm-yy]::");
       scanf("%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
       fprintf(fp,"%d/%d/%d\n",r[i].d1.d,r[i].d1.m,r[i].d1.yr);
       printf("Enter time[hh-mm]::");
       fflush(stdin);
       scanf("%d:%d",&r[i].t1.hour,&r[i].t1.min);
       fprintf(fp,"%d:%d\n",r[i].t1.hour,r[i].t1.min);
       fflush(stdin);
       printf("Enter name::");
       gets(r[i].name);
       fputs(r[i].name,fp);
       fprintf(fp,"\n");
       printf("Enter place::");
       fflush(stdin);
       gets(r[i].place);
       fputs(r[i].place,fp);
       fprintf(fp,"\n");
       printf("Enter duration::");
      scanf("%d",&r[i].duration);
      fprintf(fp,"%d",r[i].duration);
       printf("Enter notice::");
       fflush(stdin);
       gets(r[i].notice);
       fprintf(fp,"\n");
       fputs(r[i].notice,fp);
       fprintf(fp,"\n");
       printf("\nRecord saved\n");
       printf("\nWant to enter another record?:");
       scanf("%c",&ch);
       printf("\n");
       fflush(stdin);

   }
   fclose(fp);
}
void view(void);
void view(void)
{
    FILE*fp;
    int i=0,choice,h,t;
    char ch='y';
    fp=fopen("new.txt","r");
    while(ch=='y')
    {

        printf("\nHOW WOULD YOU LIKE TO VIEW RECORD\n1.WHOLE RECORD\n2.RECORD OF FIX TIME\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        if(choice==1)
        {
            fscanf(fp,"%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
        printf("\nDATE[dd-mm-yy]::%d/%d/%d",r[i].d1.d,r[i].d1.m,r[i].d1.yr);
        fscanf(fp,"%d:%d",&r[i].t1.hour,&r[i].t1.min);
        printf("\nTIME[hh-mm]::%d:%d",r[i].t1.hour,r[i].t1.min);
        fscanf(fp,"%s",r[i].name);
        printf("\nNAME::%s",r[i].name);
        fscanf(fp,"%s",r[i].place);
        printf("\nPLACE::%s",r[i].place);
        fscanf(fp,"%d",&r[i].duration);
        printf("\nDURATION::%d hr",r[i].duration);
        fgets(r[i].notice,10,fp);
        printf("\nNOTICE::%s",r[i].notice);
        printf("\nWant to view another record?:");
        fflush(stdin);
       scanf("%c",&ch);
       printf("\n");
       i++;}
       else if(choice==2)
       {
           printf("\nEnter that fixed time");
           scanf("%d:%d",&t,&h);
           for(i=0;!feof(fp);i++)
           {
               if((t==r[i].t1.hour)&&(h==r[i].t1.min))
               {
                 fscanf(fp,"%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
        printf("\nDATE[dd-mm-yy]::%d/%d/%d",r[i].d1.d,r[i].d1.m,r[i].d1.yr);
        fscanf(fp,"%d:%d",&r[i].t1.hour,&r[i].t1.min);
        printf("\nTIME[hh-mm]::%d:%d",r[i].t1.hour,r[i].t1.min);
        fscanf(fp,"%s",r[i].name);
        printf("\nNAME::%s",r[i].name);
        fscanf(fp,"%s",r[i].place);
        printf("\nPLACE::%s",r[i].place);
        fscanf(fp,"%d",&r[i].duration);
        printf("\nDURATION::%d hr",r[i].duration);
        fgets(r[i].notice,10,fp);
        printf("\nNOTICE::%s",r[i].notice);
        printf("\nWant to view another record?:");
        fflush(stdin);
       scanf("%c",&ch);
       printf("\n");
               }
               else
                printf("No such record");

           }
       }
}
fclose(fp);
}
void edit_record(void);
void edit_record(void)
{
    FILE*fp;
    fp=fopen("new.txt","r+");
    char ch,name[10];
    int i;
    printf("\nWant to edit a record?");
    fflush(stdin);
    scanf("%c",&ch);
    while(ch=='y')
    {
      printf("Enter the name of that record.\n");
      fflush(stdin);
      gets(name);
      for(i=0;!feof(fp);i++)
      {
          fscanf(fp,"%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
        fscanf(fp,"%d:%d",&r[i].t1.hour,&r[i].t1.min);
        fscanf(fp,"%s",r[i].name);
        fscanf(fp,"%s",r[i].place);
        fscanf(fp,"%d",&r[i].duration);
        fgets(r[i].notice,10,fp);
          if(!(strcpy(name,r[i].name)))

       {
           printf("\nEnter the new details for this record \n");
          printf("Enter date of record[dd-mm-yy]::");
       scanf("%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
       fprintf(fp,"%d/%d/%d\n",r[i].d1.d,r[i].d1.m,r[i].d1.yr);
       printf("Enter time[hh-mm]::");
       fflush(stdin);
       scanf("%d:%d",&r[i].t1.hour,&r[i].t1.min);
       fprintf(fp,"%d:%d\n",r[i].t1.hour,r[i].t1.min);
       fflush(stdin);
       printf("Enter name::");
       gets(r[i].name);
       fputs(r[i].name,fp);
       fprintf(fp,"\n");
       printf("Enter place::");
       fflush(stdin);
       gets(r[i].place);
       fputs(r[i].place,fp);
       fprintf(fp,"\n");
       printf("Enter duration::");
      scanf("%d",&r[i].duration);
      fprintf(fp,"%d",r[i].duration);
       printf("Enter notice::");
       fflush(stdin);
       gets(r[i].notice);
       fprintf(fp,"\n");
       fputs(r[i].notice,fp);
       fprintf(fp,"\n");
       printf("\nRecord saved\n");
       printf("\n");

       }
       else
        printf("No such record exits!");
    }
    printf("\nWant to edit another record?:");
        fflush(stdin);
       scanf("%c",&ch);
       printf("\n");}
       fclose(fp);
}
void delete_record(void);
void delete_record(void)
{
FILE*fp;
FILE*ft;
char ch,name[10];
fp=fopen("new.txt","r");
ft=fopen("new1.txt","w");
 printf("\nWant to delete a record?");
fflush(stdin);
scanf("%c",&ch);
while(ch=='y')
    {
      printf("Enter the name of that record.\n");
      fflush(stdin);
      gets(name);
      for(int i=0;!feof(fp);i++)
      {
          fscanf(fp,"%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
        fscanf(fp,"%d:%d",&r[i].t1.hour,&r[i].t1.min);
        fscanf(fp,"%s",r[i].name);
        fscanf(fp,"%s",r[i].place);
        fscanf(fp,"%d",&r[i].duration);
        fgets(r[i].notice,10,fp);
          if(!(strcpy(name,r[i].name)))
          {

          }
          else
          {
            fprintf(ft,"%d/%d/%d",&r[i].d1.d,&r[i].d1.m,&r[i].d1.yr);
        fprintf(ft,"%d:%d",&r[i].t1.hour,&r[i].t1.min);
        fprintf(ft,"%s",r[i].name);
        fprintf(ft,"%s",r[i].place);
        fprintf(ft,"%d",&r[i].duration);
        fputs(r[i].notice,ft);
          }

   }
   printf("\nWant to delete another record\n");
   scanf("%c",&ch);
   }
fclose(fp);
fclose(ft);
}

void editpass(void)
{
    int check;
printf("::FOR SECURITY PURPOSE::ONLY THREE TRIALS ARE ALLOWED::\nEnter the old password");
scanf("%d",&check);
if(check==num)
{
    printf("Access granted!");
    printf("\nEnter the new password!");
    scanf("%d",&num);
    printf("password has been reset sucessfully!\n\n");
}
else
    printf("Access denied.try again!");

}
int main()
{
    int choice,i=0;
    FILE*fp;
    printf("  ************************************\n   *PASSWORD PROTECTED PERSONAL DIARY*\n  ************************************\n\n\n");
    while(1)
    {
        printf("\n\n         MAIN MENU:          ");
        printf("\nADD RECORD           [1]");
        printf("\nVIEW RECORD          [2]");
        printf("\nEDIT RECORD          [3]");
        printf("\nDELETE RECORD        [4]");
        printf("\nEDIT PASSWORD        [5]");
        printf("\nEXIT                 [6]");
        printf("\nEnter your choice>>:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                add();
                break;
            case 2:
                if(pass())
                view();
                else
                    printf("\nIncorrect password!\n");
                break;
            case 3:
                if(pass())
                edit_record();
                else
                    printf("\nIncorrect password!\n");
                break;
            case 4:
                if(pass())
                delete_record();
                else
                    printf("\nIncorrect password!\n");
                break;

            case 5:
                editpass();
                break;
            case 6:
                exit(0);
        }
    }
    return 0;
}
