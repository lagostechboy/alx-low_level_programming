/**
 * _memcpy - Copies a specified number of bytes from source to destination.
 * @dest: Pointer to the destination memory block.
 * @src: Pointer to the source memory block.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory block @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
  unsigned int i;

  for (i = 0; i < n; i++) {
    dest[i] = src[i];
  }

  return dest;
}
