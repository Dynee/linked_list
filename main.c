#include <stdlib.h>
#include "linked_list.h"

int main() {
  linkedlist_t* list = init_linkedlist();

  append(list, 5);
  append(list, 22);
  append(list, -3);
  append(list, 100);
  append(list, -1);

  print_list(list);

  free_linkedlist(list);

  return EXIT_SUCCESS;
}
