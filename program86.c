/*
    ------------------------------------------------------
                Operation || (LOGICAL OR)
    ------------------------------------------------------
    Result1                 Result2               Result3
    ------------------------------------------------------
    TRUE                      TRUE                  TRUE    Short Circut
    TRUE                      FALSE                 TRUE    Short Circut
     
    FALSE                     TRUE                  TRUE
    FALSE                     FALSE                 FALSE
    ------------------------------------------------------


*/
#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf(" It is Divisible\n");
    }
    else
    {
        printf(" It is Not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;

}