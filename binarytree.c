#include <stdio.h>
void main()
{
int pos,limit,i,n;
printf("Enter the number of nodes:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the binary tree:");
for(i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the position of node:");
scanf("%d",&pos);
if(pos/2==0)
printf("No parent\n");
else
printf("Parent of %d =%d\n",arr[pos],arr[pos/2]);
if(2*pos>n)
printf("No left child\n");
else
printf("Left child of %d =%d\n",arr[pos],arr[2*pos]);
if((2*pos)+1>n)
printf("No right child\n");
else
printf("Right child of %d =%d\n",arr[pos],arr[(2*pos)+1]);
}
