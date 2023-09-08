#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include "Dynamic contact.h"


void InitContact(Contact* ps)
{

	ps->data = (PeoInfo*)malloc(DEFAULT_SZ *sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ������е���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}
void CheckCapacity(Contact* ps);
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("Contact.txt", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact %s\n", strerror(errno));
		return;
	}
	
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	

	fclose(pfRead);
	pfRead = NULL;
}


static int FindPeople(const Contact* ps,char name[MAX_NAME])
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
void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�;\n");
		}
		else
			printf("����ʧ�ܡ�\n");
	}
}

void AddContact(Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//1.���ˣ����ӿռ�
	//2.������ɶ�¶�����
	CheckCapacity(ps);
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
	/*if (ps->size == MAX)
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


	}*/

}


void DelContact(Contact* ps)
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

void SearchContact(const Contact* ps)
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

void ModifyContact(Contact* ps)
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


void ShowContact(const Contact* ps)
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

void SortContact(Contact* ps)
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

void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("Contact.txt", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact %s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	printf("����ɹ�.\n");
	fclose(pfWrite);
	pfWrite = NULL;
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;

}
