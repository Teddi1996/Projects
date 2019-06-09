/** 
 * C program that calculates 
 * fibonacci series
 *
 * The program takes in one argument
 * which is the highest fibonacci number
 * to calculate up to
 */

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv) 
{
    int max = atoi(argv[1]);
    int a = 0; // 1st one we keep
    int b = 0; // 2nd one we keep
    int c = 0; // Newest number
    
    while(c < max) 
    {
        c = a + b; // Next number
        
        if( c == 0 ) 
        { // For the first number 
            c = 1;
        }

        // Print results
        printf("%i, ", c );

        // Logic
        a = b; 
        b = c; 
    }
 
}
