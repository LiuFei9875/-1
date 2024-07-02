#include <stdio.h>

int main()
{
	char *p1[5] = {
				"让变成改变世界",
				"Just do it",
				"一切皆有可能",
				"永不止步",
				"刘霏和曾亦佳"
				 
	};
	int i;
	
	for(i = 0 ; i<5; i++)
	{
		printf("%s\n", p1[i]);
	}
	
	return 0;
 } 
