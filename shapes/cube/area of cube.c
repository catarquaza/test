#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    float width;
    float height;
    float length;
} rectangle;


int main (void)
{
    rectangle rect1;

    // prompt user for what to do
    printf ("enter width then hit enter then enter height then enter then enter length to find area of a cube \n");

    // get width from user and convert from a string to an integer
    char inputw [20];
    gets (inputw);
    rect1.width = atof(inputw);
 
    // get height from user and convert from a string to an integer
    char inputh [20];
    gets (inputh);
    rect1.height = atof(inputh);

    // get lenght from user and convert from a string to an integer
    char inputl [20];
    gets (inputl);
    rect1.length = atof(inputl);

    // calculate the area and print it out
    float product = rect1.height * rect1.width * 2 + rect1.height * rect1.length * 2 + rect1.width * rect1.length * 2;
    printf ("%.2f\n",product);
}


