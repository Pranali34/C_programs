#include<stdio.h>
#include<conio.h>

int main()
{
    int Age = 0;

    printf("\n Enter Your Age = ");
    scanf("%d",&Age);

    printf("\n %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");

    if(Age >= 18)
    {
        printf("\n You are Eligible For Voting !! \n");
    }
    else
    {
        printf("\n You are Not Eligible For Voting !! \n");
    }

    printf("\n %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");

    printf("\n\t THANK YOU \n");

    getch();
    return 0;
}
