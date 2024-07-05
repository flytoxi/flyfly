#include"game.h"


//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

//��ӡ��Ϸ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for ( i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");

}
//������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASYCOUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS] ,int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	while (win<EASYCOUNT)
	{
		printf("������Ҫ�Ų�����꣺ x<%d y<%d:\n", row, col);
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��ը�ˣ� ��Ϸ������ \n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
		
				int i = 0;
				int j = 0;
				int num = 0;
				for (i = x - 1; i <= x + 1; i++)
				{
					for (j = y - 1; j <= y + 1; j++)
					{
						if (mine[i][j] == '1')
						{
							num++;
						}
					}
				}
				show[x][y] = num + '0';
				if (show[x][y] == '0')
				{
					for (i = x - 1; i <= x + 1; i++)
					{
						for (j = y - 1; j <= y + 1; j++)
						{							
							
							if (show[i][j] == '*')
							{
								int a = 0;
								int b = 0;
								int num2 = 0;
								for (a = i - 1; a <= i + 1; a++)
								{
									for (b = j - 1; b <= j + 1; b++)
									{
										if (mine[i][j] == '1')
										{
											num2++;																						
										}
									}
								}
								show[i][j] = num2 + '0';
								
							}
						}
					}
				}
				DisplayBoard(show, ROW, COL);
				int input = 0;
				printf("�Ƿ�����?������ǵĻ������� 1 \n");
				printf("�����ǵĻ����� 0 \n");
				scanf_s("%d", &input);
				if (input == 1)
				{
					int m = 0;
					int n = 0;
					printf("������Ҫ����׵����꣺\n");
					scanf_s("%d %d", &m, &n);
					show[m][n] = '-';
					win++;
					DisplayBoard(show, ROW, COL);
				}

			}
		}
		else
		{
			printf("������ǷǷ�����ֵ�����������룺\n");
		}
		if (win ==10)
		{
			printf("��ϲ�㣬���׳ɹ���\n");
			DisplayBoard(show, ROW, COL);
		}
	}

}
