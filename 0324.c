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
	printf("����Ϊ0-999��ˮ�ɻ�����:");
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
	printf("������һ��0-9֮�����:");
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
	printf("��ʼ��Ϸ 1\n");
	printf("�˳���Ϸ 0\n");
	printf("--------------\n");
	printf("������0��1:");
	scanf("%d",&i);
}
void game()
{
	srand((unsigned int)time(0));
	int num = rand() % 100 + 1;
	while (1)
	{
		int a;
		printf("���������µ�����:");
		scanf("%d",&a);
		if (a > num)
		{
			printf("����\n");
		}
		if (a<num)
		{
			printf("С��\n");
		}
		if (a == num)
		{
			printf("��ȷ\n");
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
