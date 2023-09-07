#pragma warning(disable:6031)//禁用 6031 的安全警告



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
		printf("通讯录已满!\n");

	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功。\n");


	}

}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要删除人的名字:");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if (ret == -1)
	{
		printf("找不到此人!\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功!\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要查找的名字：");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if (ret == -1)
		printf("没有此人的信息。\n");
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
	printf("请输入你要修改的名字：");
	scanf("%s", name);
	int ret = FindPeople(ps, name);
	if(ret == -1)
	{
		printf("找不到此人!\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[ret].addr);
		printf("修改成功。\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{

		printf("通讯录为空。\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
	int flag = 1; // 假设这一趟要排序的数据已经有序。
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
				flag = 0; //本趟排序的数据其实不完全有序。
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	printf("排序成功。\n");


}
