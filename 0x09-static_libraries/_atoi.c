/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s) {
  int sign = 1; // Positive by default
  int result = 0;
  int i = 0;

  // Handle leading whitespace
  while (s[i] == ' ') {
    i++;
  }

  // Handle sign if present
  if (s[i] == '-' || s[i] == '+') {
    if (s[i] == '-') {
      sign = -1; // Negative
    }
    i++;
  }

  // Convert digits to integer
  while (s[i] >= '0' && s[i] <= '9') {
    result = result * 10 + (s[i] - '0');
    i++;
  }

  return result * sign;
}
