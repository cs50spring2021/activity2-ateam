/* 
 * str2int.h - a utility function to convert a string into an int
 * Safely read a line of input into `buf` (with room for `len` chars).
 *
 * David Kotz, April 2016, 2017, 2019, 2021
 */

#ifndef __STR2INT_H__
#define __STR2INT_H__

/* ***************** str2int ********************** */
/*
 * Convert a string to an integer, returning that integer.
 * Returns true if successful, or false if any error.
 * It is an error if there is any additional character beyond the integer.
 * Assumes number is a valid pointer.
 */
  // The following is one of my favorite tricks.
  // We use sscanf() to parse a number, expecting there to be no following
  // character ... but if there is, the input is invalid.
  // For example, 1234x will be invalid, as would 12.34 or just x.

extern bool str2int(const char string[], int * number);

#endif //  __STR2INT_H__
