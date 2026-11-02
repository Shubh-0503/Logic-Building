// 
#include<stdio.h>
#include<stdlib.h>
void Dispaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        printf("%d \t",iCnt);
       // printf("* \t",iCnt);

    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter The Frequency: ");
    scanf("%d",&iValue);

    Dispaly(iValue);
    return EXIT_SUCCESS;
}