//  there are four type of arithmetic operators used with pointers (++,--,+,-)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // char a = '4';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-1);
    // printf("%d\n", ptra+1);


    int arr[] = {1,2,3,4,5,6,67};
    printf("Value of at postion 3 of the array is:- %d\n",arr[3]);
    printf("The address of the first element of the array is: %d\n", &arr[0]); // both line 18 and 19 are same and diff 
    printf("The address of the first element of the array is: %d\n", arr); // way of printing the address of a pointer
    printf("The address of the second element of the array is: %d\n", &arr[1]); // both line 20 and 21 are same and diff 
    printf("The address of the second element of the array is: %d\n", arr +1); // way of printing the address of a pointer


    printf("The value at address of the first element of the array is: %d\n", *(&arr[0]));  
    printf("The value at address of the first element of the array is: %d\n", *(arr)); 
    printf("The value at address of the second element of the array is: %d\n", *(&arr[1])); 
    printf("The value at address of the second element of the array is: %d\n", *(arr +1)); 


    return 0;
}