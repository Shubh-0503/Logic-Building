#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Size od int %zu\n",sizeof(int));
    printf("Size od char %zu\n",sizeof(char));
    printf("Size od double %zu\n",sizeof(double));
    printf("Size od float %zu\n",sizeof(float));

    printf("Size od SHORT int %zu\n",sizeof(short int));
    printf("Size od long double %zu\n",sizeof(long double));
    printf("Size od long int %zu\n",sizeof(long int));

    return EXIT_SUCCESS;
}