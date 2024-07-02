#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入a和b的值");
	scanf("%d %d", &a,&b); 
	if(a!=b)
	{
			if(a>b)
		{
			printf("%d >%d\n", a,b);
		}
		else
		{
			printf("%d<%d\n", a,b);
		 } 
	}
		 else
		 {
		 	printf("%d=%d\n",a,b);
		 }
	

	 return 0;
 } 
