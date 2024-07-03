#define _CRT_SECURE_NO_WARNINGS
//测试游戏的逻辑

#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("*********1.play 0.exit**********\n");
	printf("********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//打印棋盘
		ComputerMove(board, ROW, COL);//电脑下棋
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//打印棋盘
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
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
			printf("选择错误!\n");
			break;
		}

	} while (input);
	return 0;
}




