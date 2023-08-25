/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src) {
  char *dest_ptr = dest;

  // Move the pointer to the end of the destination string
  while (*dest_ptr != '\0') {
    dest_ptr++;
  }

  // Copy each character from the source string to the end of the destination string
  while (*src != '\0') {
    *dest_ptr = *src;
    dest_ptr++;
    src++;
  }

  *dest_ptr = '\0';  // Add null terminator to the resulting string

  return dest;
}
