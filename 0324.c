#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
int main()
{
	int i, j;
	for (i = 1; i <= 7; ++i)
	{
		for (j = 1; j <= (2 * i) - 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i > 0; --i)
	{
		for (j = 1; j <= (2 * i) - 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/

/*
int main()
{
	printf("以下为0-999的水仙花数字:");
	int a, b, c;
	for (int i = 0; i < 1000; i++)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = (i % 100) % 10;
		if (i > 99)
		{
			if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
			{
				printf("%d ", i);
			}
		}
		continue;
	}
	printf("\n");
	system("pause");
	return 0;
}
*/
/*
int main()
{
	int a,sn=0,sum=0;
	printf("请输入一个0-9之间的数:");
	scanf("%d", &a);
	for (int i = 1; i <= 5; i++)
	{
		sn = sn * 10 + a;
		sum = sum + sn;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
*/


void menu()
{
	int i;
	printf("--------------\n");
	printf("开始游戏 1\n");
	printf("退出游戏 0\n");
	printf("--------------\n");
	printf("请输入0或1:");
	scanf("%d",&i);
}
void game()
{
	srand((unsigned int)time(0));
	int num = rand() % 100 + 1;
	while (1)
	{
		int a;
		printf("请输入您猜的数字:");
		scanf("%d",&a);
		if (a > num)
		{
			printf("大了\n");
		}
		if (a<num)
		{
			printf("小了\n");
		}
		if (a == num)
		{
			printf("正确\n");
			break;
		}
	}
}
int main()
{
	menu();
	game();
	system("pause");
	return 0;
}
