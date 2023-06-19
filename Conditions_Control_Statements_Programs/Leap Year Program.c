#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    printf("\n\t Enter Any Year = ");
    scanf("%d",&Year);

    if(Year % 4 == 0)
    {
        printf("\n\t This Year is Leap Year \n");
    }
    else
    {
        printf("\n\t This Year is Not Leap Year \n");
    }

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    getch();
    return 0;
}
