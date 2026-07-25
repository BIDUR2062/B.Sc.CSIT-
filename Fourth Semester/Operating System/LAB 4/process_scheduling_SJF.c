#include <stdio.h>

int main() {
  int n, i, j, completed = 0, currentTime = 0;
  int at[20], bt[20], wt[20], tat[20], ct[20];
  int visited[20] = {0};
  float totalWT = 0, totalTAT = 0;

  printf("Enter number of processes: ");
  scanf("%d", &n);

  printf("Enter Arrival Time and Brust Time:\n");
  for (i = 0; i < n; i++) {
    printf("Process P%d\n", i + 1);
    printf("Arrival Time: ");
    scanf("%d", &at[i]);
    printf("Brust Time: ");
    scanf("%d", &bt[i]);
  }

  while (completed < n) {
    int shortest = -1;
    int minBT = 9999;

    for (i = 0; i < n; i++) {
      if (at[i] <= currentTime && !visited[i] && bt[i] < minBT) {
        minBT = bt[i];
        shortest = i;
      }
    }
    if (shortest == -1) {
      currentTime++;

    } else {
      ct[shortest] = currentTime + bt[shortest];
      tat[shortest] = ct[shortest] - at[shortest];
      wt[shortest] = tat[shortest] - bt[shortest];

      totalWT += wt[shortest];
      totalTAT += tat[shortest];

      currentTime = ct[shortest];
      visited[shortest] = 1;
      completed++;
    }
  }
  printf(
      "\n------------------------------------------------------------------\n");
  printf("Process\tAT\tBT\tCT\tWT\tTAT\n");
  printf("---------------------------------------------------------------------"
         "\n");

  for (i = 0; i < n; i++) {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], wt[i],
           tat[i]);
  }

  printf("---------------------------------------------------------------------"
         "-\n");
  printf("Average Waiting Time= %.2f\n", totalWT / n);
  printf("Average Turnaround Timme= %.2f\n", totalTAT / n);
  printf("BIDUR KHANAL");
  return 0;
}