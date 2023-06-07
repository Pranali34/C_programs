#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Div = 0;

    printf("\n Enter First Number = ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number = ");
    scanf("%d",&Num2);

    Div = Num1 / Num2;

    printf("\n ***************########*************** \n");

    printf("\n\t Addition of %d / %d = %d \n",Num1,Num2,Div);

    printf("\n ***************########*************** \n");

    getch();
    return 0;
}
