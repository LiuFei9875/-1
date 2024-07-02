#include <stdio.h>

int sum(int n);

int sum(int n)
{
	int result = 0;
	do{
		result+=n;
	}while(n-- > 0);
	
	return result;
}


int main()
{
	int n;
	
	printf("请输入n的值：");
	scanf("%d", &n);
	
	
	printf("结果是：%d\n", sum(n));
	
	return 0;
}
