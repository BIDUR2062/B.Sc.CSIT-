#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int requests[100], n;
  int head, disk_size;
  int direction;
  int total_seek = 0;
  int i, pos;

  printf("Enter number of disk requests: ");
  scanf("%d", &n);

  printf("Enter request queue:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &requests[i]);
  }

  printf("Enter initial head position: ");
  scanf("%d", &head);

  printf("Enter total disk size (last track number): ");
  scanf("%d", &disk_size);

  printf("Enter direction (0 = Left, 1 = Right): ");
  scanf("%d", &direction);

  sort(requests, n);

  pos = 0;
  while (pos < n && requests[pos] < head) {
    pos++;
  }
  pos++;

  printf("\nSeek Sequence: %d", head);

  if (direction == 1) {

    for (i = pos; i < n; i++) {
      total_seek += abs(head - requests[i]);
      head = requests[i];
      printf(" -> %d", head);
    }

    total_seek += abs(head - disk_size);
    head = disk_size;
    printf(" -> %d", head);

    for (i = pos - 1; i >= 0; i--) {
      total_seek += abs(head - requests[i]);
      head = requests[i];
      printf(" -> %d", head);
    }
  } else {

    for (i = pos - 1; i >= 0; i--) {
      total_seek += abs(head - requests[i]);
      head = requests[i];
      printf(" -> %d", head);
    }

    total_seek += abs(head - 0);
    head = 0;
    printf(" -> %d", head);

    for (i = pos; i < n; i++) {
      total_seek += abs(head - requests[i]);
      head = requests[i];
      printf(" -> %d", head);
    }
  }

  printf("\n\nTotal Seek Time = %d\n", total_seek);
  printf("BIDUR KHANAL");

  return 0;
}