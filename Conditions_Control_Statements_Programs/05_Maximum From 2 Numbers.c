#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

     Up:

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    printf("\n\t Enter First Circle = ");
    scanf("%d",&Num1);

    printf("\n\t Enter Second Circle = ");
    scanf("%d",&Num2);

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    if(Num1 == Num2)
    {
         printf("\n\t %d And %d Both Are Equal \n",Num1,Num2);
         printf("\n\t Enter Another Number !!");

         getch();
         system("cls");

         goto Up;
    }
    (Num1 > Num2) ?  printf("\n\t %d is Maximum \n",Num1) :  printf("\n\t %d is Maximum \n",Num2);

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    getch();
    return 0;
}
