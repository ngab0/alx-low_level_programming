#ifndef _MORE_SINGLY_LINKED_LISTS
#define _MORE_SINGLY_LINKED_LISTS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s- singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: more singly linked lists exercises
 */
 typedef struct listint_s
 {
     int n;
     struct listint_s *next;
 } listint_t;

 int _putchar(char c);
 size_t print_listint(const listint_t *h);

 #endif