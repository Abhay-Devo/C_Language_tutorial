/*Practice problem 1.
  Write a program to calculate area
  of rectangle.
  a. Using hardcode inputs.
  b. Using user-defined inputs.*/

// Using hardcoded inputs
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int l = 6;
//     int b = 7;
//     int sum = l * b;
//     printf("The area of the given recatangle is: %d", sum);
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------
// Using user-defined inputs

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int l, b;
//     printf("Enter length of given rectangle to find its area:");
//     scanf("%d", &l);
//     printf("Enter breadth of given rectangle to find its area:");
//     scanf("%d", &b);
//     int sum = l * b;
//     printf("The area of the given rectangle is: %d", sum);
//     return 0;
// }

// ************************************************************************************************************************

/*Practice problem 2.
  Calculate the area of a circle and modify the same
  program to calculate the volume of a cylinder given
  its radius and height. */


// #include <stdio.h>
// #define PIE 3.14

// int main(int argc, char const *argv[])
// {
//     int check;
//     float r, h;
//     // printf("Enter the radius:");
//     // scanf("%f", &r);
//     printf("Enter 1 or 2 to calc circle area or cylinder area respectively:");
//     scanf("%d", &check);
//     switch (check)
//     {
//     case 1:
//         printf("Enter the radius of the system:");
//         scanf("%f", &r);
//         printf("The area of the circle is: %.2f", PIE * r * r);
//         // printf("The area of given circle is:%.2f", circle);
//         break;

//     case 2:
//         printf("Enter the radius of the system:");
//         scanf("%f", &r);
//         printf("Enter the height to calculate the area of cylinder:");
//         scanf("%f", &h);
//         printf("The area of given cylinder is:%.2f", PIE * r * r * h);
//         break;

//     default:
//         printf("Invalid choice, Please enter an valid input!!!");
//         break;
//     }

//     return 0;
// }

// ************************************************************************************************************************
/*Practice problem 3.
  Write a program to convert Celcius degree to farenheit. */


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     float c, f;
//     printf("Enter the temperature into celcius to convert it into farenheit:");
//     scanf("%f", &c);
//     f = (c * 9 / 5) + 32;
//     printf("The temperature in farenheit would be: %.2f farenheit", f);
//     return 0;
// }

// ************************************************************************************************************************

/*Practice problem 4.
  Write a program to calculate simple interest for a set of
  value representing principal, no. of years and rate of interest. */


//   #include <stdio.h>
  
//   int main(int argc, char const *argv[])
//   {
//     float p, r, t, si;
//     printf("Enter the principal amount on which you want to calculate the Interest:");
//     scanf("%f",&p);
//     printf("Enter the rate of interest:");
//     scanf("%f",&r);
//     printf("Enter the time period in years:");
//     scanf("%f",&t);
//     si = (p * r * t) / 100;
//     printf("The simple interest for the given principal, rate and time period is: %.2f",si);
//     return 0;
//   }

//   Practice problem set 1 is solved............................................................................