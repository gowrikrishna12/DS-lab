/*
 ============================================================================
 Name        : binarysearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,temp,lim,flag=0,left,right,middle,x;
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
		printf("\nEnter the element to be searched:");
		scanf("%d",&x);
		left=0;
		right=lim-1;
		middle=(left+right)/2;
		while(left<=right){
			if(x<a[middle]){
				right=middle-1;
				middle=(left+right)/2;
			}
			else if(x>a[middle]){
				left=middle+1;
				middle=(left+right)/2;
			}
			else if(x==a[middle]){
				flag++;
				break;
			}
		}
		if(flag>0){
			printf("The element is present in the array");
		}
		else{
			printf("The element is not present in the array");
		}
	return EXIT_SUCCESS;
}
