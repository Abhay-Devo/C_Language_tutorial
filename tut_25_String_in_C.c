/*   Note string in c is not a datatype it is a array of characters which
     is terminatied by another character null (\0). */

#include <stdio.h>

void printstr(char str_example[]) // This function is custom built
{
    printf("Printing the string using custom made func:\n");
    int i = 0;
    while (str_example[i] != '\0')
    {
        printf("%c", str_example[i]);
        i++;
    }
    printf("\n");
}

char user_input_str() // This func uses pre-built function in stdio library (gets()).
{
    // It takes string from user.
    printf("Getting string from user using gets func: \n");
    char user_str[50];
    printf("Enter the string: ");
    gets(user_str); // Cannot get the string from user through scanf becoz it will not read the space in between.
}

int main(int argc, char const *argv[])
{
    char str_example[] = {'a', 'b', 'h', 'a', 'y', '\0'};
    printstr(str_example); // This function is custom built

    // user_input_str();    // This func uses pre-built function in stdio library (gets()).

    char str[] = "abhay";
    printf("Printing the string using printf: \n%s\n", str);

    printf("Printing the string using puts func: \n");
    puts(str); // Puts is a pre-built funciton in stdio library that prints string.

    return 0;
}
