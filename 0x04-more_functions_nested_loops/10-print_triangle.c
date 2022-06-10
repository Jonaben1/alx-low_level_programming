#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int p, o, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 0; o <= (size - 1); o++)
		{
			for (p = 0; p < (size - 1) - o; p++)
			{
				_putchar(' ');
			}
			for (r = 0; r <= o; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
