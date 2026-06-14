#include<stdio.h>

int main(){
int a[50],n,i,j,min,temp;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter %d elements:\n",n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){
min=i;

for(j=i+1;j<n;j++){
if(a[j]<a[min]){
min=j;
}
}

if(min!=i){
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}

printf("Sorted array in ascending order:\n");

for(i=0;i<n;i++){
printf("%d ",a[i]);
}

printf("\nBIDUR KHANAL\n");

return 0;
}