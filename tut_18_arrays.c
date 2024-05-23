// here we learn about 1-d and 2-d arrays but they can be of any dimension

#include <stdio.h>

int main(int argc, char const *argv[])
{
//  // This is called declareation and intialization at same time

    // int marks[5] = {5, 6, 2, 5, 4};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The marks of students are: %d", marks[i]);
    //     printf("\n");
    // }


// This is an example of 2-d array
    int marks[2][5] = {{5, 1, 2, 3, 4},
                       {9, 8, 7, 4, 6}}; // left hand side brackets tell about 2 rows and 5 columns in the array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}




// // Way to print array of undefined size 

// #include <stdio.h>

// int main() {
//     // Define an array
//     int arr[5] = {1, 2, 3, 4, 5};
//     size = sizeof(arr) / sizeof(arr[0]);

//     // Print the elements of the array
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
