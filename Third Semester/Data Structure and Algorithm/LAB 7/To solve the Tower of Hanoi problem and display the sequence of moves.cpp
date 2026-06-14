#include<stdio.h>
void towerOfHanoi(int n,char source,char target,char auxiliary){
if(n==1){
printf("Move disk 1 from %c to %c\n",source,target);
return;
}
towerOfHanoi(n-1,source,auxiliary,target);
printf("Move disk %d from %c to %c\n",n,source,target);
towerOfHanoi(n-1,auxiliary,target,source);
}
int main(){
int n;
printf("Enter number of disks: ");
scanf("%d",&n);
printf("Sequence of moves for %d disks:\n",n);
towerOfHanoi(n,'A','C','B');
printf("\nBIDUR KHANAL\n");
return 0;
}