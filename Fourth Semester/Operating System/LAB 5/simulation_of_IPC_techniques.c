#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
  const char *shared_mem_name = "SharedMemoryExample";
  const char *message = "Hello from parent process";

  char buffer[100];
  HANDLE hMapFile;
  LPVOID pBuf;

  hMapFile = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0,
                               256, shared_mem_name);

  if (hMapFile == NULL) {
    fprintf(stderr, "Could not create file mapping object (%d).\n",
            GetLastError());
    return 1;
  }
  pBuf = MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 256);
  if (pBuf == NULL) {
    fprintf(stderr, "Could not create file mapping object (%d).\n",
            GetLastError());
    CloseHandle(hMapFile);
    return 1;
  }
  CopyMemory(pBuf, message, strlen(message) + 1);
  printf("Parent Wrote to shared memory: %s\n", (char *)pBuf);
  UnmapViewOfFile(pBuf);
  CloseHandle(hMapFile);
  printf("BIDUR KHANAL");

  return 0;
}