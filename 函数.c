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
	
	printf("������n��ֵ��");
	scanf("%d", &n);
	
	
	printf("����ǣ�%d\n", sum(n));
	
	return 0;
}
