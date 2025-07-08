#include <stdio.h>
void main()
{
int limit,i,j,temp,a[50];
printf("Enter the limit:\n");
scanf("%d",&limit);
printf("Enter the elements in the array:\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("Array before insertion sort:\n");
for(i=0;i<limit;i++)
{
printf("%d\t",a[i]);
}
i=1;
while(i<limit){
j=i;
while(a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
i=i+1;
}
printf("\nArray after insertion sort:\n");
for(i=0;i<limit;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
