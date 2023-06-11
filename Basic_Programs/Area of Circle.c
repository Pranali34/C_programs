#include<stdio.h>
#include<conio.h>

int main()
{
    int Rad = 0;
    float Pi = 3.14;
    float Area = 0;

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    printf("\n Enter Radius of Circle = ");
    scanf("%d",&Rad);

    Area = Pi * Rad * Rad;

    printf("\n Area of Circle is %0.2f \n",Area);

    printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");

    getch();
    return 0;
}
