#include <stdio.h>

int main() {
  int pages[50], frame[10];
  int n, f, i, j;
  int pageFault = 0;
  int index = 0;
  int found;

  printf("Enter page reference string:\n");
  scanf("%d", &n);

  printf("Enter page reference string:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &pages[i]);
  }

  printf("Enter number of frames: ");
  scanf("%d", &f);

  for (i = 0; i < f; i++) {
    frame[i] = -1;
  }

  printf("\nPage\nFrames\n");

  for (i = 0; i < n; i++) {
    found = 0;

    for (j = 0; j < f; j++) {
      if (frame[j] == pages[i]) {
        found = 1;
        break;
      }
    }
    if (found == 0) {
      frame[index] = pages[i];
      index = (index + 1) % f;
      pageFault++;
    }

    printf("%d\t", pages[i]);
    for (j = 0; j < f; j++) {
      if (frame[j] == -1) {
        printf("-");
      } else {
        printf("%d", frame[j]);
      }
    }
    if (found) {
      printf("(Hit)");
    } else {
      printf("(Fault)");
    }
    printf("\n");
  }
  printf("\n Total page Faults= %d\n", pageFault);
  printf("BIDUR KHANAL");
  return 0;
}