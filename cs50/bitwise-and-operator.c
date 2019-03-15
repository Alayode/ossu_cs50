/**
 * Bitwise Operator?
 * 
 * @chrisksamuel
 * http://www.ckasj.com
 *
 * Unlike common logical operators (add , multiply and subtract)
 *  which  work with bytes or groups of bytes, bitwise operators can
 * check or set each of the individual bits within a byte. Bitwise operators
 * never cause overflow because the result produced after the bitwise operation
 *  is within the range of possible values for the numeric type involved.
 * 
 * 
 * The bitwise operates used in the C Programming Language
 * are as follows
 * 
 *  - OR (|)Results is true if any of the operands is true.
 *  - AND (&): Result is true only if both operands are true.
 *             It can be used to setup a mask to check the values of certain
 *             Bits.
 *  - XOR (^) Result is true only if both operands are true.
 *             It is used mainly to toggle certain bits. It also helps to swap 
 *              two variables without using a third one.
 * 
 *  - Bitwise Complement or Inversion or NOT (~): Provides the bitwise complement of 
 *      an operand by inverting its value such that all zeroes are turned into ones
 *      and all ones are turned to zeros 
 * 
 * >> (Right-Shift) and << (Left-Shift) Operations: Moves the bits 
 *          the number of positions specified by the second operand 
 *          in the right or left direction. While the right-shift operation
 *          is an arithmetic shift for operands of type int or long
 *          it is a logical shift for operands of uint or ulong. Shigt operators
 *             are used in aligning bits
 * 
 *  ### Order of precedence ###
 *  <--- highest          |       lowest --->
 * 
            ~    << and >>  &   ^    |

 * https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_Operators
 * 
*/


// Bitwise and operator

#include <stdio.h>



void inBinary(unsigned n) 
{ 
    unsigned i; 
    for (i = 1 < 63; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 



int main(void) 
{
    unsigned char unsignedCharacter = 5;
    int bitwise_operator_a = 5;
    int bitwise_operator_b =  7;
    int AND, OR, XOR, NOT, Left_shift, right_shift; 
    // int print_result; // -384583240
    
    AND = bitwise_operator_a & bitwise_operator_b; // 0
    OR = bitwise_operator_a | bitwise_operator_b;

    inBinary(bitwise_operator_a);
    // inBinary(bitwise_operator_b);
    printf("AND | bitwise_operator_a = %d, bitwise_operator_b = %d\n", bitwise_operator_a,bitwise_operator_b);
    printf("OR | bitwise_operator_a + bitwise_operator_b returns %d\n", OR);
    printf("XOR | bitwise_operator_a + bitwise_operator_b returns %d\n", XOR);
    printf("NOT | bitwise_operator_a + bitwise_operator_b returns %d\n", NOT);
    printf("Left_shift | bitwise_operator_a + bitwise_operator_b returns %d\n",Left_shift);
    printf("right_shift| bitwise_operator_a + bitwise_operator_b returns %d\n", right_shift);
    return 0;
}


