#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("******  0.�˳���Ϸ 1.����Ϸ  ******\n");
	printf("***********************************\n");
}
void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	disply_board(board, ROW, COL);
	while (1)
	{
		player_board(board, ROW, COL);
		disply_board(board, ROW, COL);
		ret = check_win(board, ROW, COL);
		if (' ' != ret)
		{
			break;
		}
		computer_board(board, ROW, COL);
		disply_board(board, ROW, COL);
		ret = check_win(board, ROW, COL);
		if (' ' != ret)
		{
			break;
		}
	}
	if ('X' == ret)
	{
		printf("���Ӯ\n");
	}
	else if ('0' == ret)
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	disply_board(board, ROW, COL);
}
int main()
{
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}