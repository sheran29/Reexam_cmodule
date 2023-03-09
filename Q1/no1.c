#include<stdio.h>


int main()
{
	int arr[4];
	int n,i;
	printf("enter the array element:\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	int large=arr[0];
	for(i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
		if(arr[i]<arr[j])
		{
			int a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
		}
		}
	}
	printf("sorted array\n");
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nlargest no is:%d \n",arr[0]);
	printf("smallest no is:%d \n",arr[3]);



}


