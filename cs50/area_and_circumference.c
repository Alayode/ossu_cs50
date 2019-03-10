// Understanding the C Language for CS50
// chrisksamuel
// @chrisksamuel

// area_and_circumference.c


// To calculate Area and Circumference of a Circle

#include <stdio.h>

int main(void) 
{
    // we set our variables with type float 
    // r - radius
    // a - area
    // c - circumference 
    float r, a, c;
    
    // This function printf will print the text that is in the parentheses
    // "Enter Radius :\n"   "\n" <- means that we will start a newline
    printf("enter radius :\n");

    // scanf In the C Programming language is just a function
    // that reads formatted data from the standard Input Stream,
    // this program willbe getting this from the keyboard.

    scanf("%f", &r); // stores the input in %f and writes to the variable r for our radius

    // We will be storing our constant for PI ~3.14 then multiplying that variable in r twice 
    a = 3.14 * r * r; // formula for Area
    c = 2 * 3.14 * r; // formula for circumference 
    printf(" Area = %f\n circumference = %f\n", a, c); // Finally we print the results tot he screen 
    return 0; // return 0 will terminate the program.
}