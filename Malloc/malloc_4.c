#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,r,c;
	int **p;
	int *cl;

	printf("enter rows");
	scanf("%d",&r);
	
	p=(int**)malloc(r*sizeof(int));
	cl=(int*)malloc(r*sizeof(int));

	for(i=0;i<3;i++)
	{
		printf("enter number of column");
		scanf("%d",&c);
		cl[i]=c;
		p[i]=(int *)malloc(c*sizeof(int));
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<cl[i];j++)
		{
			printf("enter element");
			scanf("%d",&p[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<cl[i];j++)
		{
			printf("elements are :");
			printf("%d",p[i][j]);
	printf("\n");
		}
		printf("\n");
	}

	return 0;
}
