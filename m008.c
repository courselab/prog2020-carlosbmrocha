/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name
   form into LAST-first-middle form. */

void lastname (char *c)
{
    char a[MAX];
    char b[MAX];
    int i, x, j, n;

    strcpy(a, c);
    n = strlen(a);

    i = 0;
    while ( a[i] != 0)
    {
        if (a[i] == ' ')
            x = i;
        i++;
    }
    for (j = x + 1; j < n ; j++)
    {
        if ( (a[j] <=122) && (a[j] >= 97) )
            b[j - x - 1]= a[j] - 32;
            else
            b[j - x - 1] = a[j];
    }

    b[n - x - 2]= ',';
    b[n - x - 1]= ' ';

    for (j= 0; j < x; j++)
     b[n - x + j]=a[j];

     b[n] = 0;


    strcpy(c,b);

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);

  lastname (name);

  printf ("%s\n", name);

  return 0;
}
