#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max_row 9
#define Max_col 9
#define Max_Count 10
int menu()
{
	printf("-------------------\n");
	printf("--1.��ʼ��Ϸ--------\n");
	printf("--0.�˳���Ϸ--------\n");
	printf("-------------------\n");
	printf("����������ѡ��0 or 1: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char Shou_Map[Max_row][Max_col], char Mine_Map[Max_row][Max_col])
{
	for (int row = 0; row < Max_row; row++)
	{
		for (int col = 0; col < Max_col; col++)
		{
			Shou_Map[row][col] = '*';
		}
	}
	for (int row = 0; row < Max_row; row++)
	{
		for (int col = 0; col < Max_col; col++)
		{
			Mine_Map[row][col] = '0';
		}
	}
	int mine_count = Max_Count;
	while (mine_count > 0)
	{
		int row = rand() % Max_row;
		int col = rand() % Max_col;
		if (Mine_Map[row][col] == '#')
		{
			continue;
		}
		Mine_Map[row][col] = '#';
		mine_count--;
	}
}
void print(char Shou_Map[Max_row][Max_col])
{
	printf("  | 0 1 2 3 4 5 6 7 8\n");
	printf("---------------------\n");
	for (int row = 0; row < Max_row; row++)
	{
		printf(" %d|", row);
		for (int col = 0; col < Max_col; col++)
		{
			printf(" %c", Shou_Map[row][col]);
		}
		printf("\n");
	}
}
void check(int row, int col, char Shou_Map[Max_row][Max_col], char Mine_Map[Max_row][Max_col])
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && Mine_Map[row - 1][col - 1] == '#')
	{
		count++;
	}
	if (row - 1 >= 0 && Mine_Map[row - 1][col] == '#')
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 < Max_col&&Mine_Map[row - 1][col + 1] == '#')
	{
		count++;
	}
	if (col - 1 >= 0 && Mine_Map[row][col - 1] == '#')
	{
		count++;
	}
	if (col + 1 < Max_col&&Mine_Map[row][col + 1] == '#')
	{
		count++;
	}
	if (row + 1 < Max_row&&col - 1 >= 0 && Mine_Map[row + 1][col - 1] == '#')
	{
		count++;
	}
	if (row + 1 < Max_row&&Mine_Map[row + 1][col] == '#')
	{
		count++;
	}
	if (row + 1 < Max_row&&col + 1 < Max_col&&Mine_Map[row + 1][col + 1] == '#')
	{
		count++;
	}
	Shou_Map[row][col] = count + '0';
}
void game()
{
	char Shou_Map[Max_row][Max_col];
	char Mine_Map[Max_row][Max_col];
	Init(Shou_Map, Mine_Map);
	int flag = 0;
	while (1)
	{
		system("cls");
		print(Shou_Map);
		printf("��������Ҫ����������:");
		int row = 0; int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= Max_row || col < 0 || col >= Max_col)
		{
			printf("����������겻�Ϸ�!\n");
			continue;
		}
		if (Shou_Map[row][col] != '*')
		{
			printf("�������ѱ�����!\n");
			continue;
		}
		if (Mine_Map[row][col] == '#')
		{
			system("cls");
			print(Mine_Map);
			printf("��������,��Ϸ����!\n");
			return;
		}
		flag++;
		if (flag == Max_row * Max_col - Max_Count)
		{
			printf("��ϲ��,ͨ����!\n");
		}
		check(row, col, Shou_Map, Mine_Map);
	}
}
int main()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("�ݰ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	system("pause");
	return 0;
}