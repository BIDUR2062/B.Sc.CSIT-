#include <stdio.h>

struct Process {
  int processID;
  int arrivalTime;
  int brustTime;
  int WaitingTime;
  int turnaroundTime;
};

void sortByArrivalTime(struct Process processes[], int n) {
  struct Process temp;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (processes[i].arrivalTime > processes[j].arrivalTime) {
        temp = processes[i];
        processes[i] = processes[j];
        processes[j] = temp;
      }
    }
  }
}

void calculateWaitingTime(struct Process processes[], int n) {
  int currentTime = 0;

  processes[0].WaitingTime = 0;
  currentTime = processes[0].arrivalTime + processes[0].brustTime;

  for (int i = 1; i < n; i++) {
    if (currentTime < processes[i].arrivalTime) {
      currentTime = processes[i].arrivalTime;
    }

    processes[i].WaitingTime = currentTime - processes[i].arrivalTime;
    currentTime += processes[i].brustTime;
  }
}

void calculateTurnaroundTime(struct Process processes[], int n) {
  for (int i = 0; i < n; i++) {
    processes[i].turnaroundTime =
        processes[i].WaitingTime + processes[i].brustTime;
  }
}

void calculateAverageTimes(struct Process processes[], int n) {
  int totalWaitingTime = 0;
  int totalTurnaroundTime = 0;

  for (int i = 0; i < n; i++) {
    totalWaitingTime += processes[i].WaitingTime;
    totalTurnaroundTime += processes[i].turnaroundTime;
  }

  float avgWaiting = (float)totalWaitingTime / n;
  float avgTurnaround = (float)totalTurnaroundTime / n;

  printf("Average Waiting Time: %.2f\n", avgWaiting);
  printf("Average Turnaround Time: %.2f\n", avgTurnaround);
}

void printProcessInfo(struct Process processes[], int n) {
  printf("\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n");

  for (int i = 0; i < n; i++) {
    printf("%d\t%d\t%d\t%d\t%d\n", processes[i].processID,
           processes[i].arrivalTime, processes[i].brustTime,
           processes[i].WaitingTime, processes[i].turnaroundTime);
  }
}
int main() {
  int n;
  printf("Enter the number of processes: ");
  scanf("%d", &n);

  struct Process processes[n];

  for (int i = 0; i < n; i++) {
    processes[i].processID = i + 1;
    printf("Enter arrival time and brust time for process %d: ", i + 1);
    scanf("%d%d", &processes[i].arrivalTime, &processes[i].brustTime);
  }
  sortByArrivalTime(processes, n);
  calculateWaitingTime(processes, n);
  calculateTurnaroundTime(processes, n);
  printProcessInfo(processes, n);
  calculateAverageTimes(processes, n);
  printf("BIDUR KHANAL");
  return 0;
}