#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct item
{
    int itemcode;
    char name[16];
    char size[16];
    char price[20];

};
struct item i[10]={{11,"BURGER","200/300gm","130/180"},
                    {12,"CHICKEN PIZZA","12/14/16inch","750/975/1250"},
                    {13,"FRIED CHICKEN","1/4/10pcs","85/320/790"},
                    {14,"GRILLED CHICKEN","quar/half/full","70/140/250"},
                    {15,"NOODLES","half/full","130/250"},
                    {16,"PASTA","half/full","120/240"},
                    {17,"OREO SHAKE","250mg","180"},
                    {18,"COLD COFFEE","250mg","65"},
                    {19,"CAPPUCINNO","250mg","70"},
                    {20,"COKE","250/500","20/30"}};
void display(void)
{
    printf("\nitem code       Description            Size               Price(tk)\n");
    printf("\n[%d]------------%s-----------------%s------------%s",i[0].itemcode,i[0].name,i[0].size,i[0].price);
    printf("\n[%d]------------%s----------%s----------%s",i[1].itemcode,i[1].name,i[1].size,i[1].price);
    printf("\n[%d]------------%s-----------%s------------%s",i[2].itemcode,i[2].name,i[2].size,i[2].price);
    printf("\n[%d]------------%s--------%s-------%s",i[3].itemcode,i[3].name,i[3].size,i[3].price);
    printf("\n[%d]------------%s-----------------%s------------%s",i[4].itemcode,i[4].name,i[4].size,i[4].price);
    printf("\n[%d]------------%s------------------%s-----------%s",i[5].itemcode,i[5].name,i[5].size,i[5].price);
    printf("\n[%d]------------%s-------------%s-----------------%s",i[6].itemcode,i[6].name,i[6].size,i[6].price);
    printf("\n[%d]------------%s-------------%s-----------------%s",i[7].itemcode,i[7].name,i[7].size,i[7].price);
    printf("\n[%d]------------%s-------------%s-----------------%s",i[8].itemcode,i[8].name,i[8].size,i[8].price);
    printf("\n[%d]------------%s-------------------%s---------------%s",i[9].itemcode,i[9].name,i[9].size,i[9].price);



}
int main()
{
    int code,num,loop,quan,order=0,orderser=0,orderwait=0,bill=0;
    char customer[10];
    char ch='y',exit;
    printf("\n                    Welcome to cafe aroma                  \n");
    while(1)
    {
        printf("\n1.Order\n2.serve\n3.Display\n4.Exit\n");

        printf("1.\nPlease Enter your name>>:\n");
        gets(customer);
        printf("\n------------------------------------MENU----------------------------------\n");
        display();
        printf("\nHow many items you want to order?");
        scanf("%d",&num);
        while(ch=='y')
        {printf("\nEnter item code\n");
        scanf("%d",&code);
        for(loop=0;loop<10;loop++)
        {
            if(i[loop].itemcode==code)
            {
               printf("%s of %s",i[loop].size,i[loop].name);
            }
        }
        printf("\nPlease enter the quantity>>:");
        scanf("%d",&quan);
        printf("Want to order anything else(y/n)::");
        fflush(stdin);
        scanf("%c",&ch);

        order++;
        }
        printf("\nNumber of food ordered>>:%d",num);
        for(loop=0;loop<10;loop++)
        {
            if(i[loop].itemcode==code)
            {
                bill=bill+quan*atoi(i[loop].price);
              printf("\nThank you %s for your order.your bill is %dtk\nPlease wait while we prepare the food.\n",customer,bill);
            }
        }
        printf("\n1.Order\n2.serve\n3.Display\n4.Exit\n");
        printf("\n2.\nOrder number %d by %s is ready\nEnjoy your meal.",order,customer);
        printf("\n1.Order\n2.serve\n3.Display\n4.Exit\n");
        orderser++;
        orderwait=order-orderser;
        printf("\n3.\nTotal order taken %d\nTotal number of order served %d \nNumber of currently waiting order to be served %d\nCurrently prepared food for order no.%d\n ",order,orderser,orderwait,order);
        printf("\n\n4.Want to exit?(y/n)::");
        fflush(stdin);
        scanf("%c",&exit);
        if(ch=='y')
          {
              break;
          }
          fflush(stdin);

}

}
