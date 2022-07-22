#include "main.h"
/* More headers go here*/

/**
 * _islower - check if a character is a lowercase
 *
 * c: the character that is to be checked
 *
 * Return: int
 */


int _islower(int c)
{
  char l;

  for (l = 'a'; l <= 'z'; l++)
  {
    if (l == c)
      return (1);
  }

  return (0);
}
