#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,c;
	int cl[3];
	int *ap[3];
	
	for(i=0;i<3;i++)
	{
		printf("enter number of column");
		scanf("%d",&c);
		cl[i]=c;
		ap[i]=(int *)malloc(c*sizeof(int));
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<cl[i];j++)
		{
			printf("enter element");
			scanf("%d",&ap[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<cl[i];j++)
		{
			printf("elements are :");
			printf("%d",ap[i][j]);
	printf("\n");
		}
		printf("\n");
	}

	return 0;
}
