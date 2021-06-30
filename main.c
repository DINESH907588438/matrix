#include <stdio.h>
int i,j,k;
int main()
{  int sum=0;
   int arr[1][3][3];
	printf("enter the values in the array: \n");
	for(i=1;i<=1;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("the value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
    }
    printf("printing the values in array: \n");
	for(i=1;i<=1;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
    sum=arr[1][1][1]+arr[1][2][2]+arr[1][3][3];
    printf("%d",sum);
}
