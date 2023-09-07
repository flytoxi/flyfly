#pragma warning(disable:6031)//禁用 6031 的安全警告
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
	int size;//记录当前已有的元素个数
	int capacity;

}Contact;
//声明函数
//初始化
void InitContact(Contact* ps);          
//增加一个信息到通讯录
void AddContact(Contact* ps);
//删除
void DelContact(Contact* ps);
//查找
void SearchContact(const Contact* ps);
//修改
void ModifyContact(Contact* ps);
//展示
void ShowContact(const Contact* ps);
//排序
void SortContact(Contact* ps);
//销毁
void DestroyContact(Contact* ps);



