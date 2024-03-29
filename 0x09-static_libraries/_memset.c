/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Pointer to the memory block to fill.
 * @b: Value to be set.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory block @s.
 */
char *_memset(char *s, char b, unsigned int n) {
  unsigned int i;

  for (i = 0; i < n; i++) {
    s[i] = b;
  }

  return s;
}
