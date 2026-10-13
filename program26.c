#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sName[30];


    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",sName); // Accept the string with space 

    printf("Wlecome %s \n ",sName);

    return EXIT_SUCCESS;
}