/**
 * _strncat - Concatenates two strings, appending at most n characters from the source string.
 * @dest: The destination string to append to.
 * @src: The source string to append from.
 * @n: The maximum number of characters to append.
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n) {
  int dest_len = 0;
  int i;

  // Find the length of the destination string
  while (dest[dest_len] != '\0') {
    dest_len++;
  }

  // Append at most n characters from the source string to the destination string
  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[dest_len] = src[i];
    dest_len++;
  }

  dest[dest_len] = '\0';  // Add null terminator at the end

  return dest;  // Return the modified destination string
}
