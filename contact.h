#pragma warning(disable:6031)//���� 6031 �İ�ȫ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


#define MAX 100
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


struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct TMP
{
	struct PeoInfo data[MAX];
};
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���

};
//��������
//��ʼ��
void InitContact(struct Contact* ps);          
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//ɾ��
void DelContact(struct Contact* ps);
//����
void SearchContact(const struct Contact* ps);
//�޸�
void ModifyContact(struct Contact* ps);
//չʾ
void ShowContact(const struct Contact* ps);
//����
void SortContact(struct Contact* ps);



