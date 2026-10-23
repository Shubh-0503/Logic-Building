#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iValue1 =0, iValue2 = 0, iResult = 0;

    printf("Enter frist Number: \n");
    scanf("%d",&iValue1);

    printf("Enter Secound Number: \n");
    scanf("%d",&iValue2);

    if(iValue1>iValue2)
    {
        printf("Maxmum is %d",iValue1);
    }
    else
    {
        printf("Maxmum is %d",iValue2);
    }

    return EXIT_SUCCESS;
}
