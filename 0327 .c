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
	printf("��ʼ��Ϸ 1\n");
	printf("�˳���Ϸ 0\n");
	printf("--------------\n");
	printf("������0��1:");
	scanf("%d", &i);
}
void game()
{
	srand((unsigned int)time(0));
	int num = rand() % 100 + 1;
	while (1)
	{
		int a;
		printf("���������µ�����:");
		scanf("%d", &a);
		if (a > num)
		{
			printf("����\n");
		}
		if (a < num)
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
*/

int main()
{
	int a;
	printf("��������Ҫ���ҵ�����:");
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
			printf("�ҵ��������,�������±�Ϊ:%d\n", mid);
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
	printf("-------1.��¼�˻�----\n");
	printf("-------0.�˳�ϵͳ----\n");
	printf("--------------------\n");
	printf("���������ѡ��:");
	scanf("%d", &a);
	char password[500] = {0};
	if (a == 1)
	{
		for (int i = 1; i < 4; i++)
		{
			printf("����������:");
			scanf("%s", password);
			if (strcmp(password, "qwerty") == 0)
			{
				printf("��¼�ɹ�!\n");
				break;
			}
			if (i == 3)
			{
				printf("�������볬������,��ֹ��¼!\n");
			}
		}
	}
	else if (a == 0)
	{
		printf("�˳��ɹ�\n");
	}
	else
	{
		printf("������������!\n");
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
	printf("�������ַ�:");
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