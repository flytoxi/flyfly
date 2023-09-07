#pragma warning(disable:6031)//禁用 6031 的安全警告
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
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已有的元素个数

};
//声明函数
//初始化
void InitContact(struct Contact* ps);          
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//删除
void DelContact(struct Contact* ps);
//查找
void SearchContact(const struct Contact* ps);
//修改
void ModifyContact(struct Contact* ps);
//展示
void ShowContact(const struct Contact* ps);
//排序
void SortContact(struct Contact* ps);



