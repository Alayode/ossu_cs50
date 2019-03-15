// Understanding the C Language for CS50
// chrisksamuel
// @chrisksamuel


// Binary Search Algorithm
// Data Structure Array
// Worst-Case Performance O(log n)
// Algorithm Type: Search Algorithm

// In computer science, binary search , also known as half-interval search, logarithmic search
// or binary chop, is a search algorithm that finds the position of a target value within a sorted 
// array

// Checkout youtube https://www.youtube.com/watch?v=P3YID7liBug


/* If x in into array return 0, else 1 */
/* 
 * A function with 4 params:
 * int[] = array of elements
 * int = wanted number
 * int = start index
 * int = end index
 *
 * returns 0 or 1
*/

#include <stdio.h>



// Understanding the C Language for CS50
// chrisksamuel
// @chrisksamuel


// Binary Search Algorithm
// Data Structure Array
// Worst-Case Performance O(log n)
// Algorithm Type: Search Algorithm

// In computer science, binary search , also known as half-interval search, logarithmic search
// or binary chop, is a search algorithm that finds the position of a target value within a sorted 
// array

// Checkout youtube https://www.youtube.com/watch?v=P3YID7liBug


/* If x in into array return 0, else 1 */
/* 
 * A function with 4 params:
 * int[] = array of elements
 * int = wanted number
 * int = start index
 * int = end index
 *
 * returns 0 or 1
*/

#include <stdio.h>


int binarySearch(int[], int, int, int);

int main() {

    int arr[] = {5, 15, 25, 32, 56, 89};

    /* check length of array */

    int size_of_array = sizeof(arr) / sizeof(int);

    /*  Check if 24 is into arr */
    printf("%d\n", binarySearch(arr, 5, 0, size_of_array - 1));

    /*Check if 118 is into arr*/
    printf("%d\n", binarySearch(arr, 15, 0, size_of_array - 1)); 

    return 0;

}

/***
 * 
 *  Since we are using the binary Search in the function above (invocation).
 *  We will define this function at the below  
 *   
  */ 

int binarySearch(int array[], int number, int start, int end) {
    /* If the start is equals to end then return the array element at positions Start Index  */

if (start >= end ) {
    return array[start] == number ? 0 : 1;
}

int tmp = (int) end / 2;
  /**
   * divide array lenght in half    
   * If the number is greater than element in half, do search by start to tmp
   * else search by tmp to end 
   */

  if (number == array[tmp]) {
      return 0;

  } else if (number > array[tmp]) {
        return binarySearch(array, number, start, tmp);
  } else {
        return binarySearch(array, number, tmp, end);
  }


}


