/* m004.c - Binary to decimal.

   This program takes a string read as a command line argument and,
   interpreting it as a positive binary integer, outputs its
   corresponding value in decimal base.


   E.g.

      command line    : m004 0011
      expected output : 3

   Directions:

      Please, edit function decimal();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 30


/* Return the value in decimal base of the string b, interpreted
   as the a positive binary number. If the string contains any
   characters other than '1's and '0's, truncate the string
   right before the spurious character (eg. truncate 110x001
   into 110); an empty string means zero. */

 int pot (int b) // a elevado a b
{
    int i;
    int p;
    p = 1;
    if (b > 0)
    {
    for (i = 1; i <= b; i++)
       p = p*2;
    }
    else
        p = 1;

    return p;
}

int decimal (char *b)
{

  int n;
    int i;
    int t;
    int k;
    char c[max];

    k = 0;
    n = strlen (b);
    for (i = 0;i <= n-1;i++)
    {

        if ((b[i] != '1') && (b[i] != '0'))
            break;
        k += 1;
    }
    strncpy(c, b , k);
    c[k + 1]='\0';


    t = 0;
    for(i = k - 1; i >= 0; i--)
    {
        if ( c[i] == '1' )
        t = t + pot(k - 1 - i);
    }
    return t;

}

#define USAGE "m004 <string>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = decimal (argv[1]);

  printf ("%d\n", n);

  return 0;
}
