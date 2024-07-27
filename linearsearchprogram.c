/*
 ============================================================================
 Name        : linearsearchprogram.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int flag=0,lim,x;
		setbuf(stdout,NULL);
		printf("Enter the limit:");
		scanf("%d",&lim);
		int a[lim];
		printf("Enter the numbers:");
		for(int i=0;i<lim;i++){
			scanf("%d",&a[i]);
		}
		printf("Enter the element to be searched:");
		scanf("%d",&x);
		for(int i=0;i<lim;i++){
			if(a[i]==x){
				flag++;
				break;
			}
		}
		if(flag==1){
			printf("The element is present in the array\n");
		}
		else{
			printf("The element is not present in the array\n");
		}
	return EXIT_SUCCESS;
}
