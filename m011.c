/* m011.c - Count words.

   This program takes the name of an ASCII text file passed as a command
   line argument, and outputs the number of words in this file. A word is
   a sequence of alphabetic characters delimited by blanks. A sample text
   file i011.txt is provided for convenience (should you desire to test with
   another text file, make sure it is in pure ASCII format, not UTF-8 or
   other milti-byte format.

   E.g.

      command line    : m011 i011.txt
      expected output : 98

   Directions:

      Please, edit function wordcount();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

#define USAGE "m011 <filename>\n"

/* Return the number of words in ascii text file 'filename'.*/

int wordcount (char *filename)
{
    FILE *fp;
    int n, i , k;
    n = 0;
    char a[1024];

    fp = fopen(filename, "r");

    while ( fgets(a , 150, fp) != NULL )
     {
       if(a[0] != '\n')
       {
         k = strlen(a);
         for(i=0; i < k ; i++)
         {
             if (a[i] == 32)
                n++;
         }

         n++;
       }
     }
     fclose(fp);

  return n;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  int g;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = wordcount (argv[1]);

  printf ("%d\n", n);

  return 0;
}
