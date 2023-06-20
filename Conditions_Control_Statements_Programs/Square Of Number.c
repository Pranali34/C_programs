#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    printf("\n\t Enter Positive Integer Number = ");
    scanf("%d",&Num);

    if(Num <=0 )
    {
        printf("\n\t Invalid Numnber \n\t Enter Another Number\n");

        getch();
        system('cls');

        goto Up;
    }

    printf("\n !!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!! \n");

    printf("\n\t\t Square of %d = %d \n",Num,Num * Num);

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    getch();
    return 0;
}
