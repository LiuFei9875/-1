#include <stdio.h>

int main()
{
	char *p1[5] = {
				"�ñ�ɸı�����",
				"Just do it",
				"һ�н��п���",
				"����ֹ��",
				"�����������"
				 
	};
	int i;
	
	for(i = 0 ; i<5; i++)
	{
		printf("%s\n", p1[i]);
	}
	
	return 0;
 } 
