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
            Display the result  on the screen
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

#include<stdio.h>

int main()
{

    int iValue1, iValue2, iResult;
    
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Secound Number : \n");
    scanf("%d",&iValue2);
    

    iResult = iValue1 + iValue2;           // BUSINESS LOGIC

    printf("%d\n",iResult);


    return 0;
}