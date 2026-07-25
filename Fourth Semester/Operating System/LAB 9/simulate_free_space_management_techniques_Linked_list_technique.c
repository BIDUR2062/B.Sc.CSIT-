#include <stdio.h>
#include <stdlib.h>

typedef struct FreeBlock {
  int start;
  int size;
  struct FreeBlock *next;
} FreeBlock;

void displayFreeBlocks(FreeBlock *head) {
  FreeBlock *temp = head;

  while (temp != NULL) {
    printf("Start: %d, Size: %d\n", temp->start, temp->size);
    temp = temp->next;
  }
}

int main() {
  FreeBlock *head = (FreeBlock *)malloc(sizeof(FreeBlock));

  head->start = 0;
  head->size = 10;
  head->next = NULL;

  FreeBlock *second = (FreeBlock *)malloc(sizeof(FreeBlock));

  second->start = 20;
  second->size = 15;
  second->next = NULL;

  head->next = second;

  printf("Free Block List:\n");
  displayFreeBlocks(head);

  free(second);
  free(head);
  printf("BIDUR KHANAL");
  return 0;
}