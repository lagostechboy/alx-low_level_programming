/*
 * File: _strspn.c
 * ----------------
 * This file contains the implementation of the _strspn function.
 * The _strspn function calculates the length of the initial segment of a string
 * that consists only of characters from another string.
 */

/**
 * Function: _strspn
 * -----------------
 * Calculates the length of the initial segment of the string 's'
 * that consists only of characters from the 'accept' string.
 *
 * s: The string to be checked.
 * accept: The string containing the characters to be accepted.
 *
 * Returns: The length of the initial segment of 's' that matches the characters in 'accept'.
 */
unsigned int _strspn(char *s, char *accept) {
  unsigned int count = 0;
  int i, j;
  int found;

  for (i = 0; s[i] != '\0'; i++) {
    found = 0;
    for (j = 0; accept[j] != '\0'; j++) {
      if (s[i] == accept[j]) {
	found = 1;
	break;
      }
    }
    if (found == 0) {
      break;
    }
    count++;
  }

  return count;
}
