/**
 * _strlen - Computes the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s) {

  int i = 0;
  char *s_ptr = s;

  // iterate through the string
  while (*s_ptr != '\0') {
    i++;
    s_ptr++;
  }
  return i;
}
