#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include "contact.h"


void InitContact(struct Contact* ps)
{

	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;

}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����!\n");

	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ���\n");
		

	}

}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫɾ���˵�����:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
		
	}
	if (i == ps->size)
	{
		printf("�Ҳ�������!\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�!\n");
	}
}

void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
			break;

		}
		else
			printf("û�д��˵���Ϣ��\n");
	}
	
}



void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{

		printf("ͨѶ¼Ϊ�ա�\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

