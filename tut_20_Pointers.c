#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("This is the program to show how pointers work\n");

    int a = 56;
    int *ptra = &a;
    int *ptrb = NULL;
    printf("The address of pointer 'ptra' is %p \n", &ptra); // "%p is format specifier to print address "
    printf("The address of 'a' is %p \n", &a); 
    printf("The value stored in pointer 'ptra' is %p \n", *ptra); 
    printf("The address of 'a' stored in pointer 'ptra' is %p \n", ptra);
    printf("The address of garbage pointer 'ptrb' is %p \n", ptrb);
    printf("The value of 'a' is %d \n", *ptra); 
    printf("The value of 'a' is %d \n", a); 
    return 0;
}
