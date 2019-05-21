#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Max_row 3
#define Max_col 3
char arr[Max_row][Max_col];
//��ӡ��Ϸ�˵�
int menu()
{
	printf("---------------\n");
	printf("--1.��ʼ��Ϸ---\n");
	printf("--0.�˳���Ϸ---\n");
	printf("---------------\n");
	printf("����������ѡ��0 or 1:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
//�ж������Ƿ���������
int isFull()
{
	for (int row = 0; row < Max_row; ++row)
	{
		for (int col = 0; col < Max_col; ++col)
		{
			if (arr[row][col] == ' ') 
			{
				return 0;//��ʾû����
			}
		}
	}
	return 1;//��ʾ����
}
//���������ʼ��
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
//����Ϸ������ж�,ѡ����Ӧ�ķ���ֵ
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
//�������,��ӡÿ���������º������Լ���ʼ����
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
//�����������
playerMove()
{
	while (1)
	{
		printf("������һ����������(row,col):");
		int row; int col;
		scanf("%d %d", &row, &col);
		if (row >= Max_row || row < 0 && col >= Max_col || col < 0)
		{
			printf("����������겻�Ϸ�\n");
			continue;
		}
		if (arr[row][col] != ' ')
		{
			printf("�������ѱ�ռ��\n");
			continue;
		}
		arr[row][col] = 'x';
		break;
	}
}
//���Ƶ�������
computerMove()
{
	while (1)
	{
		int row = rand() % Max_row;
		int col = rand() % Max_col;
		if (arr[row][col] != ' ')//����������겿λ' ',֤���������ѱ�ռ��
		{
			continue;
		}
		arr[row][col] = 'o';
		break;
	}
}
//������Ϸ�����й���
void game()
{
	init();
	char winer;//����������Ӧ�ķ���ֵ,�������Ϸ����Ӧ���
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
		printf("��һ�ʤ\n");
	}
	else if (winer == 'o')
	{
		printf("���Ի�ʤ\n");
	}
	else if(winer == 'z')
	{
		printf("ƽ��\n");
	}
	else
	{
		printf("������\n");
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
			printf("�ݰ�!\n");
		}
		else 
		{
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}