/*
Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
Output:
Enter the Size of Array: 5

Enter Array Elements: A[0]: 1
A[1]: 2
A[2]: 3
A[3]: 4
A[4]: 5

Square of Each Element  1  4  9  16  25
*/
#include<stdio.h>
void main(){
	int i,n;
	printf("Enter the Size of Array: ");
	scanf("%d",&n);
	int a[n];
	int *ptr;
	printf("\nEnter Array Elements: ");
	for(i=0;i<n;i++){
		printf("A[%d]: ",i);
		scanf("%d",&a[i]);
	}
	ptr=&a;
	printf("\nSquare of Each Element ");
	for(i=0;i<n;i++){
		printf(" %d ",*(ptr+i)**(ptr+i));
	}
}
