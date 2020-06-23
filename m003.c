/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{
  int i;
   float t;
   if (a > 2)
   {
   for(i = a - 1;i > 1; i--)
    {
       t = a % i;
       if (t == 0)
          break;
    }
   }
  if (a == 1)
    return 0;
  else
    if (a == 2)
    return 1;
    else
        if ( t == 0)
            return 0;
        else
            return 1;

}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }


  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));

  return 0;
}
