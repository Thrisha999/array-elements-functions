
#include<stdio.h>
void main()
{
	int a[10],n,i;
	int array(int a[],int n);
	printf("enter the number of elements to be inserted:\n");
	scanf("%d",&n);
	printf("enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	array(a,n);
}
int array (int a[],int n)
{
	int i;
	printf("the array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

