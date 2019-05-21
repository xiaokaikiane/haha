#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 101; i < 201; i++)
	{
		int j = 0;
		for ( j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			if (j == i-1)
				printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}