#include "arvoreb.h"
#include <stdio.h>

int main() {
  int item, ch;
  Tree *t;
  inicializeTree(t);
  insertion(t->root, 8);
  insertion(t->root, 9);
  insertion(t->root, 10);
  insertion(t->root, 11);
  insertion(t->root, 15);
  insertion(t->root, 16);
  insertion(t->root, 17);
  insertion(t->root, 18);
  insertion(t->root, 20);
  insertion(t->root, 23);
  traversal(t->root);
  printf("\nprintando %d", t->root->item);

  //delete(20, t->root);
  //printf("\n");
  //traversal(t->root);

  return 0;
}
