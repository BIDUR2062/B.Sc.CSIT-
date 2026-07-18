#include <stdio.h> 
float max(float a, float b) { 
return (a > b) ? a : b; 
} 
float min(float a, float b) { 
return (a < b) ? a : b; 
} 
int main() { 
    float A[3] = {0.4, 0.8, 0.9}; // x, y, z 
    float B[3] = {0.1, 0.2, 0.3}; // x, y, z 
 
    float unionSet[3], intersection[3], complement[3]; 
 
    for (int i = 0; i < 3; i++) { 
        unionSet[i] = max(A[i], B[i]); 
        intersection[i] = min(A[i], B[i]); 
        complement[i] = 1.0 - A[i]; 
    } 
 
    printf("Fuzzy Union: "); 
    for (int i = 0; i < 3; i++) 
        printf("%.1f ", unionSet[i]); 
    printf("\n"); 
 
    printf("Fuzzy Intersection: "); 
    for (int i = 0; i < 3; i++) 
        printf("%.1f ", intersection[i]); 
    printf("\n"); 
 
    printf("Fuzzy Complement of A: "); 
    for (int i = 0; i < 3; i++) 
        printf("%.1f ", complement[i]); 
    printf("\n"); 
        printf("BIDUR KHANAL");
 
    return 0; 
}