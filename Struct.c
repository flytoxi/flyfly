#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>


//    struct  结构体


struct S
{
	char c;   //相对起始位置
			  //偏移量  0
	int i;    //        4
	double d; //        8
};
int main()
{
	//offsetof();  宏
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));

	return 0;
}



//struct W
//{
//	double weigh;
//	double tall;
//};
//
//struct Stu
//{
//	char name[30];
//	int age;
//	char sex[10];
//	char tele[20];
//	struct W w;
//}s3,s4,s5;// 全局变量
//
//int main()
//{
//	// 创建结构体变量   s  局部变量
//	struct Stu s = { "zhangsan", 22, "男", "15987456231", {75.55, 171.5} };
//	printf("姓名: %-10s\t年龄: %-10d\t性别: %-10s\t电话: %-10s\n", s.name, s.age, s.sex, s.tele);
//	printf("体重: %lf 身高: %lf", s.w.weigh, s.w.tall);
//	return 0;
//}



//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
////  让空间小的尽量集中在一起  少浪费一些空间 
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	//  内存对齐   #pragma pack()  自己定义默认对齐数  VS 默认 8
//	//  数据结构（尤其是栈）应该尽可能地在自然边界上对其，原因在于，为了访问未对齐的内存，处理器需要两次内存访问，而对其的内存访问仅需要一次访问
//	struct S1 s1 = { 0 };
//	int ret1 = sizeof(s1);
//	printf("%d\n", ret1);
//	struct S2 s2 = { 0 };
//	int ret2 = sizeof(s2);
//	printf("%d\n", ret2);
//	struct S3 s3 = { 0 };
//	int ret3 = sizeof(s3);
//	printf("%d\n", ret3); 
//	struct S4 s4 = { 0 };
//	int ret4 = sizeof(s4);
//	printf("%d\n", ret4);
//	return 0;
//}