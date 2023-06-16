/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcpy(char *dest, char *src) {
  char *dest_ptr = dest;

  // Copy each character from source to destination, including the null terminator
  while (*src != '\0') {
    *dest_ptr = *src;
    dest_ptr++;
    src++;
  }

  *dest_ptr = '\0';  // Add null terminator to the resulting string

  return dest;
}
