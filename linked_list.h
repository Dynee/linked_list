#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct node {
  int data;
  struct node* next;
} node_t;

typedef struct linkedlist {
  node_t* head;
} linkedlist_t;

linkedlist_t* init_linkedlist();

void print_list(linkedlist_t* list);

void append(linkedlist_t* list, int data);

void free_linkedlist(linkedlist_t* list);

#endif
