#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 1000; i < 2001; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) ||( i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}