#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:

    printf("\n ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");

    printf("\n\t Enter Number To Find Even Or Odd = ");
    scanf("%d",&Num);

     printf("\n :::::::::::::::OOOOOOOOOOOOOOOOOOOOO:::::::::::::::: \n");

    if(Num == 0)
    {
        printf("\n\t Given Number %d is Neutral. \n",Num);

        printf("\n\t Enter Another Number !! \n");

        getch();
        system("cls");


        goto Up;
    }

    (Num % 2 == 0) ? printf("\n\t Given Number %d is Even. \n",Num) : printf("\n\t Given Number %d is Even. \n",Num);

    printf("\n ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");

    getch();
    return 0;
}
