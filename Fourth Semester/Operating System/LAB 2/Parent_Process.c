#include <stdio.h>
#include <windows.h>

int main() {
  STARTUPINFO si;
  PROCESS_INFORMATION pi;
  ZeroMemory(&si, sizeof(si));
  si.cb = sizeof(si);
  ZeroMemory(&pi, sizeof(pi));

  if (!CreateProcess(NULL, "child_process.exe", NULL, NULL, FALSE, 0, NULL,
                     NULL, &si, &pi))

  {
    fprintf(stderr, "CreateProcess failed: %d\n", GetLastError());
    return 1;
  }
  printf("Parent process: PID=%ld\n", GetCurrentProcessId());
  printf("Child process: PID=%ld\n", pi.dwProcessId);
  WaitForSingleObject(pi.hProcess, INFINITE);
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
  return 0;
}