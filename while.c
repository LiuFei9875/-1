#include <stdio.h>
int main()
{	
	int i, j, sum;
	for (i=1; i<=9; i++)
	{
		for (j =1; j<=9; j++)
		{
			sum = i*j;
			printf("%d==%d * %d\n",sum,i,j);
		}
	}
	
	return 0;
	
}
