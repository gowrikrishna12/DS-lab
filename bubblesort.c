/*
 ============================================================================
 Name        : bubblesort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,temp,lim;
	setbuf(stdout,NULL);
	printf("Enter the limit");
	scanf("%d",&lim);
	int a[lim];
	printf("Enter the elements");
	for(i=0;i<lim;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<lim;i++){
		for(j=i+1;j<lim;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<lim;i++){
		printf("%d ",a[i]);
	}
}
