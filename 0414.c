#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		sum = sum + ((value >> i) & 1)*pow(2, 31 - i);
	}
	return sum;
}
int average(int x, int y)
{
	return (x + y >> 1);
}
int select()
{
	int arr[] = { 1,1,2,2,3,3,4 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		int a=arr[i];
		for (int j = 0; j < length; j++)
		{
			if (i == j)
			{
				continue;
			}
			a = a ^ arr[j];
		}
		if (a == arr[i])
		{
			printf("%d\n", arr[i]);
		}
	}
}
void change(char arr[],int left,int right)
{
	while (left <= right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int func(char arr[])
{
	int i = 0;
	int left = 0;int  right = strlen(arr) - 1;
	change(arr, left, right);
	while (1)
	{
		if (arr[i] != ' '&&arr[i] != '\0')
		{
			i++;
		    continue;
		}
		right = i - 1;
		change(arr, left, right);
		left = i + 1;
		if (arr[i] == '\0')
		{
			break;
		}
		i++;
	}
	printf("%s\n", arr);
}
int main()
{
	char arr[] = "student a am i";
	printf("%u\n", reverse_bit(25));
	printf("%d\n", average(10, 20));
	select();
	func(arr);
	system("pause");
	return 0;
}