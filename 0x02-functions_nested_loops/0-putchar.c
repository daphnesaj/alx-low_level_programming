#include "main.h"
/* More headers go here */

/**
 *main - prints "_putchar"
 *
 * Return: always 0
 */

int main(void)
{
  char word[9] = "_putchar";
  int  i;

  for ( i = 0; i < 8; i++) {
    _putchar(word[i]);
  }
  return (0) ;
}
