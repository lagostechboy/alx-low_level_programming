/**
 * _isalpha - Checks whether a character is an alphabetic letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    return 1;  // Alphabetic letter
  } else {
    return 0;  // Not an alphabetic letter
  }
}
