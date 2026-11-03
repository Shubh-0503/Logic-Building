#include<stdio.h>
#include<stdlib.h>

long int Factorial(int iNo)
{
    
    int iCnt = 0;
    long int iFact = 0;
    
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
    
}

int main()
{
    int iValue = 0;
    long int iResult = 0;

    printf("Enter the Number:");
    scanf("%ld",&iValue);

    iResult = Factorial(iValue);

    printf("Factorial is :%ld\n",iResult);

    return EXIT_SUCCESS;

}