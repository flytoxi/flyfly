#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>


//    struct  �ṹ��


struct S
{
	char c;   //�����ʼλ��
			  //ƫ����  0
	int i;    //        4
	double d; //        8
};
int main()
{
	//offsetof();  ��
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
//}s3,s4,s5;// ȫ�ֱ���
//
//int main()
//{
//	// �����ṹ�����   s  �ֲ�����
//	struct Stu s = { "zhangsan", 22, "��", "15987456231", {75.55, 171.5} };
//	printf("����: %-10s\t����: %-10d\t�Ա�: %-10s\t�绰: %-10s\n", s.name, s.age, s.sex, s.tele);
//	printf("����: %lf ���: %lf", s.w.weigh, s.w.tall);
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
////  �ÿռ�С�ľ���������һ��  ���˷�һЩ�ռ� 
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
//	//  �ڴ����   #pragma pack()  �Լ�����Ĭ�϶�����  VS Ĭ�� 8
//	//  ���ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶��䣬ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�����ڴ���ʣ���������ڴ���ʽ���Ҫһ�η���
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