#include"game.h"




void menu()
{
	printf("*********************\n");
	printf("****** 1.play *******\n");
	printf("****** 0.exit *******\n");
	printf("*********************\n");

}


void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ�����������Ϊָ��������
	//mine ������û�в����׵�ʱ�򣬶��ǡ�0��
	InitBoard(mine, ROWS, COLS,'0');
	//show ������û�в����׵�ʱ�򣬶��ǡ�*��
	InitBoard(show, ROWS, COLS,'*');

	//DisplayBoard(mine, ROW, COL);
	 
	//������
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);

	//�Ų���
	FindMine(mine,show, ROW, COL);






}


int main()
{
	int input = 0;
	//������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}