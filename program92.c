#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    
    int iCnt = 0, iFact = 0;
    
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
    
}

int main()
{
    int iValue = 0, iResult = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iResult = Factorial(iValue);

    printf("Factorial is :%d\n",iResult);

    return EXIT_SUCCESS;

}