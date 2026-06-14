#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr;
int n,i;
printf("Enter the number of Elements: ");
scanf("%d",&n);
arr=(int*)calloc(n,sizeof (int));
if(arr==NULL){
printf("Memory allocation failed");
return 1;
}
for(i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}
free(arr);
printf("\nBidur Khanal\n");
return 0;
} 