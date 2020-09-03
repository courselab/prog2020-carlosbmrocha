/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
    int a;
    switch(month)
    {
    case 1:
    case 4:
    case 7:
        switch(day % 7)
            {
            case 0:
                a = 2;
                break;
            case 1:
                a = 3;
                break;
            case 2:
                a = 4;
                break;
            case 3:
                a = 5;
                break;
            case 4:
                a = 6;
                break;
            case 5:
                a = 0;
                break;
            case 6:
                a = 1;
                break;
            }
        break;
    case 2:
    case 8:
        switch(day % 7)
            {
            case 0:
                a = 5;
                break;
            case 1:
                a = 6;
                break;
            case 2:
                a = 0;
                break;
            case 3:
                a = 1;
                break;
            case 4:
                a = 2;
                break;
            case 5:
                a = 3;
                break;
            case 6:
                a = 4;
                break;
            }
        break;
    case 3:
    case 11:
        switch(day % 7)
            {
            case 0:
                a = 6;
                break;
            case 1:
                a = 0;
                break;
            case 2:
                a = 1;
                break;
            case 3:
                a = 2;
                break;
            case 4:
                a = 3;
                break;
            case 5:
                a = 4;
                break;
            case 6:
                a = 5;
                break;
            }
        break;
    case 5:
        switch(day % 7)
            {
            case 0:
                a = 4;
                break;
            case 1:
                a = 5;
                break;
            case 2:
                a = 6;
                break;
            case 3:
                a = 0;
                break;
            case 4:
                a = 1;
                break;
            case 5:
                a = 2;
                break;
            case 6:
                a = 3;
                break;
            }
        break;
    case 6:
       switch(day % 7)
            {
            case 0:
                a = 0;
                break;
            case 1:
                a = 1;
                break;
            case 2:
                a = 2;
                break;
            case 3:
                a = 3;
                break;
            case 4:
                a = 4;
                break;
            case 5:
                a = 5;
                break;
            case 6:
                a = 6;
                break;
            }
        break;
    case 9:
    case 12:
        switch(day % 7)
            {
            case 0:
                a = 1;
                break;
            case 1:
                a = 2;
                break;
            case 2:
                a = 3;
                break;
            case 3:
                a = 4;
                break;
            case 4:
                a = 5;
                break;
            case 5:
                a = 6;
                break;
            case 6:
                a = 0;
                break;
            }
        break;
    case 10:
        switch(day % 7)
            {
            case 0:
                a = 3;
                break;
            case 1:
                a = 4;
                break;
            case 2:
                a = 5;
                break;
            case 3:
                a = 6;
                break;
            case 4:
                a = 0;
                break;
            case 5:
                a = 1;
                break;
            case 6:
                a = 2;
                break;
            }
        break;
    }
  return a;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }

  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);

  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }

  return 0;
}
