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
    int a = 0; // Fyrsta tala er null 
    int b = 0;
    int c = 0;
    
    while(c < max) 
    {
        c = a + b; // Next number
        
        if( c == 0 ) 
        { // For the first number 
            c = 1;
        }

        printf("%i, ", c );
        a = b; 
        b = c; 
    }
 
}
