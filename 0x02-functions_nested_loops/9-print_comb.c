#include "main.h">
/**
 *  main - the function to print out lowercase letters
 *  print_alphabet - a function that prints the alphabet in lowercase
 *  description - the main.c will exlude two letters
 *  return -  Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{	int x  = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

}
