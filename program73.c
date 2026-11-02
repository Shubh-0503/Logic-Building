// 1       *       2       *       3       *       4       *
#include<stdio.h>
#include<stdlib.h>
void Dispaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d \t*\t",iCnt);
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