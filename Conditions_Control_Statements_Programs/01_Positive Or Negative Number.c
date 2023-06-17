#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    printf("\n\t Enter Number To Find Positive Or Negative = ");
    scanf("%d",&Num);

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~**********************~~~~~~~~~~~~~~~~~\n");

    if(Num > 0)
    {
            printf("\n\t %d Number is Positive. \n",Num);
    }
    else
    {
        printf("\n\t %d Number is Negative. \n",Num);
    }

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    getch();
    return 0;
}
