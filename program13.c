

//////////////////////////////////////////////////////////////
//  
//      Function Name : Addition
//      Input         : integer, integer
//      OUTPUT        : integer
//      DESCRIPTION   : Performs Addtion 
//      Date          : 04/10/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//
//      Entry point Of the Application
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Addition(
                int iNo1,   //First input
                int iNo2    //Secound input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // BUSINESS LOGIC

    return iAns;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter First Number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid");


        return EXIT_FAILURE;



    }

    printf("Enter Secound Number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid");


        return EXIT_FAILURE;

  

    }
    

    iResult = Addition(iValue1, iValue2);           

    printf("Addition is : %d\n",iResult);


    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////
//
//      step 5: test the Peofram
// 
//      Tested test cases
//---------------------------------------------------------
//      input 1             input2         output
//---------------------------------------------------------
//          10                  11            21
//          11                  10            21
//          0                   11            11
//          20                  -9            11    
//          -9                  20            11
//          -20                 -11           -31
//
//////////////////////////////////////////////////////////////
