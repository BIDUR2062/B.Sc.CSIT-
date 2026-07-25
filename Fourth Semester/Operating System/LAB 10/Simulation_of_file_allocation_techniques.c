#include <stdbool.h>
#include <stdio.h>

#define DISK_SIZE 10
int disk[DISK_SIZE] = {0}, i, j;
bool allocate_contiguous(int file_id, int file_size) {
  int start = -1;
  for (i = 0; i <= DISK_SIZE - file_size; i++) {
    bool can_allocate = true;
    for (j = 0; j < file_size; j++) {
      if (disk[i + j] != 0) {
        can_allocate = false;
        break;
      }
    }
    if (can_allocate) {
      start = i;
      break;
    }
  }
  if (start == -1) {
    printf("Cannot allocate file %d. Not enough contiguous space.\n", file_id);
    return false;
  }
  for (i = start; i < start + file_size; i++)
    disk[i] = file_id;
  printf("File %d allocated from block %d to %d.\n", file_id, start,
         start + file_size - 1);
  return true;
}
void deallocate_contiguous(int file_id) {
  for (i = 0; i < DISK_SIZE; i++) {
    if (disk[i] == file_id)
      disk[i] = 0;
  }
  printf("File %d deallocated.\n", file_id);
}
void display_disk() {
  for (i = 0; i < DISK_SIZE; i++)
    printf("%d ", disk[i]);
  printf("\n");
}
int main() {
  allocate_contiguous(1, 10);
  allocate_contiguous(2, 20);
  display_disk();
  deallocate_contiguous(1);
  display_disk();
  allocate_contiguous(3, 5);
  display_disk();
  printf("BIDUR KHANAL");
  return 0;
}