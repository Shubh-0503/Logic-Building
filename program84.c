#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo%5)==0)
    {
        printf(" is Divisible\n");
    }
    else
    {
        printf(" is Not divisible\n");
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