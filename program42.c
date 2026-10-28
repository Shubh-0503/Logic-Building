#include<stdio.h>
#include<stdlib.h>
int Maxiumum(int iNo1, int iNo2)
{

    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}
int main()
{
    int iValue1 =0, iValue2 = 0, iResult = 0;

    printf("Enter frist Number: \n");
    scanf("%d",&iValue1);

    printf("Enter Secound Number: \n");
    scanf("%d",&iValue2);

    iResult = Maxiumum(iValue1, iValue2);

    printf("Maxumum Number is: %d ",iResult);

    return EXIT_SUCCESS;
}
