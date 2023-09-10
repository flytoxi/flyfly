#pragma warning(disable:6031)//���� 6031 �İ�ȫ����

#include "game.h"



//��������Ϸ��

void menu()
{
	printf("--------------------------------------\n");
	printf("----------1. play    0. exit----------\n");
	printf("--------------------------------------\n");
}

void game()
{
	int ret = 0;
	//���� - �������������Ϣ��
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ�����̡�
	InitBoard(board, ROW, COL);
	//��ӡ���̡�
	DisplayBoard(board, ROW, COL);
	// ���塣
	while (1)
	{
		
		// ������壻
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		system("cls");
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		// �������塣
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
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
	}
}

void test()
{
	int input = 0;
	do
	{	
		menu();
		printf("��ѡ��");
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
			printf("����������ٴ����룺\n");
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