#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to search for.
 *
 * Return: A pointer to the first occurrence of any character from @accept in @s,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept) {
  char *s_ptr, *accept_ptr;

  // Iterate through each character in the source string
  for (s_ptr = s; *s_ptr != '\0'; s_ptr++) {
    // Iterate through each character in the accept string
    for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++) {
      // If a match is found, return the pointer to the current position in the source string
      if (*s_ptr == *accept_ptr) {
	return s_ptr;
      }
    }
  }

  return NULL;  // No match found, return NULL
}
