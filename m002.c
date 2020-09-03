/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

int maior(int a,int b,int c)
{
    if((a >= b) && (a >= c))
       return a;
    else
        if ((b >= a) && (b >= c))
        return b;
        else
        return c;

}

int menor(int a,int b,int c)
{
    if((a <= b) && (a <= c))
       return a;
    else
        if ((b <= a) && (b <= c))
        return b;
        else
        return c;

}
int meio(int a,int b,int c)
{
    if((a <= b) && (a >= c))
       return a;
    else
        if ((a <= c) && (a >= b))
            return a;
            else
             if ((b <= a) && (b >= c))
            return b;
            else
            if ((b <= c) && (b >= a))
            return b;
            else
            return c;
}

void sort (int *a, int *b, int *c)
{
    int t, w, z;
    t = maior(*a,*b,*c);
    w = meio(*a,*b,*c);
    z = menor(*a,*b,*c);

    *a = z;
    *b = w;
    *c = t;

}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
