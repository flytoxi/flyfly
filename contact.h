#pragma warning(disable:6031)//���� 6031 �İ�ȫ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���

};

void InitContact(struct Contact* ps);                              
void AddContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
