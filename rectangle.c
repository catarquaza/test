#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    printf ("enter 2 numbers with , to get area \n");
    char inputw [20];
    gets (inputw);
    printf ("%s\n",inputw);
    int w = atoi(inputw);
    char inputh [20];
    gets (inputh);
    printf (inputh);
    int h = atoi(inputh);
}
