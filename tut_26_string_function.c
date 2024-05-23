#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "Hello";
    char s2[] = "World";
    char s3[30];

    printf("The compare for string s1 and s2 is: %d\n",strcmp(s2,s1));
    printf("The compare for string s1 and s2 is: %d\n",strcmp(s1,s2));

    puts(strcat(s1,s2));

    strcpy(s3, s1);
    printf("%s",s3);

    printf("\nThe length of string s1 is: %d\n",strlen(s1));
    printf("The length of string s2 is: %d\n",strlen(s2));

    printf("The reverse string of s1 is: \n");
    puts(strrev(s1));
    printf("The reverse string of s2 is: \n");
    puts(strrev(s2));

    return 0;
}



// /*Quiz = Allow users to enter two strings and then add both of them with an middle
//   string saying "is a friend of" */

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char inp1[50];
//     char inp2[50];
//     char add1[] = " is a friend of ";
//     char cpy_1[50];

//     printf("Enter the first string: ");
//     gets(inp1);
//     printf("\nEnter the second string: ");
//     gets(inp2);

//     strcpy(cpy_1, strcat(inp1, add1));
//     puts(strcat(cpy_1, inp2));

//     return 0;
// }
