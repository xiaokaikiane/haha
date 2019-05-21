#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/*
void menu()
{
	int i;
	printf("--------------\n");
	printf("开始游戏 1\n");
	printf("退出游戏 0\n");
	printf("--------------\n");
	printf("请输入0或1:");
	scanf("%d", &i);
}
void game()
{
	srand((unsigned int)time(0));
	int num = rand() % 100 + 1;
	while (1)
	{
		int a;
		printf("请输入您猜的数字:");
		scanf("%d", &a);
		if (a > num)
		{
			printf("大了\n");
		}
		if (a < num)
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
*/

int main()
{
	int a;
	printf("请输入想要查找的数字:");
	scanf("%d", &a);
	int arr[] = { 3,6,9,24,27,29,36 };
	int lengh = sizeof(arr) / sizeof(arr[1])-1;
	int right = lengh;
	int left = 0;
	for (;;)
	{
		int mid = (left + right)/2;
		if (a == arr[mid])
		{
			printf("找到这个数字,其数组下标为:%d\n", mid);
			break;
		}
		else if (a > arr[mid])
		{
			left = mid+1;
		}
		else
		{
			right = mid-1;
		}
		if (left > right)
		{
			return -1;
		}
	}
	system("pause");
	return 0;
 }


/*
void menu()
{
	int a;
	printf("--------------------\n");
	printf("-------1.登录账户----\n");
	printf("-------0.退出系统----\n");
	printf("--------------------\n");
	printf("请输入你的选择:");
	scanf("%d", &a);
	char password[500] = {0};
	if (a == 1)
	{
		for (int i = 1; i < 4; i++)
		{
			printf("请输入密码:");
			scanf("%s", password);
			if (strcmp(password, "qwerty") == 0)
			{
				printf("登录成功!\n");
				break;
			}
			if (i == 3)
			{
				printf("输入密码超过三次,禁止登录!\n");
			}
		}
	}
	else if (a == 0)
	{
		printf("退出成功\n");
	}
	else
	{
		printf("您的输入有误!\n");
	}
}
int main()
{
	menu();
	system("pause");
	return 0;
}

*/

/*
int main()
{
	printf("请输入字符:");
	while (1)
	{
		char a = getchar();
		if (a <= 'Z'&&a >= 'A')
		{
			printf("%c", a + 32);
		}
		else if(a <= 'z'&&a >= 'a')
		{
			printf("%c", a - 32);
		}
		else if (a <= '9'&&a >= '0');
		{
			continue;
		}
		if (a = '#')
		{
			break;
		}
	}
	system("pause");
	return 0;
}
*/