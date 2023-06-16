#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be found.
 *
 * Return: Pointer to the beginning of the substring within the string,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
  while (*haystack != '\0') {
    char *h = haystack;
    char *n = needle;

    while (*n != '\0' && *h == *n) {
      h++;
      n++;
    }

    if (*n == '\0') {
      return haystack; // Substring found
    }

    haystack++;
  }

  return NULL; // Substring not found
}
