/* 
 * str2int.c - a utility function to convert a string to an int
 * See str2int.h for documentation.
 *
 * David Kotz, April 2016, 2017, 2019, 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool str2int(const char string[], int * number)
{
  char nextchar;
  return (sscanf(string, "%d%c", number, &nextchar) == 1);
}
