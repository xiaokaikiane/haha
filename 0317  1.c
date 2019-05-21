#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
	int a = 10; int b = 20; int c;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a = 7; int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a[10] = { 1,4,5,6,8,9,11,43,32,24 };
	int max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("最大的整数是:%d\n", max);
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a, b, c,d;
	printf("请输入三个数:");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a<b)
	{
		d = a;
		a = b;
		b = d;
	}
	if(a<c)
	{
		d = a;
		a = c;
		c = d;
	}
	if (b < c)
	{
		d = b;
		b = c;
		c = d;
	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}
*/


int main()
{
	int a, b;
	printf("请输入两个数；");
	scanf("%d,%d", &a, &b);
	int c = a;
	if (b < c)
	{
		c = b;
	}
	for (int i = c;i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("两个数的最大公约数是：%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}