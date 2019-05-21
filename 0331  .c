#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int print(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			int c = i * j;
			printf("%d*%d=%d ", i, j, c);
			if (i == j)
			{
				printf("\n");
			}
		}
	}
}
int swap(int* x,int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int judge(int* x)
{
	if (*x % 4 == 0 && *x % 100 != 0 || *x % 400 == 0)
	{
		printf("����һ������\n");
	}
	else
	{
		printf("�ⲻ��һ������\n");
	}
}
int judge1(int* x)
{
	for (int i = 2; i < *x; ++i)
	{
		if (*x%i == 0)
		{
			printf("�ⲻ��һ������\n");
			break;
		}
		else if(i == *x - 1)
		{
			printf("����һ������\n");
		}
	}
}
void init(int arr[], int size)
{
	for (int i=0; i < size; ++i)
	{
		arr[i] = i;
	}
}
void empty(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = '\0';
	}
}
void reverse(int arr[], int size)
{
	int left = 0; int right = size - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++; right--;
	}
}
void print1(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	print(12);

	int a = 10; int b = 20;
	swap(&a,&b);
	printf("%d %d\n", a, b);

	int c;
	printf("������һ�����:");
	scanf("%d", &c);
	judge(&c);

	int d;
	printf("������һ����:");
	scanf("%d", &d);
	judge1(&d);

	int arr[8] = { 0,1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(arr[1]);
	init(arr, size);//����ĳ�ʼ��
	print1(arr, size);//��������
	printf("\n");
	empty(arr, size);//��������
	print1(arr, size);
	printf("\n");
	init(arr, size);
	reverse(arr, size);//����ĵ���
	print1(arr, size);
	printf("\n");

	system("pause");
	return 0;
}