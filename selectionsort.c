/*
 ============================================================================
 Name        : selectionsort.c
 Author      : Gowrikrishna
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
setbuf(stdout,NULL);
int temp,i,j,lim,min_index;
printf("Enter the limit:");
scanf("%d",&lim);
int a[lim];
printf("Enter the elements:");
for(i=0;i<lim;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<lim-1;i++){
	min_index=i;
for(j=i+1;j<lim;j++){
	if(a[j]<a[min_index]){
		min_index=j;
		temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	}
}
}
printf("Sorted array:\n");
for(i=0;i<lim;i++){
	printf("%d ",a[i]);
}
	return EXIT_SUCCESS;
}
