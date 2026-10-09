#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo%2)==0)
        {
            printf("it is Even Number\n");
        }
        else
        {
            printf(" it is Odd Number \n");
        }
  

}

int main()
{

    int iValue = 0;


    printf("Enter The Number: ");
    scanf("%d",&iValue);
    
    CheckEven(iValue);

  return EXIT_SUCCESS;
}
