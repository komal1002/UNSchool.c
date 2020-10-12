#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contact
{
    char name[7];
    char address[20];
    char father[15];
    char mother[15];
    unsigned int number;
    char sex;
    char mail[25];
    int citizenno;
};
int main()
{
    struct contact c[10];
    int choice,i,num;
    FILE*fp;
    char arr[10],bar[10];
    printf("\n**************WELCOME TO PHONEBOOK******************\n");
    while(1)
    {
        printf("\n\n1.Create records\n2.Add new\n3.List\n4.exit\n5.modify\n6.search\n7.delete\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

            fp=fopen("phone.txt","w");
            printf("How many records you want to enter?:\n");
            scanf("%d",&num);
            for(i=0;i<num;i++)
            {
                printf("\nEnter your name>>:");
                fflush(stdin);
                gets(c[i].name);
                printf("Enter your address>>:");
                gets(c[i].address);
                printf("Enter your father's name>>:");
                fflush(stdin);
                gets(c[i].father);
                printf("Enter your mother's name>>:");
                gets(c[i].mother);
                fflush(stdin);
                printf("Enter your phone number>>:");
                scanf("%d",&c[i].number);
                printf("Enter your sex>>:");
                fflush(stdin);
                scanf("%c",&c[i].sex);
                printf("Enter your your e-mail>>:");
                scanf("%d",&c[i].mail);
                fflush(stdin);
                printf("Enter your citizen number>>:");
                scanf("%d",&c[i].citizenno);
                fprintf(fp,"%s\n%s\n%s\n%s\n%d\n%c\n%s\n%d\n",c[i].name,c[i].address,c[i].father,c[i].mother,c[i].number,c[i].sex,c[i].mail,c[i].citizenno);
            }
            fclose(fp);
            break;
            case 2:
                fp=fopen("phone.txt","a");
                printf("\nHow many new records you want to add?");
                scanf("%d",&num);
                for(i=0;i<num;i++)
            {
                printf("\nEnter your name>>:");
                fflush(stdin);
                gets(c[i].name);
                printf("Enter your address>>:");
                gets(c[i].address);
                printf("Enter your father's name>>:");
                fflush(stdin);
                gets(c[i].father);
                printf("Enter your mother's name>>:");
                gets(c[i].mother);
                fflush(stdin);
                printf("Enter your phone number>>:");
                scanf("%d",&c[i].number);
                printf("Enter your sex>>:");
                fflush(stdin);
                scanf("%c",&c[i].sex);
                printf("Enter your your e-mail>>:");
                scanf("%d",&c[i].mail);
                fflush(stdin);
                printf("Enter your citizen number>>:");
                scanf("%d",&c[i].citizenno);
                printf("Record is saved.\n");
                fprintf(fp,"\n%s\n%s\n%s\n%s\n%d\n%c\n%s\n%d",c[i].name,c[i].address,c[i].father,c[i].mother,c[i].number,c[i].sex,c[i].mail,c[i].citizenno);
            }
            fclose(fp);
            break;
            case 3:
            fp=fopen("phone.txt","r");
            for(i=0;!feof(fp);i++)
            {
                printf("\n------------------*****-----------------\n");
                printf("\nName>>:");
                fscanf(fp,"%s",c[i].name);
                puts(c[i].name);
                printf("Address>>:");
                fscanf(fp,"%s",c[i].address);
                puts(c[i].address);
                printf("Father's name>>:");
                fscanf(fp,"%s",c[i].father);
                puts(c[i].father);
                printf("Mother's name>>:");
                fscanf(fp,"%s",c[i].mother);
                puts(c[i].mother);
                printf("Phone number>>:");
                fscanf(fp,"%d",&c[i].number);
                printf("%d",c[i].number);
                printf("\nSex>>:");
                fscanf(fp,"%c",&c[i].sex);
                printf("%c",c[i].sex);
                printf("\nE-mail>>:");
                fscanf(fp,"%s",c[i].mail);
                puts(c[i].mail);
                printf("Citizen number>>:");
                fscanf(fp,"%d",&c[i].citizenno);
                printf("%d",c[i].citizenno);
                printf("\n");
            }
            fclose(fp);
            break;

            case 4:
                exit(0);
            case 5:
                fp=fopen("phone.txt","r+");
                for(i=0;!feof(fp);i++)
            {
                fscanf(fp,"%s",c[i].name);
                fscanf(fp,"%s",c[i].address);
                fscanf(fp,"%s",c[i].father);
                fscanf(fp,"%s",c[i].mother);
                fscanf(fp,"%d",&c[i].number);
                fscanf(fp,"%c",&c[i].sex);
                fscanf(fp,"%s",c[i].mail);
               fscanf(fp,"%d",&c[i].citizenno);


            }
            printf("\nEnter the name from that record which you want to modify>>:");
                scanf("%s",arr);
                for(i=0;!feof(fp);i++)
                {
                    if(!strcmp(arr,c[i].name))
                    {
                       printf("\nEdit name.");
                       printf("\nEnter new name>>:");
                       gets(bar);
                       strcpy(c[i].name,bar);
                       printf("Your information has been modified\n");
                       printf("\nName>>:%s",c[i].name);
                        printf("Address>>:%s",c[i].address);
                        printf("Father's name>>:%s",c[i].father);
                        printf("Mother's name>>:%s",c[i].mother);
                         printf("Phone number>>:%d",c[i].number);
                        printf("\nSex>>:%c",c[i].sex);
                printf("\nE-mail>>:%s",c[i].mail);
                printf("Citizen number>>:%d",c[i].citizenno);

                    }
                }
            fclose(fp);
            break;
            case 6:
          fp=fopen("phone.txt","r");
           for(i=0;!feof(fp);i++)
            {
                fscanf(fp,"%s",c[i].name);
                fscanf(fp,"%s",c[i].address);
                fscanf(fp,"%s",c[i].father);
                fscanf(fp,"%s",c[i].mother);
                fscanf(fp,"%d",&c[i].number);
                fscanf(fp,"%c",&c[i].sex);
                fscanf(fp,"%s",c[i].mail);
               fscanf(fp,"%d",&c[i].citizenno);


            }
            printf("\nEnter the name from that record which you want to search>>:");
                scanf("%s",arr);
           for(i=0;!feof(fp);i++)
                {
                    if(!strcmp(arr,c[i].name))
                    {
                       printf("\nName>>:%s",c[i].name);
                        printf("Address>>:%s",c[i].address);
                        printf("Father's name>>:%s",c[i].father);
                        printf("Mother's name>>:%s",c[i].mother);
                         printf("Phone number>>:%d",c[i].number);
                        printf("\nSex>>:%c",c[i].sex);
                        printf("\nE-mail>>:%s",c[i].mail);
                        printf("Citizen number>>:%d",c[i].citizenno);

                    }
                }
            fclose(fp);
            break;
            case 7:
              fp=fopen("phone.txt","r+");
                for(i=0;!feof(fp);i++)
            {
                fscanf(fp,"%s",c[i].name);
                fscanf(fp,"%s",c[i].address);
                fscanf(fp,"%s",c[i].father);
                fscanf(fp,"%s",c[i].mother);
                fscanf(fp,"%d",&c[i].number);
                fscanf(fp,"%c",&c[i].sex);
                fscanf(fp,"%s",c[i].mail);
               fscanf(fp,"%d",&c[i].citizenno);


            }
            printf("\nEnter the name from that record which you want to delete>>:");
                scanf("%s",arr);
                FILE*ft;
                    ft=fopen("phonenew.txt","w");
                for(i=0;!feof(fp);i++)
                {
                    if(!strcmp(arr,c[i].name))
                    continue;
                    else
                    fprintf(ft,"%s\n",c[i].name);
                fprintf(ft,"%s\n",c[i].address);
                fprintf(ft,"%s\n",c[i].father);
                fprintf(ft,"%s\n",c[i].mother);
                fprintf(ft,"%d\n",&c[i].number);
                fprintf(ft,"%c\n",&c[i].sex);
                fprintf(ft,"%s\n",c[i].mail);
               fprintf(ft,"%d\n",&c[i].citizenno);

                }
            fclose(fp);
            fclose(ft);
            break;

        }
}
}
