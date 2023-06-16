/**
 * _strncpy - Copies a specified number of characters from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n) {
  int i;

  // Copy each character from source to destination, up to the specified limit
  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }

  // If the source string has fewer characters than n, fill the remaining with null terminators
  for ( ; i < n; i++) {
    dest[i] = '\0';
  }

  return dest;
}
