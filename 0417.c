#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int func(int arr[],int len)
{
	int left = 0; int right = len - 1;
	while (left < right)
	{
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		 if (left < right)
		 {
			 int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right++;
		}
	}
}
//因为要返回位置坐标（两个值），考虑到函数只能有一个返回值，所以这里采用了封装成结构体的方式
typedef struct Position
{
	int x;
	int y;
}Position;
Position FindNum(int array[][COL], int data)
{
	//从最右上角开始查找，如果找到就返回对应位置坐标，没找到对应的坐标则为-1，-1
	Position p;
	p.x = -1;
	p.y = -1;
	int row = 0;
	int col = COL - 1;
	while (row < ROW&&col >= 0)
	{
		if (data == array[row][col])
		{
			p.x = row;
			p.y = col;
			return p;
		}
		else if (data > array[row][col])
		{
			row++;
		}
		else
		{
			col--;
		}
	}
	return p;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	func(arr,len);
	for (int j = 0; j <= len; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	int array[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 },{ 7, 8, 9 } };
	int key = 0;
	printf("请输入要查找的数字：");
	scanf("%d", &key);
	Position p1 = FindNum(arr, key);
	if (p1.x != -1 && p1.y != -1)
	{
		printf("找到了，下标为%d %d\n", p1.x, p1.y);
	}
	else
	{
		printf("不存在\n");
	}
	system("pause");
	return 0;
}