#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define PROCESSES 5
#define RESOURCES 3

bool allocateResources(int process, int request[], int available[],
                       int allocation[PROCESSES][RESOURCES]) {
  for (int i = 0; i < RESOURCES; i++) {
    if (request[i] > available[i]) {
      printf("Request denied: Not enough resources available.\n");
      return false;
    }
  }
  for (int i = 0; i < RESOURCES; i++) {
    available[i] -= request[i];
    allocation[process][i] += request[i];
  }
  printf("Request granted.\n");
  return true;
}

int main() {
  int available[RESOURCES] = {10, 5, 7};

  int allocation[PROCESSES][RESOURCES] = {0};
  int request1[RESOURCES] = {3, 2, 2};
  int request2[RESOURCES] = {1, 0, 3};
  allocateResources(1, request1, available, allocation);
  allocateResources(2, request2, available, allocation);

  printf("Current resource allocation: \n");

  for (int i = 0; i < PROCESSES; i++) {
    printf("Process %d: ", i);
    for (int j = 0; j < RESOURCES; j++) {
      printf("%d", allocation[i][j]);
    }
    printf("\n");
  }
  printf("BIDUR KHANAL");
  return 0;
}