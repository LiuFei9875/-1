#include <stdio.h>

void swap(int *x,int *y);

void swap(int *x, int *y)
{
	int temp;
	
	printf("In swap,����ǰ�� x = %d, y = %d\n", *x ,*y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap,������ x = %d, y = %d\n", *x ,*y);
}

int main()
{
	int x = 3, y= 5;
	
	swap(&x, &y);
	
	return 0;
}
