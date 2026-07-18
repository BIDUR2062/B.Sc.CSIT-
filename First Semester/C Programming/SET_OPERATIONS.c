#include <stdio.h> 
 
void printSet(int set[], int size) { 
    for (int i = 0; i < size; i++) 
        printf("%d ", set[i]); 
    printf("\n"); 
} 
 
int isMember(int set[], int size, int elem) { 
    for (int i = 0; i < size; i++) 
        if (set[i] == elem) 
            return 1; 
    return 0; 
} 
 
int main() { 
    int A[] = {6, 7, 8}; 
    int B[] = {1, 5, 9}; 
    int unionSet[10], intersection[10], difference[10]; 
    int uSize = 0, iSize = 0, dSize = 0; 
 
  
    for (int i = 0; i < 3; i++) 
        unionSet[uSize++] = A[i]; 
    for (int i = 0; i < 3; i++) 
        if (!isMember(A, 3, B[i])) 
            unionSet[uSize++] = B[i]; 
 
 
    for (int i = 0; i < 3; i++) 
        if (isMember(B, 3, A[i])) 
            intersection[iSize++] = A[i]; 
 

    for (int i = 0; i < 3; i++) 
        if (!isMember(B, 3, A[i])) 
            difference[dSize++] = A[i]; 
 
    printf("Union: "); 
    printSet(unionSet, uSize); 
 
    printf("Intersection: "); 
    printSet(intersection, iSize); 
 
    printf("Difference (A - B): "); 
    printSet(difference, dSize); 
 
    printf("Cartesian Product:\n"); 
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            printf("(%d,%d) ", A[i], B[j]); 
    printf("\n"); 
    
 
    return 0; 
}