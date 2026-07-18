#include <stdio.h>

int main() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    float arr[size];
    
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }
    
    float largest = arr[0];
    float second = arr[0];
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }
    
    printf("Second largest number is: %.2f\n", second);
    
    return 0;
}