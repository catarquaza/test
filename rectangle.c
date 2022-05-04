#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    // prompt user for what to do
    printf ("enter width then hit enter then enter height to find area of a square \n");

    // get width from user and convert from a string to an integer
    char inputw [20];
    gets (inputw);
    int w = atoi(inputw);
 
    // get height from user and convert from a string to an integer
    char inputh [20];
    gets (inputh);
    int h = atoi(inputh);

    // calculate the area and print it out
    int product = h * w;
    printf ("%d\n",product);
}


