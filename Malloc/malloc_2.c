#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r,i,j;
	int (*pa)[2];
	
	printf("enter number of rows");
	scanf_s("%d",&r);
	pa=(int(*) [2])malloc(r*sizeof(int [2]));
	for(i=0;i<r;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element\n");
			scanf_s("%d",&pa[i][j]);
		printf("%d::::",&pa[j]);
		}
		
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",pa[i][j]);
		}
	}
	return 0;
}

