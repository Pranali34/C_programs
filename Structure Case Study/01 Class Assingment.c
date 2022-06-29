#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CustCnt 2

struct mob
{
    char C_Name [40];
    int Mod_No;
    int B_Cap;
    int Price;
    float Scrn;
};

int main()
{
     int i = 0;
     struct mob Cust[CustCnt];

     printf("\n\n Accepting Sold Mobiles Details \n\n");

     for(i = 0 ; i < CustCnt ; i++)
     {
         printf("\n=====================================\n");

         fflush(stdin);

         printf("\n Enter a Company Name of Mobile =>");
         gets(Cust[i].C_Name);

         fflush(stdin);

         printf("\n Enter Model Number of Mobile =>");
         scanf("%d",&Cust[i].Mod_No);

         printf("\n Enter Battery Capacity of Mobile =>");
         scanf("%d",&Cust[i].B_Cap);

         printf("\n Enter Price of Mobile =>");
         scanf("%d",&Cust[i].Price);

         printf("\n Enter a Screen Size of Mobile =>");
         scanf("%f",&Cust[i].Scrn);
     }

    printf("\n=====================================\n");

     system("cls");

     printf("\n\n Display All Mobile Details \n\n");

     for(i = 0 ; i < CustCnt ; i++)
     {
         printf("\n=====================================\n");

         printf("\n Company Name is          => %s.",Cust[i].C_Name);

         printf("\n Model Number is          => %d.",Cust[i].Mod_No);

         printf("\n Battery Capacity is      => %d Mah.",Cust[i].B_Cap);

         printf("\n Price of Mobile is       => %d Rs.",Cust[i].Price);

         printf("\n Screen Size of Mobile is => %0.1f",Cust[i].Scrn);

     }

     printf("\n=====================================\n");

     getch();
     return 0;
}
