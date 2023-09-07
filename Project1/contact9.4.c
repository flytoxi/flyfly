#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include "contact.h"


void InitContact(struct Contact* ps)
{

	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;

}

static int FindPeople(const struct Contact* ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{

		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
			break;
		}
	}
	return -1;
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
		printf("���ӳɹ���\n");


	}

}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫɾ���˵�����:");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ�������!\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�!\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if (ret == -1)
		printf("û�д��˵���Ϣ��\n");
	else
	{
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
			
	}

}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫ�޸ĵ����֣�");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if(ret == -1)
	{
		printf("�Ҳ�������!\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[ret].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ret].sex);
		printf("������绰��");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ret].addr);
		printf("�޸ĳɹ���\n");
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

void SortContact(struct Contact* ps)
{
	int i = 0;
	int flag = 1; // ������һ��Ҫ����������Ѿ�����
	for (i = 0; i < ps->size; i++)
	{
		int j = 0;

		for (j = 0; j < ps->size-1- i; j++)
		{
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				struct PeoInfo p = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] =  p;
				flag = 0; //���������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	printf("����ɹ���\n");


}