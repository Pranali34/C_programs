#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Sum = 0;

    printf("\n Enter First Number = ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number = ");
    scanf("%d",&Num2);

    Sum = Num1 + Num2;

    printf("\n ***************########*************** \n");

    printf("\n\t Addition of %d + %d = %d \n",Num1,Num2,Sum);

    printf("\n ***************########*************** \n");

    getch();
    return 0;
}
