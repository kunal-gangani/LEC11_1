/*
Q.2 Write a Program to swap two variables using Pointers.
Output:

*/
#include<stdio.h>
void main(){
	int x,y;
	printf("Enter Value of X: ");
	scanf("%d",&x);
	printf("Enter Value of Y: ");
	scanf("%d",&y);
	printf("\nBefore Swapping: ");
	int *ptr1,*ptr2;
	ptr1=&x;
	ptr2=&y;
	printf("\nX : %d",*ptr1);
	printf("\nY : %d",*ptr2);
	printf("\nAfter Swapping: ");
	if(ptr1>ptr2){
		ptr1=*ptr2;
		ptr2=*ptr1;
	}
	printf("\nX : %d ",*ptr1);
	printf("\nY : %d ",*ptr2);	
}
