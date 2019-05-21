#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
	int A[5] = {0,1,2,3,4};
	int B[5] = {10,11,12,13,14};
	int c;
	for (int i = 0; i < 5; i++)
	{
		c = A[i];
		A[i] = B[i];
		B[i] = c;
	}
	printf("A:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("B:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
 }
 */

/*
int main()
{
	double temp1=0, temp2=0;
	for (double i = 1; i < 100; i = i + 2)
	{
		temp1 = temp1 + 1 / i;
	}
	for (double i = 2; i < 101; i = i + 2)
	{
		temp2 = temp2 + 1 / i;
	}
	printf("最终值为：%f", temp1 - temp2);
	system("pause");
	return 0;
}
*/

int main()
{
	int flag1 = 0;
	int flag2 = 0;
	for (int i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			flag1++;
		}
		if (i / 10 == 9)
		{
			flag2++;
		}
	}
	printf("数字9出现的次数为：%d\n", flag1 + flag2);
	system("pause");
	return 0;
}