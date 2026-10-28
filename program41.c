#include<stdio.h>
#include<stdlib.h>
int Maxiumum(int iNo1, int iNo2)
{

    if(iNo1>iNo2)
    {
        printf("Maxumum is %d:",iNo1);
    }
    else
    {
        printf("Maxumum is %d :",iNo2);
    }

}
int main()
{
    int iValue1 =0, iValue2 = 0, iResult = 0;

    printf("Enter frist Number: \n");
    scanf("%d",&iValue1);

    printf("Enter Secound Number: \n");
    scanf("%d",&iValue2);

    Maxiumum(iValue1, iValue2);


    return EXIT_SUCCESS;
}
