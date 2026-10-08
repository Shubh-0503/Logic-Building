/*
Step 1: Understand the problem statement

step 2: Write the algoritom
step 3: Decode the Programming Languge
step 4: write program
step 5: test the Peofram


*/

///////////////////////////////////////////////////////////
// Step 1: Understand the problem statement
//          user is going to enter any 2 integers
//          and we have to perform additions
///////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////
//    step 2: Write the algoritom
/*
        START 
            Accept first Number  as No1
            Accept Second Number  as No2
            Create the variable as Ans to store the result
            Perform the addition and store into Ans
            Display the result on the screen
        STOP
        

*/
//
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
//  step 3: Decode the Programming Languge
//          we select c programming
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
//
//step 4: write program
//
//////////////////////////////////////////////////////////////


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

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // BUSINESS LOGIC

    return iAns;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Secound Number : \n");
    scanf("%d",&iValue2);
    

    iResult = Addition(iValue1, iValue2);           

    printf("Addition is : %d\n",iResult);


    return 0;
}