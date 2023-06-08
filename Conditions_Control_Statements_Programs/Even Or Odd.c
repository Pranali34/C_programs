#include <stdio.h>
#include<conio.h>

int main()
{
         int  Num = 0;

         printf("\n =============================================== \n");

         printf("\n Enter Number to Check Even Or Odd = ");
         scanf("%d",&Num);

         printf("\n =============********************============= \n");

         if(Num % 2 == 0)
         {
             printf("\n\t\t %d is Even. \n",Num);
         }
         else
         {
             printf("\n\t\t %d is Odd.\n",Num);
         }

         printf("\n =============================================== \n");

         getch();
         return 0;

}
