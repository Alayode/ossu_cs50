// Understanding the C Language for CS50
// chrisksamuel
// @chrisksamuel



//Armstrong Numbers

// When checking whether the given number is Armstrong number or not
// Armstrong Number: An n - digit number equal to the sum of the nth powers of its digits.
// Example: (1 ^ 3)  + (5 ^ 3) + (3 ^ 3)= 153


#include <stdio.h>
#include <math.h>

// In C, the "main" function is treated the same as every function, 
// it has a return type (and in some cases accepts inputs via parameters). The only difference is that the main function is "called" by the operating system when the user runs the program. Thus the main function is always the first code executed when a program starts.
// the main function will usually returns a 0 if successful  
// this is the name, in this case: main  will not return anything.
 
        
void main()
{
    // We can write our variable definition this way as well
    // int number, sum = 0, rem = 0, nthPower = 0, digits = 0, temp;

    int number;
    int sum = 0;
    int rem = 0;
    int nthPower = 0;
    int digits = 0;
    int temp;

    // Use printf 
    // This function printf will print the text that is in the parentheses
    // "Enter a number :\n"   "\n" <- means that we will start a newline

    printf(" Enter a number");


    // Use scanf
    // scanf In the C Programming language is just a function
    // that reads formatted data from the standard Input Stream,
    // this program willbe getting this from the keyboard.


    scanf("%d", & number); // the address of number
    temp = number; // the address of the nuber will be added to temp

    // to calculate the number of digits in the number
    while (number != 0) {// as long as number is not 0
        number = number / 10; // assign the number with itself divided by 10
        digits++; // increase digits by one
    }

    // To Check if obtained sum is equal to the original number
    while (number != 0) {
        rem = number % 10;
        nthPower = pow(rem, digits);
        sum = sum + nthPower;
        number = number / 10;
    }





}