#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    printf("\n\t Enter Any Number Between 1-7 to Find Day = ");
    scanf("%d",&Day);

    printf("\n !!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!! \n");

    if(Day == 1)
    {
        printf("\n\t Its a Monday \n");
    }
    else if(Day == 2)
    {
        printf("\n\t Its a Tuesday \n");
    }
    else if(Day == 3)
    {
        printf("\n\t Its a Wednesday \n");
    }
    else if(Day == 4)
    {
        printf("\n\t Its a Thursday \n");
    }
    else if(Day == 5)
    {
        printf("\n\t Its a Friday \n");
    }
    else if(Day == 6)
    {
        printf("\n\t Its a Saturday \n");
    }
    else if(Day == 7)
    {
        printf("\n\t Its a Sunday \n");
    }
    else
    {
        printf("\n\t INVALID DAY !! \n");
    }

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    getch();
    return 0;
}
