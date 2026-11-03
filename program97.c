#include<stdio.h>
#include<stdlib.h>

unsigned long long Factorial(int iNo)
{
    
    int iCnt = 0;
    unsigned long long iFact = 0;
    
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
    
}

int main()
{
    int iValue = 0;
    unsigned long long iResult = 0;

    printf("Enter the Number:");
    scanf("%lld",&iValue);

    iResult = Factorial(iValue);

    printf("Factorial is :%lld\n",iResult);

    return EXIT_SUCCESS;

}