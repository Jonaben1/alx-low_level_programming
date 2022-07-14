#ifndef _singly_linked_lists_N_
#define _SINGLY_LINKED_LISTS_N_



/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


int _putchar(char c);
size_t list_len(const list_t *h);


#endif
