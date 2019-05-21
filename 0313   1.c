#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			
				int c = i * j;
				printf("%d*%d=%d\t", i, j, c);
			
			if(i==j){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}