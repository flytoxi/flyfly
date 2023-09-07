#pragma warning(disable:6031)//���� 6031 �İ�ȫ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 100
#define DEFAULT_SZ 3
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo *data;
	int size;//��¼��ǰ���е�Ԫ�ظ���
	int capacity;

}Contact;
//��������
//��ʼ��
void InitContact(Contact* ps);          
//����һ����Ϣ��ͨѶ¼
void AddContact(Contact* ps);
//ɾ��
void DelContact(Contact* ps);
//����
void SearchContact(const Contact* ps);
//�޸�
void ModifyContact(Contact* ps);
//չʾ
void ShowContact(const Contact* ps);
//����
void SortContact(Contact* ps);
//����
void DestroyContact(Contact* ps);



