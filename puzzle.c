#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int test_val (void);
int sr (int num);

int main (void)
{
    for(;;)
    {
        if(test_val() == 1)
        {
            break;

        }
    }
}


int test_val (void)
{
    char primetest[20];

    gets (primetest);

    if (strcmp(primetest, "stop") == 0)
    {
        return 1;
    }
    int isitprime = atoi(primetest);

  //  printf("%d", isitprime);
    bool isprime = true;
    int square_root = sr(isitprime);
    
    for (int primetest = 2; primetest <= square_root; primetest++)
    {
        if (isitprime %primetest == 0)
        {
            isprime = false;
        }
        
    }
    if (isprime == false)
    {
        printf ("no\n");
    }
    else
    {
        printf ("yes\n");
    }

    return 0;
}

int sr (int num)
{
    int square = 1;
   while (square*square < num )
   {
       square++;
   }
   printf ("%d\n", square);
    return square;
}