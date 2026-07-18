#include <stdio.h>

int main() {
    int arr[4][3];
    int i, j;
    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 3; j++)
		 {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
	 {
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


