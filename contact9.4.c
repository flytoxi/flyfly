#pragma warning(disable:6031)//���� 6031 �İ�ȫ����


#include "contact.h"



void menu()
{

	printf("************************************************\n");
	printf("********    1. add         2. del     **********\n");
	printf("********    3. search      4. modify  **********\n");
	printf("********    5. show        6. sort    **********\n");
	printf("********    0. exit                   **********\n");
	printf("************************************************\n");

}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			//ModifyContact();
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//SortContact();
			break;
		case EXIT:
			printf("�˳�����.\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (1);
	return 0;
}