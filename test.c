#pragma warning(disable:6031)//禁用 6031 的安全警告

#include "game.h"



//井字棋游戏。

void menu()
{
	printf("--------------------------------------\n");
	printf("----------1. play    0. exit----------\n");
	printf("--------------------------------------\n");
}

void game()
{
	int ret = 0;
	//数组 - 存放整个棋盘信息。
	char board[ROW][COL] = { 0 };//全部空格。
	//初始化棋盘。
	InitBoard(board, ROW, COL);
	//打印棋盘。
	DisplayBoard(board, ROW, COL);
	// 下棋。
	while (1)
	{
		
		// 玩家下棋；
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		system("cls");
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		// 电脑下棋。
		WindowsMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局。\n");
	}
}

void test()
{
	int input = 0;
	do
	{	
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请再次输入：\n");
			break;
		}

	} while (input);

}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}