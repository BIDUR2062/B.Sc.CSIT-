#include <stdio.h>

#define TOTAL_BLOCKS 32

void displayBitVector(int bitVector[]) {
  for (int i = 0; i < TOTAL_BLOCKS; i++) {
    printf("%d ", bitVector[i]);
  }
  printf("\n");
}

int main() {
  int bitVector[TOTAL_BLOCKS] = {0};

  bitVector[3] = 1;
  bitVector[7] = 1;
  bitVector[12] = 1;

  printf("Bit Vector Representation:\n");
  displayBitVector(bitVector);
  printf("BIDUR KHANAL");
  return 0;
}