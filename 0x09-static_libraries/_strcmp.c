/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 *  - Negative value if s1 is less than s2.
 *  - Positive value if s1 is greater than s2.
 *  - Zero if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2) {
  int i = 0;

  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i]) {
      return s1[i] - s2[i];
    }
    i++;
  }

  return s1[i] - s2[i];
}
