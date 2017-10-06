/*
 Program to convert a decimal number inputted by the user into
 its representation in radix of the second number inputted by the user
*/

//  Abraham Zakharov
//  Unix Login ID: ay451227
//  Lab Instructor: Areeb Khan
//  Lab: Friday @ 1:40PM - 2:35PM

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //The two main ints we will be using, the base number, and the radix
    int number;
    int radix;
    
    //Ask the user to input their choice of two numbers
    printf("Please input two numbers.\n");
    fflush(stdout);
    
    //Take the two number inputs and assigns them to number and radix
    scanf ("%d%d", &number, &radix);
    
    //Counter for how many times we are dividing the number by the radix
    char count = 0;
    //A set of base characters because we cannot use numbers past 9 so we use letters to substitute
    char baseChars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //A character array for the result
    char result [50];
    
    //A while loop until our first number reaches 0
    while (number != 0){
        /*We take the modulus (remainder) and put it into our result array in terms of our base characters, then we divide the number by the radix, and increment the count by one*/
        result[count] = baseChars[number%radix];
        number = number / radix;
        if (number == 0){
            break;
        }
        count ++;
    }
    
    //Print the result reversed to get our final answer
    printf("Result: ");
    while (count!=-1){
        printf("%c", result[count]);
        count--;
    }
    printf("\n");
    
   
    
    return 0;
}
