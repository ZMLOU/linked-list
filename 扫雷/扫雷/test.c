#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("*****    1.play     0.exit    *****\n");
	printf("***********************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS,'*');
	Set(mine, ROW, COL);
	Display(show, ROW, COL);
	Display(mine, ROW, COL);
	Clean(mine,show, ROW, COL);
}
int main()
{
	test();
	system("pause");
	return 0;
}