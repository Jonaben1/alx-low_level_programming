#include "main.h"

/**
 *  _strncat - the function that concat two strings
 *  @dest: the first par being tested
 *  @src: rhe second par being tested
 *  Return: Always 0 success
*/

char *_strncat(char *dest, char *src, int n)
           {
               size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
           }
