#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly listed list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: poists to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);
void first(void)__attribute__((constructor));

#endif /* LISTS_H */
