#include <stdio.h>
#include "linked_list.h"

linkedlist_t* init_linkedlist() {
  linkedlist_t* list = (linkedlist_t*)malloc(sizeof(linkedlist_t));
  list->head = NULL;

  return list;
}

void append(linkedlist_t* list, int data) {
  node_t* new_node = (node_t*)malloc(sizeof(node_t));
  new_node->data = data;
  new_node->next = NULL;
  if (list->head == NULL) {
    list->head = new_node;
    return;
  }

  node_t* iter = list->head;
  while (iter != NULL) {
    if (iter->next == NULL) {
      iter->next = new_node;
      return;
    }
    iter = iter->next;
  }
}

void print_list(linkedlist_t* list) {
  if (list == NULL) return;

  node_t* iter = list->head;

  while (iter != NULL) {
    printf("data: %d\n", iter->data);
    iter = iter->next;
  }
}

void free_linkedlist(linkedlist_t *list) {
  node_t* iter = list->head;

  while (iter != NULL) {
    node_t* next = iter->next;
    free(iter);
    iter = next;
  }

  free(list);
}
