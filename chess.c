#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Max_row 3
#define Max_col 3
char arr[Max_row][Max_col];
//打印游戏菜单
int menu()
{
	printf("---------------\n");
	printf("--1.开始游戏---\n");
	printf("--0.退出游戏---\n");
	printf("---------------\n");
	printf("请输入您的选择0 or 1:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
//判断棋盘是否落满棋子
int isFull()
{
	for (int row = 0; row < Max_row; ++row)
	{
		for (int col = 0; col < Max_col; ++col)
		{
			if (arr[row][col] == ' ') 
			{
				return 0;//表示没落满
			}
		}
	}
	return 1;//表示落满
}
//棋盘数组初始化
void init()
{
	for (int row = 0; row < Max_row; ++row)
	{
		for (int col = 0; col < Max_col; ++col)
		{
			arr[row][col] = ' ';
		}
	}
}
//对游戏结果的判断,选择相应的返回值
char check()
{
	for (int row = 0; row < Max_row; ++row)
	{
		if (arr[row][0] == arr[row][1] && arr[row][0] == arr[row][2])
		{
			return arr[row][0];
		}
	}
	for (int col=0; col < Max_col; ++col)
	{
		if (arr[0][col] == arr[1][col] && arr[0][col] == arr[2][col])
		{
			return arr[0][col];
		}
	}
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
	{
		return arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
	{
		return arr[0][2];
	}
	if (isFull())
	{
		return 'z';
	}
	return ' ';
}
//输出函数,打印每次棋子落下后棋盘以及初始棋盘
void print()
{
	for (int row = 0; row < Max_row; row++)
	{
		printf("| %c | %c | %c |\n", arr[row][0], arr[row][1], arr[row][2]);
		if (row != Max_row - 1)
		{
			printf("|---|---|---|\n");
		}
	}
}
//控制玩家落子
playerMove()
{
	while (1)
	{
		printf("请输入一个落子坐标(row,col):");
		int row; int col;
		scanf("%d %d", &row, &col);
		if (row >= Max_row || row < 0 && col >= Max_col || col < 0)
		{
			printf("您输入的坐标不合法\n");
			continue;
		}
		if (arr[row][col] != ' ')
		{
			printf("此坐标已被占用\n");
			continue;
		}
		arr[row][col] = 'x';
		break;
	}
}
//控制电脑落子
computerMove()
{
	while (1)
	{
		int row = rand() % Max_row;
		int col = rand() % Max_col;
		if (arr[row][col] != ' ')//当数入的坐标部位' ',证明该坐标已被占用
		{
			continue;
		}
		arr[row][col] = 'o';
		break;
	}
}
//控制游戏的运行过程
void game()
{
	init();
	char winer;//用来接收相应的返回值,来输出游戏的相应结果
	while (1)
	{
		system("cls");
		print();
		playerMove();
		winer = check();
		if (winer != ' ')
		{
			break;
		}
		computerMove();
		winer = check();
		if (winer != ' ')
		{
			break;
		}
	}
	system("cls");
	if (winer == 'x')
	{
		printf("玩家获胜\n");
	}
	else if (winer == 'o')
	{
		printf("电脑获胜\n");
	}
	else if(winer == 'z')
	{
		printf("平局\n");
	}
	else
	{
		printf("出错了\n");
	}
	print();
}
int main()
{
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("拜拜!\n");
		}
		else 
		{
			printf("您的输入有误\n");
		}
	}
	system("pause");
	return 0;
}