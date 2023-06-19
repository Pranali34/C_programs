#include<stdio.h>
#include<conio.h>

int main()
{
    char  Letter = {'0'};

    Up:

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    printf("\n\t Enter Any Letter = ");
    scanf("%c",&Letter);

    printf("\n ~~~~~~~~~~~~~~~~~*********************~~~~~~~~~~~~~~~~~~~~~ \n");

    if(Letter >= 'A' && Letter <= 'Z')
    {
        printf("\n\t Entered Character %c is Uppercase \n",Letter);
    }
    else if(Letter >= 'a' && Letter <= 'z')
    {
        printf("\n\t Entered Character %c is Lowercase \n",Letter);
    }
    else
    {
        goto Up;
    }

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    getch();
    return 0;
}

