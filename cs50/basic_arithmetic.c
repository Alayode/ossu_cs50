// Understanding the C Language for CS50
// chrisksamuel
// @chrisksamuel



// basic_arithmetic.c

// Simple arithmetic operation on two integers

#include <stdio.h>


int main(void) 
{
    int number_two, number_one, addition, subtraction, multiplication, division, modulo;

    printf(" Enter two numbers: \n");
    // scanf("%d%d" , number_one, number_two);  this is wrong
    scanf("%d%d" , &number_one, &number_two); // this is correct

    addition = number_one + number_two;
    subtraction = number_one - number_two; 
    multiplication = number_one * number_two;
    division = number_one / number_two;
    modulo = number_one % number_two;

    printf(" Addition of number_one and number_two : %d\n", addition);
    printf(" Subtraction of number_one and number_two : %d\n", subtraction);
    printf(" Multiplication of number_one and number_two : %d\n", multiplication);
    printf(" division of number_one and number_two : %d\n", division);
    printf("Modulo of number_one and number_two");


    return 0;
}